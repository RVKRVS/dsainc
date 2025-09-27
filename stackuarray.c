#include<stdio.h>
#include<conio.h>
#define maxsize 10
int stack[maxsize],top=-1;
void push(){
    int n;
    if(top==maxsize-1)
     printf("\nstack is overflow");
    else{
        printf("enter an element");
        scanf("%d",&n);
        top++;
        stack[top]=n; 
    }
}
void pop(){
    int n;
    if(top==-1)
      printf("\nstack is empty");
    else{
        n=stack[top];
        top--;
        printf("\npoped element is %d",n);
    }
}
void display(){
    int i;
    if(top==-1)
    printf("\nstack is empty");
    else{
       printf("elements of stack");
       for(i=top;i>=0;i--)
       printf("\n%d",stack[i]);
    }
}
int main()
{
    int choice;
  
    do
   { printf("\n--------------stack menu------------------");
    printf("\n 1.push\n 2.pop \n 3.display \n 4.exit");
    printf("\n------------------------------------------");
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();break;
        case 2:pop();break;
        case 3:display();break;
    }}
    while(choice!=4);
    return 0;
}
