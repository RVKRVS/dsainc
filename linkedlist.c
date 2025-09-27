#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
struct node
{
    int data;
    struct node *add;
};struct node*start=NULL,*new1,*temp,*prev,*next;
void create(){
    int n;
    char ch;
    printf("\nenter the first element");
    scanf("%d",&n);
    start=(struct node*)(malloc(sizeof(struct node)));
    start->data=n;
    start->add=NULL;
    temp=start;
    printf("do you want to continue");
    scanf(" %c", &ch);
    while(ch=='Y'){
        printf("\nenter next element");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->add=NULL;
        temp->add=new1;
        temp=temp->add;
        printf("\ndo you want to continue");
        scanf(" %c", &ch);
    }
}
void display(){
if(start==NULL)
printf("\nlist not found");
else{
    temp=start;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->add;
    }
}
}
void insert_last(){
    if(start==NULL)
printf("\nlist not found");
else{
    printf("\nenter elelment for insert");
    scanf("%d",&n);
    new1=(struct node*)(malloc(sizeof(struct node)));
    new1->data=n;
    new1->add=NULL;
    temp=start;
    while (temp->add!=NULL)
    {
      temp=temp->add;
    }
    temp->add=new1;
}
}
void insert_first(){
if(start==NULL)
printf("\nlist not found");
else{
    printf("\nenter elelment for insert");
    scanf("%d",&n);
    new1=(struct node*)(malloc(sizeof(struct node)));
    new1->data=n;
    new1->add=NULL;
    new1->add=start;
    start=new1;
}
}
void insert_middle(){
    int n,pos,i=1;
if(start==NULL)
printf("\nlist not found");
else{
    printf("\nenter elelment for insert");
    scanf("%d",&n);
    new1=(struct node*)(malloc(sizeof(struct node)));
    new1->data=n;
    new1->add=NULL;
    printf("enter position of middle");
    scanf("%d",&pos);
    next=start;
    while(i<pos){
        prev=next;
        next=next->add;
        i++;
    }
    prev->add=new1;
    new1->add=next;
}
}
void delete_first(){
    if(start=NULL)
    printf("\nlist not found");
    else{
        temp=start;
        start=start->add;
        printf("\ndeleted element is %d",temp->data);
        free(temp);
    }
}
void delete_last(){
    if(start==NULL)
    printf("\nlist not found");
    else{
        temp=start;
        while(temp->add!=NULL){
            prev=temp;
            temp=temp->add;
        }
        prev->add=NULL;
        printf("\n deleted element is %d",temp->add);
        free(temp);

    }
}
void delete_middle(){
    
}
int main(){
    int choice;
    do{printf("\n--------------------liinkedlistmenu---------");
    printf("\n1.create ");
    printf("\n2.display");
    printf("\n3.insert first");
    printf("\n4.insert middle");
    printf("\n5.insert last");
    printf("\n6.delete first");
    printf("\n7.delete middle");
    printf("\n8.delete last");
    printf("\n9.exit");
    printf("-----------------------------------------------");
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        create();break;
        case 2:
        display();break;
        
        case 3:
        insert_first();break;
       
        
        case 4:
        insert_middle();break;
        
        case 5:
        insert_last();break;
        
        case 6:
        delete_first();break;

        case 7:
        delete_middle();break;

        case 8:
        delete_last();break;
        
    default:
        break;
    }}
    while (choice!=9);{

    }
}     
