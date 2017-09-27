
#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 265

void main (){

	char input[MAX_STR_SIZE];
	char *output;
	char temp[MAX_STR_SIZE];

	printf("Asignment #2-1, Steven Green, s.a.green51@gmail.com\n");

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
			temp[j-1] = '\0';
		}
		else strcpy(temp,output);

		totLength += tempLength;

		printf("=%s=\n",temp);

		output = strtok(NULL, " ");
	}


}
