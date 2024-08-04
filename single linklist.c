#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


struct node *head = 0;


void addnew() {
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter the Element to be Added:\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;

    if (head == 0) {
        head = newnode;
    } 
    else {
        temp = head;
        while (temp->next != 0) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}


void display() {
    struct node *temp = head;
    if (temp == 0) {
        printf("The list is empty.\n");
    }
    
    printf("Elements are:\n");
    while (temp != 0) {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
}

int main() {
    int choice;
    do {
        printf("\nLINKED LIST\n1. Add New Node\n2. Display Elements\n3. Exit\nEnter your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addnew();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Exiting...!!!\n");
                break;
        }
    } while (choice != 3);


    

    return 0;
    
}

