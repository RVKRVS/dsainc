// #include<stdio.h>
// #define maxsize 10
// int stack[maxsize],top=-1;
// void push(){
//     int n;
//     if(top==maxsize-1)
//     printf("\nstack is overflow");
//     else
//     {
//         printf("enter an element");
//         scanf("%d",&n);
//         top++;
//         stack[top]=n;
//     }
// }
// void pop(){
//     int n;
//     if(top==-1)
//     printf("stack is empty");
//     else{
//         n=stack[top];
//         top--;
//         printf("poped element%d",n);
//     }
// }
// void display(){
//     int i;
//     if(top==-1)
//     printf("stack is empty");
//     else{
//         printf("elemnts of stack");
//         for(i=top;i>=0;i--)
//         printf("\n%d",stack[i]);
//     }
// }
// void main(){
// int choice;
// do{
//     printf("\n--------------stack_menu------------");
//     printf("\n1.push\n2.pop\n3.display\n4.exit");
//     printf("\n-----------------------------------");
//     printf("enter your choice");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         push();
//         break;
    
//     case 2:
//         pop();
//         break;
    
//     case 3:
//         display();
//         break;
//     default:printf("invalid choice");
//     }
// }
// while(choice!=4);
// }
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
// int data;
// struct node *add;
// };struct node *start=NULL,*prev,*temp,*next,*new1;
// void create(){
//     int n,ch;
//     printf("enter the element");
//     scanf("%d",&n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->add=NULL;
//     temp=start;
//     printf("want to continue for yes press'1' for no press'0'");
//     scanf("%d",&ch);
//     while(ch==1){
//          printf("enter the element");
//     scanf("%d",&n);
//     new1=(struct node*)malloc(sizeof(struct node));
//     new1->data=n;
//     new1->add=NULL;
//     temp->add=new1;
//     temp=temp->add;
//     printf("want to continue for yes press'1' for no press'0'");
//     scanf("%d",&ch);
//     }
// }
// void display(){
//     temp=start;
//     while(temp->add!=NULL){
//     printf("%d ",temp->data);
//     temp=temp->add;
// }
// printf("%d ",temp->data);
// }
// void insert_first(){
//     int n;
//     printf("enter the element");
//     scanf("%d",&n);
//     new1=(struct node*)malloc(sizeof(struct node));
//     new1->data=n;
//     new1->add=start;
//     start=new1;

// }
// void insert_last(){
//     int n;
//     printf("enter the element");
//     scanf("%d",&n);
//     new1=(struct node*)malloc(sizeof(struct node));
//     new1->data=n;
//     new1->add=NULL;
//     temp=start;
//     while(temp->add!=NULL){
//         temp=temp->add;
//     }
//     temp->add=new1;
// }
// void insert_middle(){
//     int i=1,pos,n;
//     printf("enter position");
//     scanf("%d",&pos);
//     next=start;
//     printf("enter the element");
//     scanf("%d",&n);
//     new1=(struct node*)malloc(sizeof(struct node));
//     new1->data=n;
//     new1->add=NULL;
//     while(i<pos){
//         prev=next;
//         next=next->add;
//         i++;
//     }
//     prev->add=new1;
//     new1->add=next;
// }
// void delete_first(){
//     temp=start;
//     start=start->add;
//     free(temp);
// }
// void delete_last(){
//     temp=start;
//     while(temp->add!=NULL){
//         prev=temp;
//     temp=temp->add;}
//     prev->add=NULL;
//     free(temp);
// }
// void delete_middle(){
//     int pos,i=1;
//     printf("enter the position");
//     scanf("%d",&pos);
//     temp=start;
//     while(i<pos){
//         prev=temp;
//         temp=temp->add;
//         i++;
//     }
//     next=temp->add;
//     prev->add=next;
//     free(temp);
// }
// int main(){
//     int choice;
//     do{printf("\n--------------------liinkedlistmenu---------");
//     printf("\n1.create ");
//     printf("\n2.display");
//     printf("\n3.insert first");
//     printf("\n4.insert middle");
//     printf("\n5.insert last");
//     printf("\n6.delete first");
//     printf("\n7.delete middle");
//     printf("\n8.delete last");
//     printf("\n9.exit");
//     printf("-----------------------------------------------");
//     printf("\nenter your choice");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         create();break;
//         case 2:
//         display();break;
        
//         case 3:
//         insert_first();break;
       
        
//         case 4:
//         insert_middle();break;
        
//         case 5:
//         insert_last();break;
        
//         case 6:
//         delete_first();break;

//         case 7:
//         delete_middle();break;

//         case 8:
//         delete_last();break;
        
//     default:
//         break;
//     }}
//     while (choice!=9);{

