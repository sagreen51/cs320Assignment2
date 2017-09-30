#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 265

void main (){

	char input[MAX_STR_SIZE];
	char *temp;
	char output[MAX_STR_SIZE];

	printf("Assignment #2-3, Steven Green, s.a.green51@gmail.com\n");

for(;;){

    printf(">");
    fgets(input,MAX_STR_SIZE,stdin);
    input[(strlen(input))-1] =  ' ';
	int length = strlen(input);
    int numWords = 0;

    for (int i = 0; i < length; i++){
        
        int charCounter = 0;  
        int j;    
        
        if(input[i] == ' ' && input[i+1] == '\0'){
            numWords =3;
            break;
            } 
        if (input[i] != ' '){
            charCounter++;            
            if (isdigit(input[i])){
                if (isdigit(input[i+1])||input[i+1] == ' '){
                    j = i;                
                    while(input[j] != ' ')j++;
                    charCounter+=(j-i);
                    if (charCounter > 65){
                        numWords = 3;
                        break; 
                        }
                    i = j;
                    numWords++;
                    strcat(output, "INT ");
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
                    if (charCounter > 65){
                        numWords = 3;
                        break; 
                        }
                    i = j;
                    strcat(output,"STR ");
                    numWords++;                 
           }
       }        
 
        if (input[i] == '\n' || input[i] == '\0') {
            numWords =3;        
            break;
            }
   }
        if (numWords > 2) printf("ERROR! Incorrect number of tokens found\n");            
        else  printf("%s\n",output);
        output[0] = '\0';
        output[1] = '\0';
}
}
