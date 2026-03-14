#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// create functions to re-use the code more efficiently
struct node * createNode(int data){
    struct node *n;  //creating a node pointer
    n=(struct node *)malloc(sizeof(struct node)); //Allocating memory for node
    n->left=NULL;
    n->data=data;
    n->right=NULL;
    return n;
    
}
void preOrder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);  //print the root element 
        preOrder(root->left);  //recursive call to go left node
        preOrder(root->right);  //recursive call to go right node
    }
}
void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
int main(){
    struct node *p=createNode(4);
    struct node *p1=createNode(1);
    struct node *p2=createNode(6);
    struct node *p3=createNode(5);
    struct node *p4=createNode(2);
    // linking the root node
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    printf("-----------printing preOrder Traversal-----------\n");
    preOrder(p);
    printf("\n");
    printf("-----------printing postOrder Traversal-----------\n");
    postOrder(p);
    printf("\n");
    printf("-----------printing InOrder Traversal-----------\n");
    inOrder(p);
    return 0;
}