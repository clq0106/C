#include <stdlib.h>
#include <stdio.h>

int test_function() {
	variable = 0;

	variable = malloc(32);
	
	prtinf("Dies ist eine seperate fundtion, geben sie bitte eine int ein: \t");
	scanf("%d", variable);

	free(variable);
	return *variable;
}
int main() {
	int *p;
	char *pp;
	float *ppp;
	int *pppp;

	p = 0;
	pp = 0;
	ppp = 0;

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


	return 0;
}
	
