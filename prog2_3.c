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

	input[(strlen(input))] =  '\0';

//    temp = strtok(input, " ");

    int wordCount = 0;

	int length = strlen(input);

    for (int i = 0; i < length; i++){

        int charCounter = 0;  
        int j;    
      if (input[0] == ' ')wordCount = 3;
        if (input[i] != ' '){
            charCounter++;            
            if (isdigit(input[i])){
                if (isdigit(input[i+1])||input[i+1] == ' '){
                    j = i;                
                    while(input[j] != ' ')j++;
                    charCounter+=j-i;
                    i = j+1;
                    wordCount++;
                    strcat(output,"INT ");
                }
                else{
                    strcat(output,"INT ");
                    break;
                    }            
            }
        else{
               j = i;                
               while(input[j] != ' ')j++;
               charCounter+=j-i;
               i = j+1;
               wordCount++;
               if (input[j+1] != '\0' ) strcat(output,"STR ");
               }
        }
         if (charCounter == 65)break;
         if (input[i] == '\n' || input[i] == '\0') break;
    }
        if (wordCount > 2) printf("ERROR! Incorrect number of tokens found\n");            
        else  printf("%s\n",output);
        output[0] = '\0';
        output[1] = '\0';
}
}












