#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int getHight(struct node *n){
    if(n==NULL){
        return 0;
    }
    return n->height;
}
struct node* createNode(int key){
    struct node * node=(struct node*)malloc(sizeof(struct node));
    node->left=NULL;
    node->right=NULL;
    node->key=key;
    node->height=1;
    return node;
}
int max(int a,int b){
    return a>b?a:b;
}
int getBalanceFactor(struct node *n){
    if(n==NULL){
        return 0;
    }
    return getHight(n->left)-getHight(n->right);
}
struct node* rightRotate(struct node* y){
    struct node* x=y->left;
    struct node* t2=x->right;
    
    x->right=y;
    y->left=t2;

    y->height=1+max(getHight(y->right),getHight(y->left));
    x->height=1+max(getHight(x->right),getHight(x->left));

    return x;
}
struct node* leftRotate(struct node* x){
    struct node* y=x->right;
    struct node* t2=y->left;
    
    y->left=x;
    x->right=t2;

    x->height=1+ max(getHight(x->right),getHight(x->left));
    y->height=1+ max(getHight(y->right),getHight(y->left));

    return y;
}
struct node* insert(struct node* n,int key){
    if(n==NULL){
        return (createNode(key));
    }
    if (key<n->key)
    {
        n->left=insert(n->left,key);
    }
    else if (key>n->key)
    {
        n->right=insert(n->right,key);
    }
    else
    {
        return n;
    }
    
    n->height=1+max(getHight(n->left),getHight(n->right));
    int bf=getBalanceFactor(n);

    //Left Left case
    if (bf>1 && key<n->left->key)
    {
        return rightRotate(n);
    }
    
    //Right Right case
    if (bf<-1 && key>n->right->key)
    {
        return leftRotate(n);
    }
    //Left Right case
     if (bf>1 && key>n->left->key)
    {
        n->left=leftRotate(n->left);
       return  rightRotate(n);
    }
    //Right Left case
    if (bf<-1 && key<n->right->key)
    {
        n->right=rightRotate(n->right);
        return leftRotate(n);
    }
    return n;
}
int main(){
    struct node* root=NULL;
    root=insert(root,1);
    root=insert(root,2);
    root=insert(root,4);
    root=insert(root,5);
    root=insert(root,6);
    root=insert(root,3);
    preOrder(root);
    return 0;
}