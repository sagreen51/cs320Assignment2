#include <stdio.h>
#include <string.h>
#include <math.h> 

#define MAX_STR_SIZE 265

void main (){

	char input[MAX_STR_SIZE];
	char output[MAX_STR_SIZE];
    char *temp;
    int length, numWords, charCounter, numChar, j;
    int counter = 0;    

	printf("Assignment #2-4, Steven Green, s.a.green51@gmail.com\n");

for(;;){
   // if (counter == 4) break;
    printf("> ");
    fgets(input,MAX_STR_SIZE,stdin);
    input[(strlen(input))-1] =  '\0';
	length = strlen(input);
    numWords = 0;
    charCounter = 0; 
    numChar = 0;
    
    if(input[0] == 'q' && input[1] == 'U' && input[2] == 'i' && input[3] == 'T') {
        numWords++;        
        break;
        }

    for (int p = 0; p <length; p++) numChar++; 

    for (int i = 0; i < length; i++){  
           
        
        if(input[0] == ' ' && input[1] == '\0'){
            numWords =3;
            break;
            } 
        if (input[i] != ' '){
            if (isdigit(input[i])){
                if (isdigit(input[i+1])||input[i+1] == ' '){
                    numWords++;
                    strcat(output, "INT ");                 
                    j = i;                
                    while(input[j] != ' '){
                        j++;
                        charCounter++;
                        }                                      
                    if (j==length-1) break;
                    i = j;
                }
                else{
                    numWords++;
                    strcat(output,"INT ");
                    break;
                }            
           }
           else { 
                    j = i;                
                    while(input[j] != ' '){
                        j++;
                        charCounter++;
                        }
                        i = j;
                    if (input[j] != '\0') strcat(output,"STR ");
                    numWords++;                 
           }
       }        
        if (input[i] == '\n' || input[i] == '\0') {     
            numWords = 3;  
            break;
            }
   }
        if (numChar > 20 )printf("ERROR! Input string too long.\n");
        else if (numWords > 2||numWords == 0) printf("ERROR! Incorrect number of tokens found.\n");            
        else  printf("%s\n",output);
        output[0] = '\0';
        output[1] = '\0';
   //     counter++;
}
}
