#include <stdlib.h>
#include <stdio.h>

int main() {
	int *p;
	char *pp;
	float *ppp;

	p = 0;
	pp = 0;
	ppp = 0;
	
	p = malloc(32);
	pp = malloc(32);
	ppp = malloc(64);

	scanf("%d", &p);
	scanf("%s", pp);
	scanf("%f", &ppp);

	printf("%d, %s, %f, %p, %p, %p\n", p, pp, ppp, &p, &pp, &ppp);

	free(p);
	free(pp);
	free(ppp);


	return 0;
}
	
