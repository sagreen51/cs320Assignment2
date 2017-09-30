#include <stdio.h>
#include <string.h>
#include <math.h> 

#define MAX_STR_SIZE 265

void main (){

	char input[MAX_STR_SIZE];
	char output[MAX_STR_SIZE];
    int length, numWords, charCounter, j;

	printf("Assignment #2-3, Steven Green, s.a.green51@gmail.com\n");

for(;;){

    printf("> ");
    fgets(input,MAX_STR_SIZE,stdin);
    input[(strlen(input))-1] =  '\0';
	length = strlen(input);
    numWords = 0;

    for (int i = 0; i < length; i++){
        
        charCounter = 0;      
        
        if(input[0] == ' ' && input[1] == '\0'){
            numWords =3;
            break;
            } 
        if (input[i] != ' '){
            charCounter++;            
            if (isdigit(input[i])){
                if (isdigit(input[i+1])||input[i+1] == ' '){
                    numWords++;
                    strcat(output, "INT ");                 
                    j = i;                
                    while(input[j] != ' ')j++;
                    if (j==length-1) break;
                    charCounter+=(j-i); 
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
                    while(input[j] != ' ')j++;
                    charCounter+=(j-i);
                    i = j;
                    if (input[j] != '\0') strcat(output,"STR ");
                    numWords++;                 
           }
       }        
 
        if (input[i] == '\n' || input[i] == '\0' ) {     
            numWords = 3;  
            break;
            }
   }
        if (numWords > 2||numWords == 0) printf("ERROR! Incorrect number of tokens found.\n");            
        else  printf("%s\n",output);
        output[0] = '\0';
        output[1] = '\0';
}
}
