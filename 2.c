#include <stdio.h>
#include <string.h>
#define strMAX 255


void main(){

	char input[strMAX];
    char *token;
    char output[strMAX];
    

    for (;;){

    printf(">");
    int temp = getchar();
    if (strcmp(temp,'\n')) break;
    strcpy(input,temp);
    token = strtok(input, " ");   
 
    while(token != NULL){
        printf("%s",token);
        token = strtok(NULL, " ");
    }
    
    }

}
