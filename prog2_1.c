
#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 265

void main (){

	char input[MAX_STR_SIZE];
	char *output;
	char temp[MAX_STR_SIZE];

	printf("Assignment #2-1, Steven Green, s.a.green51@gmail.com\n");

	fgets(input,MAX_STR_SIZE,stdin);

	input[(strlen(input)-1)] =  ' ';

	output = strtok(input, " ");

	int totLength = 0;

	while (output != NULL ){

		int j = 65 -totLength;

		int tempLength = strlen(output);

		if (tempLength > j){
			strncpy(temp,output,j);
			tempLength = j;
			temp[j] = '\0';
		}
		else strcpy(temp,output);

		totLength += tempLength;

		printf("=%s=\n",temp);

		output = strtok(NULL, " ");
	}


}
/*#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 265

void main (){

	char input[MAX_STR_SIZE];
	char *output;
	char temp[MAX_STR_SIZE];

	printf("Assignment #2-1, Steven Green, s.a.green51@gmail.com\n");

	fgets(input,MAX_STR_SIZE,stdin);

	input[(strlen(input))] =  '\0';

    int length = strlen(input);

    for (int i = 0; i < length; i++){
        
        int charCounter = 0;      
  
        if (charCounter == 65){ 
            printf("=\n");                
            break;
        }
        if (input[i] == '\n' || input[i] == '\0') break;
        if ((input[i] != ' ' && input[i-1] == ' ')||i == 0) printf("=");
        if (input[i] != ' '){
            charCounter++;            
            printf("%c",input[i]);
        }
        if (input[i] != ' ' && (input[i+1] == ' '||input[i+1] == '\0'||input[i+1] == '\n')) printf("=\n");
        else continue;


    }

}
*/
