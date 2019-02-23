/*Program to calculate area based on given options.*/

#include<math.h>
#include<stdio.h>

int choices()
{
	int choice;	

	printf("Select the figure to find the area...\n");
	printf("1. Rectangle/Square\n");
	printf("2. Circle\n");
	printf("3. Triangle\n");
	printf("Select 1/2/3/?\n");
	scanf("%d", &choice);
	
	return(choice);
}

float rectangle()
{
	float area;
	float length,breadth;
	char miniAns;	
	
	printf("Is it a square?[T/f]\n");
	scanf(" %c", &miniAns);

	if(miniAns == 'T'|| miniAns == 't')
	{
		printf("Enter the length of side of the square\n");
		scanf("%f", &length);
		area = pow(length, 2);
	}
	else if(miniAns == 'f'||miniAns == 'F')
	{
		printf("Enter the length of the rectangle\n");
		scanf("%f", &length);
		printf("Enter the breadth of teh rectangle.\n");
		scanf("%f", &breadth);
		area = length * breadth;
	}
	else
	{
		printf("You did not select the figure.\n");
		printf("Hence exiting the program. Please try again.\n");
	}
	return(area);
}

float circle(float radius)
{
	float area_circle;

	area_circle = 3.14*radius*radius;
	
	return(area_circle);
}

float triangle_area(float s1, float s2, float s3)		/*s1, s2 and s3 are the sides of the triangle*/
{
	float s = (s1+s2+s3)/2;
	float area_triangle = sqrt(s*(s-s1)*(s-s2)*(s-s3));

	return(area_triangle);
}
int main()
{
	int choice = choices();
	float area;
	if(choice == 1)
	{
		area = rectangle();
		printf("The area of the rectangle/square is %f square units\n", area);
	
	}
	else if(choice == 2)
	{
		float radius;		
		printf("Enter the radius of the circle\n");
		scanf("%f", &radius);
		area = circle(radius);
		printf("The area of the circle is %f square units\n", area);
	}
	else if(choice == 3)
	{
		float s1, s2, s3;
		printf("Enter the sides of the triangle, each side length separated by a space between them... ");
		scanf("%f %f %f", &s1, &s2, &s3);
		area = triangle_area(s1, s2, s3);
		printf("The area of the triangle is %f square units\n", area);
	}
	
}
