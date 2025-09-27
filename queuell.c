#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *add;
};struct node *front=NULL,*rear=NULL,*start,*nn,*temp;
void enqueue(){
    int n,ch;
    start=(struct node*)malloc(sizeof(struct node));
    if(start==NULL){
printf("queue is overflow");
    }
    else{
printf("enter the element");
scanf("%d",&n);
start->data=n;
start->add=NULL;
rear=start;
printf("want to continue");
scanf("%d",&ch);
while(ch==1){
nn=(struct node*)malloc(sizeof(struct node));
printf("enter the element");
scanf("%d",&n);
nn->data=n;
nn->add=NULL;
rear->add=nn;
rear=nn;
printf("want to continue");
scanf("%d",&ch);
}
    }

}
void display(){
    front=start;
    while(front!=NULL){
        printf("%d",front->data);
        front=front->add;
    }
}
void denqueue(){
int n;
front=start;
start=start->add;
printf("deleted element is %d",front->data);
free(front);
front=start;

}
int main(){
enqueue();
printf("\n");
display();
printf("\n");
denqueue();
printf("\n");
display();
}