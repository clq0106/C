#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int Zahlenspiel() {
	int N, eingabe_zahlenspiel;
	int trys = 0;
	printf("Dieses Zahlen raten Spiel hat als Untergrenze 0, geben Sie eine Eingabe fuer das obere Ende: \t");
	scanf("%d", &N);
	int value = rand() % (N + 1);
	do {
		printf("Erraten Sie die Zahl");
		scanf("%d", eingabe_zahlenspiel);
		trys = trys++;
/*		switch(eingabe_zahlenspiel) {
			case(eingabe_zahlenspiel<value):
				printf("\tDie Zahl ist zu niedrig");
				break;
			case(eingabe_zahlenspiel>value):
				printf("\tDie Zahl ist yu hoch");
				break;
			case(eingabe_zahlenspiel == value):
				printf("Sie haben die Zahl gefunden");
				break;
				} 
*/
		if(eingabe_zahlenspiel < value) {
			printf("\tDie Zahl ist zu klein");
		}
		if(eingabe_zahlenspiel > value) {
			printf("\tDie Zahl ist zu gross");
		}
		if(eingabe_zahlenspiel == value) {
			printf("\tSie haben die Zahl gefunden");
		}
	} while (eingabe_zahlenspiel != value);
	return trys;	
}
int main() {
	int  trys;
	trys = Zahlenspiel();
	return 0;
}
	
