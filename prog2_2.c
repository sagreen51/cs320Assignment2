#include <stdio.h>
#include <string.h>
#define strMAX 255


void main(){

	char input[strMAX];
    char *token;
    char output[strMAX];
    
    int temp = getchar();
    int i = 0;
    
    
    while (temp != '\n' || temp != '\0'){
        strcat(input, temp);
        temp = getchar();
    }

    token = strtok(input, " ");   
 
    while(token != NULL){
        printf("%s",token);
        token = strtok(NULL, " ");
    }

}
