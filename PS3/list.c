#include "list.h"
#include "node.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


bool addNode(struct node* node){
    //if list empty, make head the new node
    if(head == NULL) {
        head=node;
        return true;
    }
    //create traversal
    struct node* walker = head;
    while(walker->next != NULL) {
        walker=walker->next;
    }
    walker->next = node;
    return true;
} //Add a node to the list
struct node* findNode(int value){
    struct node* walker=head;
    while(walker != NULL ) {
        if(walker->value == value) return walker;
        walker = walker-> next;
    }
    return NULL;
} //Find a node in the list
bool deleteNode (struct node* node){
    if(head == NULL) return false;
    struct node *walker=head;
    struct node *prev = NULL;
    while(walker!=NULL) {
        prev=walker;
        walker=walker->next;
    }
    prev->next = walker->next;
    return true;

} //Delete a node in the list
void printList(void) {
    struct node *walker = head;
    while (walker != NULL) {
        printf("%i ,", walker->value);
        walker = walker->next;
    }
}

//Print the values in the list

void deleteLargest(void) {
    //find largest val
    struct node* walker = head;
    int max = INT_MIN;
    while(walker != NULL) {
        if (walker->value > max) max = walker->value;
        walker = walker->next;
    }
    //count large vals
    int count=0;
    walker = head;
    while(walker != NULL) {
        if(walker->value == max) {
            count++;
        }
        walker = walker->next;
    }
    //array to hold large vals
    node* largestVals[count];
    for(int ind=0; ind<count; ind++) {
        largestVals[ind] = findNode(max);
        deleteNode(largestVals[ind]);

    }
}

int countVals(void) {
    struct node* walker = head;
    int count=0;
    while(walker!= NULL) {
        count++;
        walker=walker->next;
    }
    return count;
}

void BubbleSort() {
    //checks if list is empty
    if(head == NULL) {
        return;
    }
    node *walker = head;
    node *next = walker->next; //node after walker
    node *prev = NULL; //node before walker
    bool swapped = true;
    while(swapped) {
        swapped = false;
        while (walker->next != NULL) {
            prev=head;

            if (walker->value > next->value) {
                node *temp = walker->next->next;

                if (walker == head) {
                    head = walker->next;
                    walker->next = walker;
                    walker->next = temp;
                    head->next = walker;
                    swapped = true;
                }

                else if (walker->next->next != NULL) {
                    while (prev->next != walker) {
                        prev = prev->next;
                    }
                    walker->next = walker;
                    walker->next = temp;
                    prev->next=walker;
                }
                swapped=true;
            }

            else {
                prev = walker;
                walker = walker->next;
                next = next->next;
            }
        }
    }
}