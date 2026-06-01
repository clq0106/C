#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

int main()
{

    struct Node *eins = NULL;
    struct Node *zwei = NULL;
    struct Node *drei = NULL;

    // memory allocieren
    eins = (struct Node *)malloc(sizeof(struct Node));
    zwei = (struct Node *)malloc(sizeof(struct Node));
    drei = (struct Node *)malloc(sizeof(struct Node));

    // Checken ob das allociern funktioniert hat
    if (!eins || !zwei || !drei) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // EInträge zu den linked list Gliedern zuteilen
    eins->data = 10;
    eins->next = zwei;

    zwei->data = 20;
    zwei->next = drei;

    drei->data = 30;
    drei->next = NULL;

    // Ausdrucken der Einträge
    struct Node *temp = eins;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    //mit einer while loop die drei einträge der list durchgehen und jeweils freen
    temp = eins;
    while (temp != NULL)
    {
        struct Node *next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}
