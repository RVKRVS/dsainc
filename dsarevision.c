// #include<stdio.h>
// #define Msize 10
// int stack[Msize],top=-1;
// void push(){
//     int n;
//     if (top==Msize-1) printf("\nstack is overflow");
//     else {
//         printf("enter the element");
//         scanf("%d",&n);
//         top++;
//         stack[top]=n;
//     }
// }
// void pop(){
//     int n;
//     if (top==-1)printf("stack is empty");
//     else{
//         n=stack[top];
//         printf("deleted element is %d",n);
//         top--;
//     }
// }
// void display(){
//     if(top==-1) printf("stack is empty");
//     else {
//         for(int i=top;i>=0;i--){
//             printf("%d\n",stack[i]);
//         }
//     }
// }
// int main(){
// int choice;
// do{
//     printf("\n--------stack menu-------------");
//     printf("\n1.push\n2.pop\n3.display\n4.exit");
//     printf("\n-------------------------------");
//     printf("\nenter your choice");
//     scanf("%d",&choice);

// switch(choice)
// {
// case 1:
// push(); break;
// case 2:
// pop();  break;
// case 3:
// display(); break;
// default :printf("exiting....");
// }
// }while(choice!=4);

// }
// #include<stdio.h>
// #define zise 10
// int queue[zise];
// int rear=-1,front=0;
// void push(){
// int n;
// if(rear==zise-1){
//     printf("queue is full");
// }
// else {
//     printf("\nenter the element");
//     scanf("%d",&n);
//     rear++;
//     queue[rear]=n;
// }
// }
// void pop(){
//     int n;
// if(front>rear){
//     printf("queue is empty");
// }
// else{
//     n=queue[front];
//     printf("\ndeleted element is %d",n);
//     front++;
// }
// }
// void dislplay(){
// for (int i = front; i <=rear; i++)
// {
//    printf("\n%d",queue[i]);
// }

// }
// int main(){
// push();
// push();
// push();
// push();
// push();
// printf("poping the element");
// pop();
// printf("displaying the element");
// dislplay();
// }
// #include<stdio.h>
// #define size 10
// int cque[size];
// int rear=-1,front=-1;
// void insert(){
// if ((rear+1)%size==front) printf("it is full");
// else{
//     int n;
//         printf("enter the element");
//         scanf("%d",&n);
//         if(rear==-1 && front==-1){
//             rear=0;
//             front=0;
//         }
//         else{
//             rear=(rear+1)%size;
//         }
//         cque[rear]=n;
// } 
// }
// void pop(){
//     int n;
//     if(rear==-1 && front==-1) printf("cqueue is empty ");
//     else{
//       n=cque[front];
//       if(front==rear)
//       {
//         front=-1;
//         rear=-1;
//       }
//       else{
//         front=(front+1)%size;
//       }
//       printf("%d",n);
//     }
// }
// void display(){
//     int i;
//     for(i=front;i!=rear;i=(i+1)%size)
//     printf("%d",cque[i]);
//     printf("%d ",cque[i]);
// }
// int main(){
// insert();
// insert();
// insert();
// insert();
// insert();
// pop();
// display();
// }
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* add;
};struct node*start=NULL,*temp,*next,*prev,*new;
struct node* create(){
int n;
int ch;
printf("enter the element");
scanf("%d",&n);
start=(struct node*)malloc(sizeof(struct node));
start->data=n;
start->add=NULL;
temp=start;
printf("eanna cont");
scanf("%d",&ch);
while(ch==1){
    printf("enter the element");
    scanf("%d",&n);
    new=(struct node*)malloc(sizeof(struct node));
    new->data=n;
    new->add=NULL;
    temp->add=new;
    temp=new;
    printf("eanna cont");
    scanf("%d",&ch);
}
return start;
}
void display(){
    temp=start;
    while(temp->add!=NULL){
        printf("%d->",temp->data);
        temp=temp->add;

    }
    printf("%d",temp->data);
}
int main(){
create();
display();
}