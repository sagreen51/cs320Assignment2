#include <stdio.h>
#include <string.h>
#include <math.h> 

#define MAX_STR_SIZE 265

void main (int argc, char *argv[]){

	char input[MAX_STR_SIZE];
	char output[MAX_STR_SIZE];
    char *temp;
    int length, numWords, charCounter, numChar, j;
    int counter = 0;    

	printf("Assignment #2-6, Steven Green, s.a.green51@gmail.com\n");

for(;;){
   // if (counter == 4) break;

     if(argc>2||argc == 1) {
        printf("ERROR! Program 6 accepts 1 command line argument.\n");
        return;
    }
    else if (argc == 2){
        for (int r =1 ; r <10; r++) if (argv[1] == 'r') continue;
    }
    else{
        printf("ERROR! Expected integer argument.\n");
        return;    
        }

    printf("> ");
    fgets(input,MAX_STR_SIZE,stdin);
    input[(strlen(input))-1] =  '\0';
	length = strlen(input);
    numWords = 0;
    charCounter = 0; 
    numChar = 0;
    
    if(input[0] == 'q' ||input[0] == 'Q' )if(input[1] == 'U'||input[1] == 'u')if( input[2] == 'i'||input[2] == 'I')if(input[3] == 't'||input[3] == 'T' ) if (input[4] == '\0') break;
        
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
        if (numChar > 65 )printf("ERROR! Input string too long.\n");
        else if (numWords > 2||numWords == 0) printf("ERROR! Incorrect number of tokens found.\n");   
        else if (output[0] == 'I'&& output[4] != '\0' ) {
            strcpy(output,"ERROR! Expected STR INT.");
            printf("%s\n",output);
            }  
        else if (output[0] == 'I') {
            strcpy(output,"ERROR! Expected STR.");
            printf("%s\n",output);
            } 
        else if (output[4] == 'S') {
            strcpy(output,"ERROR! Expected STR INT.");
            printf("%s\n",output);
            }        
        else  printf("%s\n",output);
        for (int y = 0; y < 7; y++) output[y] = '\0';
   //     counter++;
}
}
