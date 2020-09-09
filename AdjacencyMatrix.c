/*
 * Program implementing an adjacency matrix (used to represent a graph).
 * AUTHOR: rapteon: DATE: 17APR2020
 */

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define BUFFER_SIZE 10
typedef struct{
	short vertices;
	bool **edges; 
}AdjacencyMatrix;

void initialize(AdjacencyMatrix*);
void add_edge(short*, short*, AdjacencyMatrix*);
void remove_edge(short*, short*, AdjacencyMatrix*);
bool has_edge(short*, short*, AdjacencyMatrix*);
short* out_edges(short*, AdjacencyMatrix*, short*, short*);
short* in_edges(short*, AdjacencyMatrix*, short*, short*);

//Helper functions.
void showMatrix(AdjacencyMatrix*);
void getEdge(short*, short*);
void getVertex(short*);
void displayArray(short*, short*, short*);
void writeToDisk(AdjacencyMatrix*, FILE*);

int main(void){
	AdjacencyMatrix m;
	initialize(&m);
	int counter = 0, previousVertexCount;
	short tail = 0, head = 0, *array = NULL, size = 0, choice = 0;
	FILE *fp = fopen("graphs.txt", "a");

	if(!fp)
		return 2;

	//The while loop runs as long as 'counter' is less than
	//m.vertices*m.vertices+7//for the 7 options.
	//m.vertices*m.vertices since the graph can be a complete graph.
	
	while(counter < m.vertices*m.vertices+7){
		printf("Operations:\n");
		printf("1\tadd_edge(i,j)\n");
		printf("2\tremove_edge(i,j)\n");
		printf("3\thas_edge(i,j)\n");
		printf("4\tout_edges(i)\n");
		printf("5\tin_edges(i)\n");
		printf("6\tshowMatrix()\n");
		printf("7\texit\n");
		printf("[1/2/3/4/5/6/7]\n: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: getEdge(&tail, &head);
				add_edge(&tail, &head, &m);	
				break;
			case 2: getEdge(&tail, &head);
				remove_edge(&tail, &head, &m);
				break;
			case 3: getEdge(&tail, &head);
				has_edge(&tail, &head, &m)?printf("Has edge?: Yes\n"):printf("Has edge?: No\n");
				break;
			case 4: getVertex(&tail);
				array = out_edges(&tail, &m, array, &size);
				displayArray(array, &size, &choice);
				break;
			case 5: getVertex(&head);
				array = in_edges(&head, &m, array, &size);
				displayArray(array, &size, &choice);
				break;
			case 6: showMatrix(&m);
				break;
			case 7: counter = m.vertices*m.vertices+7;
				break;
			default:printf("Invalid option.\n");
		}
		counter++;
	}
	//After this is done, writing the matrix to the file.
	writeToDisk(&m,fp);		
}

void initialize(AdjacencyMatrix *m){
	printf("Vertices: ");
	scanf("%d", &m->vertices);
	m->edges = (bool**)calloc(m->vertices, sizeof(bool*));
	
	//Initializing each array making the row.
	for(short i = 0; i < m->vertices; i++)
		m->edges[i] = (bool*)calloc(m->vertices, sizeof(bool));
}

void add_edge(short *i, short *j, AdjacencyMatrix *m){
	if(*i < 0 || *j < 0 || *i > m->vertices-1 || *j > m->vertices-1){
		printf("One or more edges are invalid.\n");
		return;
	}
	m->edges[*i][*j] = true;
}

void remove_edge(short *i, short *j, AdjacencyMatrix *m){
	if(*i < 0 || *j < 0 || *i > m->vertices-1 || *j > m->vertices-1){
		printf("One or more edges are invalid.\n");
		return;
	}
	m->edges[*i][*j] = false;
}

bool has_edge(short *i, short *j, AdjacencyMatrix *m){
	if(m->edges[*i][*j])
		return true;
	else
		return false;
}
short* out_edges(short *i, AdjacencyMatrix *m, short* array, short *size){
	short count = 0;
       	array = (short*)calloc(m->vertices, sizeof(short));
	for(short j = 0; j < m->vertices; j++)
		if(m->edges[*i][j])
			array[count++] = j;
	*size = count;
	short *toReturn = (short*)realloc(array, count);
	if(toReturn)
		return array;
	else
		return NULL;
}

short* in_edges(short *j, AdjacencyMatrix *m, short* array, short *size){
	short count = 0;
       	array = (short*)calloc(m->vertices, sizeof(short));
	for(short i = 0; i < m->vertices; i++)
		if(m->edges[i][*j])
			array[count++] = i;
	*size = count;
	short *toReturn = (short*)realloc(array, count);
	if(toReturn)
		return array;
	else
		return NULL;
}

//Helper functions.
void showMatrix(AdjacencyMatrix *m){
	printf("Matrix\n");
	for(int i = 0; i < m->vertices; i++){
		printf("\t");
		for(int j = 0; j < m->vertices; j++)
			(m->edges[i][j])?printf("1 "):printf("0 ");
		printf("\n");
	}
}
void getEdge(short *i, short *j){
	printf("Note:\nVertices are labelled from 0 to n|V|.\n");
	printf("Tail: ");
	scanf("%d", &*i);
	printf("Head: ");
	scanf("%d", &*j);
}
void getVertex(short *i){
	printf("Vertex: ");
	scanf("%d", &*i);
}
void displayArray(short *a, short *s, short *opt){
	if(*opt == 5)
		printf("Head to the following:\n");
	else if(*opt == 4)
		printf("Tail to the following:\n");
	for(short i = 0; i < *s; i++)
		printf("%d ", a[i]);
	printf("\n");
}
void writeToDisk(AdjacencyMatrix *m, FILE *fp){
	//This function writes the graph to the file 'graphs.txt'
	if(!fp)
		return;
	fprintf(fp, ":Graph:\nVertices:%d\n", m->vertices);
	for(int i = 0; i < m->vertices; i++){
		for(int j = 0; j < m->vertices; j++)
			fprintf(fp, "%d ", m->edges[i][j]);
		fputc('\n', fp);
	}
	fclose(fp);
}
