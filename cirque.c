#include<stdio.h>
#define maxsize 10
int cq[maxsize],rear=-1,front =-1;
void insert(){
    int n;
    if((rear+1)%maxsize==front)printf("circularqueue is overflow");
    else{
        printf("enter an element for insert");
        scanf("%d",&n);
        if(rear==-1 &&front==-1){
            rear=0;
            front=0;
        }
        else{
            rear=(rear+1)%maxsize;}

        cq[rear]=n;
    }
}
void delete(){
    int  n;
    if(rear==-1 && front==-1)
    printf("queue is empty");
    else{
        n=cq[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else
        front=(front+1)%maxsize;
    }printf("deleted element %d",n);
}
void display(){
    int i;
    if(rear==-1&&front==-1){
        printf("queue is empty");

    }
    else{
        printf("elemets of circular queue");
        for(i=front;i!=rear;(i=(i+1)%maxsize)){
            printf("%d",cq[i]);
        }
       printf("%d",cq[i]); 
    }
}
void main(){
    int choice;
    do{
        printf("\n----------------CQmenu--------------");
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        printf("enter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:insert() ;  break;
        case 2:delete()  ;  break;
        case 3:display()  ;  break;
        default:printf("invalid input");
            break;
        }
    }
    while (choice!=4);
    
}