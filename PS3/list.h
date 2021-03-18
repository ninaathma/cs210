#include <stdbool.h>
#include "node.h"

struct node* head;
bool addNode(struct node* node); //Add a node to the list
struct node* findNode(int value); //Find a node in the list
bool deleteNode (struct node* node); //Delete a node in the list
void printList(void); //Print the values in the list
int countVals(void); //Count values in the list