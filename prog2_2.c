#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 265

void main (){

	char input[MAX_STR_SIZE];
	char *temp;
	char output[MAX_STR_SIZE];

	printf("Assignment #2-2, Steven Green, s.a.green51@gmail.com\n");
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
            if (isdigit(input[i])){
                if (isdigit(input[i+1])||input[i+1] == ' '){
                    printf("INT ");          
                    j = i;                
                    while(input[j] != ' ')j++;
                    charCounter+=j-i;
                    i = j;
                }
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
