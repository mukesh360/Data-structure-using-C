#include<stdio.h>
#define size 10
int queue[size];
int front=-1;
int rear=-1;

int isfull(){
    if(rear==size-1){
        return 1;
    }
    else{
        return 0;
    }

}
 void enqueue(data){
    if(isfull()==1){
        printf("QUEUE OVERFLOW !!!!\n");
    }
    else if(front==-1){
        rear++;
        front++;
        queue[rear]=data;
    } 
    else{
        rear++;
        queue[rear]=data;
    } 

    }
 int isempty(){
    if(rear==-1){
        return 1;
    }
    else{
        return 0;
    }
 }
  void dequeue(){
    if(isempty()==1){
        printf("QUEUE IS EMPTY!!!!\n");
    }
    else{
       front++;
       printf("The first Element is removed\n");
    }
  }
void display(){
    if(isempty()==1){
        printf("The Queue is Empty!!!\n");
    }

    for(int i=front;i<=rear;i++){
        printf("%d \t",queue[i]);
    }

}

int main(){
   int choice,data;
   do{
   printf("\nQUEUE OPERATION!!!!\n1 Add an element \n2 Read the element in a Queue\n3 Enter 3 to remove element:");
   scanf("%d",&choice);
   switch(choice){
    case 1:{
        printf("Enter the element to be Added:\n");
        scanf("%d",&data);
        enqueue(data);
        break;
    }
    case 2:{
        printf(" Element in the Queue :\n");
        display();
        break;
    }
    case 3:{
        dequeue();
        break;
    }
   }
   }while(choice!=4);
}