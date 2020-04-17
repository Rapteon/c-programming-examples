//AUTHOR: rapteon; DATE: 20200320
//Program to try the usage of strtok() function.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>  //Necessary to use strtok().

#define MAX_BUFFER_SIZE 32

int main(){
    char* inputBuffer = (char*)malloc(MAX_BUFFER_SIZE*sizeof(char));
    printf("Time Format: hh:mm:ss\n");
    printf("Enter time: ");
    fgets(inputBuffer, sizeof(inputBuffer), stdin);

    int hour = atoi(strtok(inputBuffer, ":"));
    int minutes = atoi(strtok(NULL, ":"));
    int seconds = atoi(strtok(NULL," "));

    printf("Hour: %d\n", hour);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);
    return 0;
}