//     }
// }     
// #include<stdio.h>
// #define maxsize 10
// int stack[maxsize];
// int top=-1;
// void push(){
//     int n;
//     if(top==maxsize-1)printf("stack is overflow");
//     else {
//         top++;
//         printf("enter the value");
//         scanf("%d",&n);
//         stack[top]=n;
//     }
// }
// void display(){
    
//     if(top==-1)printf("stack is empty");
//     else {
//         for(int i=top;i>=0;i--)printf("\n%d",stack[i]);
//     }
// }
// void pop(){
//     int n;
//     if(top==-1)printf("stack is empty");
//     else{
//     n=stack[top];
//     printf("\ndeleted element is %d",n);
//     top--;
//     }
// }
// void main(){
//     int choice;
//     do{
//         printf("---------stackmenu--------------");
//         printf("\n1.push\n2.pop\n3.display\n4.exit");
//         printf("\n----------------------------------");
//         printf("\nenter your choice");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1 :push();break;
//             case 2 :pop();break;
//             case 3 :display();break;
//             default :printf("invalid input");break;
//         }
//     }while(choice!=4);
// }
// #include<stdio.h>
// #define maxsize 10
// int cqueue[maxsize];
// int rear=-1,front =-1;
// void push(){
//     int n;
//     if((rear+1)%maxsize==front)printf("stack is overflow");
//     else{
//         printf("enter the element");
//         scanf("%d",&n);
//         if(rear==-1&&front==-1){
//             rear=0;
//             front=0;
//         }
//         else{
//             rear=(rear+1)%maxsize;
//         }
//        cqueue[rear]=n;
//     }
// }
// void pop(){
//     int n;
//     if(rear==-1 && front==-1)printf("cqueue is empty");
//     else{
//          n=cqueue[front];
//          if(rear==front){
//             rear==-1;
//             front=-1;
//          }
//         else{
//             front=(front+1)%maxsize;
//         }
//       printf("deleted element id %d",n);
//     }
// }
// void display(){
//     int i;
//     if(rear==-1 && front==-1)printf("cqueue is empty");
//     else{
//         printf("elements of queue");
//         for( i=front;i!=rear;i=(i+1)%maxsize){
//           printf("%d",cqueue[i]);
//         }
//         printf("%d",cqueue[i]);
//     }
// }
// int main(){
//     int choice;
//     do{
//         printf("---------queuemenu--------------");
//         printf("\n1.push\n2.pop\n3.display\n4.exit");
//         printf("\n----------------------------------");
//         printf("\nenter your choice");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1 :push();break;
//             case 2 :pop();break;
//             case 3 :display();break;
//             default :printf("invalid input");break;
//         }
//     }while(choice!=4);
//     return 0;
// }
// #include<stdio.h>
// struct node
// {
//     int data;
//     struct node *add;
// };struct node*start=NULL,*prev,*next,*temp,*new1;
// void create(){
//     int n,cont;
//     printf("enter the element");
//     scanf("%d",&n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->add=NULL;
//     temp=start;
//   printf("want to cont");
//   scanf("%d",&cont);
//   while(cont==1){
//     printf("enter the element");
//     scanf("%d",&n);
//     new1=(struct node*)malloc(sizeof(struct node));
//     new1->data=n;
//     new1->add=NULL;
//     temp->add=new1;
//     start=temp;
//     printf("want to cont");
//   scanf("%d",&cont);
//   }
// }
// int main(){
// int choice;
//     do{printf("\n--------------------liinkedlistmenu---------");
//     printf("\n1.create ");
//     printf("\n2.display");
//     printf("\n3.insert first");
//     printf("\n4.insert middle");
//     printf("\n5.insert last");
//     printf("\n6.delete first");
//     printf("\n7.delete middle");
//     printf("\n8.delete last");
//     printf("\n9.exit");
//     printf("-----------------------------------------------");
//     printf("\nenter your choice");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         create();break;
//         case 2:
//         display();break;
        
//         case 3:
//         insert_first();break;
       
        
//         case 4:
//         insert_middle();break;
        
//         case 5:
//         insert_last();break;
        
//         case 6:
//         delete_first();break;

//         case 7:
//         delete_middle();break;

//         case 8:
//         delete_last();break;
        
//     default:
//         break;
//     }}
//     while (choice!=9);{

