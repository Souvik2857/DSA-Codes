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
void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
void preOrder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
int isBST(struct node *root){
    static struct node *prev=NULL;
    if(root!=NULL){
       if(!isBST(root->left)){
        return 0;
       }
       if(prev!=NULL && root->data <= prev->data){
        return 0;
       }
       prev=root;
       return isBST(root->right);

    }
    else
    {
        return 1;
    }
    
}
int main(){
    struct node *p=createNode(5);
    struct node *p1=createNode(3);
    struct node *p2=createNode(6);
    struct node *p3=createNode(1);
    struct node *p4=createNode(4);
    // linking the root node
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    // in binary search tree Inorder traversal print ascending order of elements
    printf("-----------printing InOrder Traversal-----------\n");
    inOrder(p);
    printf("\n");
    if(isBST(p)){
        printf("Is a Binary search tree");
    }
    else{
        printf("Is not a binary search tree");
    }
    return 0;
}