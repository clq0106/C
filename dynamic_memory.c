
 #include <stdio.h>
        #include <stdlib.h>
        #include <assert.h>

        int test_function(int* pppp) {
            int *pVariable = 0;

            assert(pppp);

            pVariable = (int*) calloc(5, sizeof(int));
            
            printf("\n\nDies ist eine seperate fundtion, geben sie bitte eine int ein: \t");
            scanf("%d", &pVariable);
            *pppp = pVariable;
            free(pVariable);
            return 0;
        } 
        int main(int argc, char *argv[]) {
            int *p, *pppp, n = 5;
            char *pp, eingabe;
            float *ppp, *ppppp;

            p = 0;
            pp = 0;
            ppp = 0;
            pppp = 0;
            ppppp = 0;

            p = malloc(n * sizeof(int));
            pp = malloc(n * sizeof(char));
            ppp = malloc(n * sizeof(float));

            if (!(ppppp = (float *) malloc(n * sizeof(float))))
            {
                exit (101);
            }

            printf("\n\nGeben Sie zuerst eine intiger ein: \t");
            scanf("%d", &p);

            printf("\nGeben Sie als zweites einen, bis zu 32 Charaktere langen, Text ein: \t");
            scanf("%s", pp);

            printf("\nGeben Sie als dritte Eingabe eine Float ein: \t");
            scanf("%f", &ppp);

            printf("\nGeben Sie nun als letzte Eingabe eine weitere float ein: \t");

            test_function(*pppp);

            printf("%d, %s, %f, %d, %p, %p, %p, %p\n", *p, *pp, *ppp, *pppp, &p, &pp, &ppp, &pppp);

            free(p);
            free(pp);
            free(ppp);
            free(pppp);
            free(ppppp);

            return 0;
        }