//     }
// }     
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node* add;
// };struct node*start,*prev,*next,*temp,*new1;
// struct node*create(){
//     int n,ch;
//     printf("enter the element");
//     scanf("%d",&n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->add=NULL;
//     temp=start;
//     printf("want to continue yes:1 or no:0");
//     scanf("%d",&ch);
//     while(ch==1){
//     printf("enter the element");
//     scanf("%d",&n);
//     new1=(struct node*)malloc(sizeof(struct node));
//     new1->data=n;
//     new1->add=NULL;
//     temp->add=new1;
//     temp=temp->add;
//     printf("want to continue yes:1 or no:0");
//     scanf("%d",&ch);
//     }
//     return new1;
// }
// struct node*insertat_end(){
//     temp=start;
//     int n;
//     printf("enter element");
//     scanf("%d",&n);
//     new1=(struct node*)malloc(sizeof(struct node));
//     new1->data=n;
//     new1->add=NULL;
//     while(temp->add!=NULL){
//     temp=temp->add;
// }
// temp->add=new1;
// return new1;
// }
// void display(){
//     temp=start;
//     while(temp!=NULL){
//         printf("%d",temp->data);
//         temp=temp->add;
//     }
// }
// int main(){
// int choice;
//     do{printf("\n--------------------liinkedlistmenu---------");
//     printf("\n1.create ");
//     printf("\n2.display");
//     printf("\n3.insert first");
//     printf("\n4.insert middle");
//     printf("\n5.insert last");
//     printf("\n6.delete first");
//     printf("\n7.delete middle");
//     printf("\n8.delete last");
//     printf("\n9.exit");
//     printf("-----------------------------------------------");
//     printf("\nenter your choice");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         create();break;
//         case 2:
//         display();break;
        
//         case 3:
//         insertat_end();break;
//         // case 3:
//         // insert_first();break;
       
        
//         // case 4:
//         // insert_middle();break;
        
//         // case 5:
//         // insert_last();break;
        
//         // case 6:
//         // delete_first();break;

//         // case 7:
//         // delete_middle();break;

//         // case 8:
//         // delete_last();break;
        
//     default:
//         break;
//     }}
//     while (choice!=9);{

//     }
// }     
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// struct stack{
//     int size;
//     int top;
//     char *arr;
// };
// int stackTop(struct stack* sp){
//     return sp->arr[sp->top];
// }
// int isempty(struct stack *ptr){
//     if(ptr->top==-1) return 1;
//     else return 0;

// }
// int isfull(struct stack *ptr){
// if(ptr->top=ptr->size-1)
//  return 1;
//  else return 0;
// }
// void push(struct stack *ptr,char val){
//     if(isfull(ptr))printf("stack is overflow");
//     else {
//         ptr->top++;
//         ptr->arr[ptr->top]=val;
//     }
// }
// char pop(struct stack *ptr){
// if (isempty(ptr)){
//     printf("stack is empty");
//     return -1;
// }
// else{
// char val=ptr->arr[ptr->top];
// ptr->top--;
// return val;
// }
// }
// int precedence(char ch){
//     if ("*" || "/") return 3;
//     else if("-"||"+") return 2;
//     else return 0;
// }
// int isoperator(char ch){
//     if ("*" || "/"||"-"||"+") return 1;
//     else return 0;
// }
// char* infixtopostfix(char *infix){
// struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
// sp->size=10;
// sp->top=-1;
// sp->arr = (char *) malloc(sp->size * sizeof(char));
// char *postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
// int i=0; // Track infix traversal
//     int j = 0; // Track postfix addition 
//     while(infix[i]!='\0'){
//         if(!isoperator(infix[i])){
//             postfix[j]=infix[i];
//             j++;
//             i++;
//         }
    
//     else{
//             if(precedence(infix[i])> precedence(stackTop(sp))){
//                 push(sp, infix[i]);
//                 i++;
//             }
//             else{
//                 postfix[j] = pop(sp);
//                 j++;
//             }
//         }
//     }
//     while (!isEmpty(sp))    
//     {
//         postfix[j] = pop(sp);
//         j++;
//     }
//     postfix[j] = '\0';
//     return postfix;
// }
// int main()
// {
//     char * infix = "x-y/z-k*d";
//     printf("postfix is %s", infixToPostfix(infix));
//     return 0;
// }
// #include<stdio.h>
// void bubblesort(int arr[],int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-1-i; j++)
//         {
//               if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//               }
//         }
        
//     }
    
// }
// int main(){
//     int arr[5]={1,4,3,5,2};
//     bubblesort(arr,5);
//     for (int i = 0; i < 5; i++)
//     {
//        printf("%d ",arr[i]);
//     }
    
//     return 0;
// }
#include<stdio.h>
void insertionsort(int arr[],int n){
    for (int i = 1; i <= n-1; i++)
    {
        int j,key;
        key=arr[i];
        j=i-1;
        while (j>=0&&arr[j]>key)
        {
           arr[j+1]=arr[j];
           j--;
 
        }
        arr[j+1]=key;
        
    }
}
int main(){
    int arr[5]={1,4,3,5,2};
    insertionsort(arr,5);
    for (int i = 0; i < 5; i++)
    {
       printf("%d ",arr[i]);
    }
    
    return 0;
}