#include<stdio.h>
#include<conio.h>
#define maxsize 10
int queue[maxsize],rear=-1,front=0;
void insert(){
    int n;
    if(rear==maxsize-1)printf("\nqueue is overflow");
    else{
        printf("enter an element for insert");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
    }
}
void display(){
    if(front>rear)printf("queue is empty");
    else{
        printf("queue elements");
        for(int i=front;i<=rear;i++)
        printf("\n%d",queue[i]);
    }
}
void delete(){
    int n;
    if (front>rear)printf("queue is empty");
    else{
        n=queue[front];
         front++; 
        printf("deleted element %d",n);
       
    }
}
void main(){
    int choice;

    do
   { printf("\n--------------queue menu------------------");
    printf("\n 1.insert\n 2.delete \n 3.display \n 4.exit");
    printf("\n------------------------------------------");
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:insert();break;
        case 2:delete();break;
        case 3:display();break;
    }}
    while(choice!=4);
}