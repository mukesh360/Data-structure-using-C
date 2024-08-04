#include<stdio.h>
#define size 10
int queue[size];
int front=-1;
int rear =-1;

int isfull(){
    if(rear==size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void front_enqueue(data){
    if(isfull()==1){
        printf("The Queue is Full....!!!\n");
    }
    else if(front==-1){
        rear++;
        front++;
        queue[front]=data;
    }
    else {
    for (int i = rear; i >= front; i--) {
        queue[i + 1] = queue[i];
    }
    queue[front] = data;
    rear++;
}


}
void rear_enqueue(data){
    if(isfull()==1){
        printf("The Queue is Full....!!!\n");
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
void front_dequeue(){
    if(isempty()==1){
        printf("The Queue is Empty....!!!!\n");
    }
    else {
        front++;
        printf("The first element is Removed!!!\n");
    }

}
void rear_dequeue(){
    if(isempty()==1){
        printf("The Queue is Empty....!!!!\n");
    }
    else {
        rear--;
        printf("The last element is Removed!!!\n");
    }

}


void display(){
    if(isempty()==1){
        printf(" The Queue is Empty....!!!!\n");
    }
    else{
        printf("The element in the Queue are:\n");
        for(int i=front;i<=rear;i++){
            printf("%d \t",queue[i]);
        }
    }
}

int main(){
    int choice,remove,data;
    do{
    printf("\nDOUBLE ENDEND QUEUE!!!\n1 Add front\n2 Add rear\n3 Remove front\n4 Remove rear\n5 display the Elements :");
    scanf("%d",&choice);
    switch (choice){
    case 1:{
        printf("Enter the element to be Added in the Front:\n");
        scanf("%d",&data);
        front_enqueue(data);
        break;
    }
    case 2:{
        printf("Enter the element to be Added in the Rear:\n");
        scanf("%d",&data);
        rear_enqueue(data);
        break;
    }
    case 3:{
        front_dequeue();
        break;
    }
    case 4:{
         rear_dequeue();
        break;
    }
    case 5:{
        display();
        break;
    }
  }
 }while(choice!=6);
 return 0;
}