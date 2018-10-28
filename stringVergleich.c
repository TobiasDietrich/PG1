#include <stdio.h>

int main(int argc, char *argv[]){

	int i = 0;
	char string1[50];
	char string2[50];

	printf("Geben Sie einen String ein:");
	scanf("%s", string1);
	printf("Geben Sie einen String ein:");
	scanf("%s", string2);

	while(string1[i] != '\0'){
		if (string1[i] != string2[i]){
			printf("Die eingegebenen Strings sind nicht identisch!\n");
			return 1;
		}else(string1[i] == string2[i]);{
			i++;
		}
	}
	printf("Die eingebenen Strings sind identisch!\n");
	return 0;
}
