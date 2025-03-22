#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int Zahlenspiel() {
	int N, eingabe_zahlenspiel, *tmp;
	int trys = 0;
	printf("Dieses Zahlen raten Spiel hat als Untergrenze 0, geben Sie eine Eingabe fuer das obere Ende: \n");
	scanf("%d", &N);
	int value = rand() % (N + 1);
	*tmp=malloc(sizeof(int));
	do {
		printf("Erraten Sie die Zahl: \t");
		scanf("%d", &eingabe_zahlenspiel);
		trys = trys+1;
		*tmp = &trys;
		if(eingabe_zahlenspiel < value) {
			printf("\nDie Zahl ist zu klein\t\t\ttry:%d\n", *ptr);
		}
		if(eingabe_zahlenspiel > value) {
			printf("\nDie Zahl ist zu gross\t\t\ttry:%d\n",*ptr;
		}
		if(eingabe_zahlenspiel == value) {
			printf("\nSie haben die Zahl gefunden\n");
		}
	} while (eingabe_zahlenspiel != value);
	free(tmp);
	return trys;	
}
int main(int argc, char *argv[]) {
	int  trys;
	trys = Zahlenspiel();
	printf("Die Anzahl von Versuchen die Sie gebraucht haben: %d\n",trys);
	return 0;
}
	
