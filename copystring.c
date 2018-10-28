#include <stdio.h>

int main(int argc, char *argv[]){

	char eingabe[100];
	char kopie[100];
	int i = 0;

	printf("Geben Sie einen String ein:");
	scanf("%s", eingabe);

	while (eingabe[i] != '\0'){
	
		kopie[i]=eingabe[i];
		i++;
	}


	printf("Sie haben %s eingeben.\n", eingabe);
	printf("Kopie: %s\n", kopie);

	return 0;


}
