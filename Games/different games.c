#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int Zahlenspiel() {
	int N, eingabe_zahlenspiel, *tmp, *pA;
	int trys = 1;
	printf("Dieses Zahlen raten Spiel hat als Untergrenze 0, geben Sie eine Eingabe fuer das obere Ende: \n");
	scanf("%d", &N);
	int value = rand() % (N + 1);
//	*tmp = trys;
	do {
		printf("Erraten Sie die Zahl:\n");
		scanf("%d", &eingabe_zahlenspiel);
//		trys = trys+1;
//		*tmp = &trys;
		if(eingabe_zahlenspiel < value) {
			printf("\nDie Zahl ist zu klein\t\t\ttrys:%d\n", trys);
			trys ++;
		}
		if(eingabe_zahlenspiel > value) {
			printf("\nDie Zahl ist zu gross\t\t\ttrys:%d\n",trys);
			trys++;
		}
		if(eingabe_zahlenspiel == value) {
			printf("\nSie haben die Zahl gefunden\n");
		}
	} while (eingabe_zahlenspiel != value);
//	free(tmp);
	return trys;	
}
int main(int argc, char *argv[]) {
	int  trys;
	trys = Zahlenspiel();
	printf("Die Anzahl von Versuchen die Sie gebraucht haben: %d\n",trys);
	return 0;
}
