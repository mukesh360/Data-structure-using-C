#include<stdio.h>
#include<stdlib.h>

int count=0;

struct node{
    int data ;
    struct node * next;
};

struct node * head =0,*newnode,*temp;



void frontadd(){
    struct node *newnode,*temp;

    newnode = (struct  node*)malloc( sizeof(struct node));
    printf("Enter the  Elemented to be Added:\n");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;
    count++;

    }

void rearadd(){
    struct node *newnode,*temp;

    newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("Enter the Element Added:\n");
    scanf("%d",&newnode->data);
    newnode->next = 0;

    if (head==0){
      head=newnode;
    }

    else{
        temp=head;
        while(temp->next!=0){
            temp = temp->next;
        }
        temp->next = newnode; 
    }
    count++;

}
void s_add(){
    struct node *newnode,*temp;
    int position,i=1;

    printf("Enter the  Position :\n");
    scanf("%d", &position);
    if(position>count){
        printf("Invalid Position....!!!\n");
    }
    else{
    temp = head;
    while(i<position-1){
        temp=temp->next;
        i++;
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the Element to be Added:\n");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
    count ++;

    }

}
 
void removefront(){
    if(head == 0){
        printf("The Link List is Empty...!!!\n");
    }
    else{
    temp=head;
    head=head->next;
    free(temp);
    printf("Front Element is  Removed....!!!\n");
    count --;
    }
}
void removeend(){
     struct node *newnode,*temp;
    int i=1;
    temp=head;
    if(head == 0){
        printf("The link List is Empty....!!!\n");
    }
    else{
        while(i<count-1){
        if(temp->next!= 0){
            temp=temp->next;
        }
        i++;
        }
        temp->next = 0;
        ///free(temp);
        printf("The Rear Element is Removed....!!!\n");
        count --;
    }
}
void s_remove(){
    
    struct node *newnode,*temp,*prev;
    int position,i=1;
    temp = head;
    if(head == 0){
        printf("The Link List is Empty....!!!\n");
    }
    printf("Enter the Position:\n");
    scanf("%d",&position);
    if(position > count){
        printf("Invalid Position....!!!\n");
    }
    else{
        while(i<position-1)
        if(temp->next!= 0){
            temp = temp->next;
            i++;
        }
        prev = temp->next;
        temp->next = prev->next;
        free(prev);
        printf("The specific Element is removed...!!!\n");
        count --;

    }

}

void display(){
    struct node * temp;
    
    if (head == 0){
        printf("The Link List is Empty...!!!\n");
    }
     printf("Total Elements you Added : %d \n",count);
    temp=head;
    printf("The Elements are...>>\n");
    while(temp!= 0){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
}

int main(){
    int choice;
    do{
    printf("\nLINKED LIST....!!!\n1 Front Add\n2 Rear Add\n3 Remove Front\n4 Remove Rear\n5 Specific Add\n6 specific Remove\n7 Display the Elements\n>>> Enter 0 to Exit\n Enter your Choice:");
    scanf("%d",& choice);
    switch(choice){
        case 1:{
           frontadd();
           break;
        }
        case 2:{
            rearadd();
            break;
        }
        case 3:{
            removefront();
            break;
        }
        case 4:{
            removeend();
            break;
        }
        case 5 :{
            s_add();
            break;
        }
        case 6:{
            s_remove();
            break;
        }
        case 7:{
            display();
            break;
        }
    }
} while (choice!=0);
    printf("Your are exited.......!!!!!\n");
    return 0;

}


