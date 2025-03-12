#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int Zahlenspiel() {
	int N, eingabe_zahlenspiel;
	int trys = 0
	printf("Dieses Zahlen raten Spiel hat als Untergrenze 0, geben Sie eine Eingabe fuer das obere Ende: \t");
	sacnf("%d", &N);
	int value = rand() % (N + 1);
	do {
		printf("Erraten Sie die Zahl");
		scanf("%d", eingabe_zahlenspiel);
		trys = trys++;
		switch(eingabe_zahlenspiel) {
			case eingabe_zahlenspiel<value:
			printf("\tDie Zahl ist zu niedrig);
				break;
	}
	while (eingabe_zahlenspiel != value)
	return trys;	
}

int test_function() {
	variable = 0;

	variable = malloc(32);
	
	prtinf("Dies ist eine seperate fundtion, geben sie bitte eine int ein: \t");
	scanf("%d", variable);

	free(variable);
	return *variable;
}
int main() {
	int *p, eingabe, *pppp, trys;
	char *pp;
	float *ppp;

	p = 0;
	pp = 0;
	ppp = 0;

	printf("Geben Sie die Zahl "1" ein im Falle, das Sie spielen wollen und eine beliebig andere Zahl wenn sie ein Zahlen-Spiel spielen wollen");
	scanf("%d", &eingabe);
	
	if(eingabe == 1) {
	p = malloc(32);
	pp = malloc(32);
	ppp = malloc(64);

	printf("Geben Sie zuerst eine intiger ein: \t");
	scanf("%d", &p);

	printf("Geben Sie als zweites einen, bis zu 32 Charaktere langen, Text ein: \t");
	scanf("%s", pp);

	printf("Geben Sie als drittte Eingabe eine Float ein: \t");
	scanf("%f", &ppp);

	printf("Geben Sie nun als letzte Eingabe eine weitere Intiger ein: \t");
	*pppp = test_function();
	printf("%d, %s, %f, %d, %p, %p, %p, %p\n", p, pp, ppp, pppp, &p, &pp, &ppp, &pppp);

	free(p);
	free(pp);
	free(ppp);
	}
	else {
		trys = Zahlenspiel();
	}
	return 0;
}
	
