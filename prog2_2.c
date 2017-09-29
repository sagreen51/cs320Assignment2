#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 265

void main (){

	char input[MAX_STR_SIZE];
	char *temp;
	char output[MAX_STR_SIZE];

	printf("Assignment #2-1, Steven Green, s.a.green51@gmail.com\n");
    printf(">");
	fgets(input,MAX_STR_SIZE,stdin);

	input[(strlen(input))] =  '\0';

    //temp = strtok(input, " ");

	int length = strlen(input);

    for (int i = 0; i < length; i++){
        
        int charCounter = 0;  
        int j;    
  
        if (charCounter == 65)break;
        if (input[i] == '\n' || input[i] == '\0') break;
        if (input[i] != ' '){
            charCounter++;            
            
            if (input[i] == '1' ||input[i] == '2' ||input[i] == '3' ||input[i] == '4' ||input[i] == '5' ||input[i] == '6' ||input[i] == '7' ||input[i] == '8'||input[i] == '9'){
                j = i;           
                if (!isdigit(input[j+1])){
                printf("STR ");
                continue;
                }     
                while(input[j] != ' ')j++;
                charCounter+=j-i;
                i = j;
                printf("INT "); 
            }
            else{
                j = i;                
                while(input[j] != ' ')j++;
                charCounter+=j-i;
                i = j;
                printf("STR ");
            }           
        }
    }
}
