#include<stdio.h>
struct node{
    int data;
    struct node*left,*right;
};
struct node* create(int data){
    struct node*nn;
 nn=(struct node*)malloc(sizeof(struct node));
 nn->data=data;
 nn->left=NULL;
 nn->right=NULL;
 return nn;
}
int main(){
 struct node*p;
 p=(struct node*)malloc(sizeof(struct node));

}