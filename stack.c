#include<stdio.h>
int const capacity=4;

int arr[capacity];
int top=-1;                
int isfull(){
    if(top==capacity-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int input){
    if(isfull()==1){
        printf("stack over flow!!!\n");
    }
    else{
        top++;
        arr[top]=input;
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }

}
int pop(){
    if(isempty()==1){
        printf("stack under flow!!!\n");
        return -1;
    }
    else{
        top--;
        arr[top+1];
    }
}
int peek(){
    if(isempty()==1){
        printf("stack is empty!!!!");
        return-1;
    }
    else{
        return arr[top];
    }
}
int display(){
    int i;
    if(isempty()==1){
        printf("stack is empty!!!");
    }
    else{
    for(i=0;i<=top;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
 }
}


int main(){
    int input,choice;
    do{
        printf("stack\n1 push\n2 pop\n3 peek\n4 stack elements\n5 exsist!!");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the element to be pushed:\n");
            scanf("%d",&input);
            push(input);
            break;
            case 2:
            printf("element poped :%d\n",pop());
            break;
            case 3:
            printf("element at top:%d\n",peek());
            break;
            case 4:
            display();
            break;
        }
    }while(choice!=5);

    return 0;
}
