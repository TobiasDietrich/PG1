#include <stdio.h>

int main(int argc,char *argv[]){

	char string[50];
	int i = 0;

	printf("Geben Sie einen String ein:");
	scanf("%s", string);

	while(string[i] != '\0'){

		i++;
	
	}
	
	printf("Die Länge des String beträgt:%d\n", i);
	return 0;
 }
