
 #include <stdio.h>
        #include <stdlib.h>

        int test_function() {
            int *pVariable = 0;

            pVariable = (int*) calloc(5, sizeof(int));
            
            printf("Dies ist eine seperate fundtion, geben sie bitte eine int ein: \t");
            scanf("%d", &pVariable);

            free(pVariable);
            return *pVariable;
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

            printf("Geben Sie die Zahl '1' ein im Falle, dass Sie spielen wollen und eine beliebig andere Zahl wenn sie ein Zahlen-Spiel spielen wollen");
            scanf("%d", &eingabe);
            
            p = malloc(n * sizeof(int));
            pp = malloc(n * sizeof(char));
            ppp = malloc(n * sizeof(float));

            if (!(ppppp = (int *)malloc(sizeof(float))))
            {
                exit (101);
            }
            

            printf("Geben Sie zuerst eine intiger ein: \t");
            scanf("%d", &p);

            printf("Geben Sie als zweites einen, bis zu 32 Charaktere langen, Text ein: \t");
            scanf("%s", pp);

            printf("Geben Sie als dritte Eingabe eine Float ein: \t");
            scanf("%f", &ppp);

            printf("Geben Sie nun als letzte Eingabe eine weitere Intiger ein: \t");

        *pppp = test_function();

            printf("%d, %s, %f, %d, %p, %p, %p, %p\n", *p, *pp, *ppp, *pppp, &p, &pp, &ppp, &pppp);

            free(p);
            free(pp);
            free(ppp);
            free(pppp);

            return 0;
        }
