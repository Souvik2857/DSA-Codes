#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// create functions to re-use the code more efficiently
struct node *createNode(int data)
{
    struct node *n;                                 // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory for node
    n->left = NULL;
    n->data = data;
    n->right = NULL;
    return n;
}
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
struct node *searchBST(struct node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == data)
    {
        return root;
    }

    else if (data < root->data)
    {
        return searchBST(root->left, data);
       
    }
    else
    {
        return searchBST(root->right, data);
         
    }
}
struct node *inORderPredecessor(struct node *root){
    root=root->left;
    while (root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
struct node * deleteNode(struct node * root,int value){
    struct node *iPre;
    if(root==NULL){
        return NULL;
    }
    if (root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }

    //search for the node to be deleted
    if(value<root->data){
        root->left=deleteNode(root->left,value);
    }
    else if (value>root->data)
    {
        root->right=deleteNode(root->right,value);
    }
    //deletion stratergy when the node is found
    else
    {
        iPre=inORderPredecessor(root);
        root->data=iPre->data;
        root->left=deleteNode(root->left,iPre->data);
    }
    return root;
    

}
int main()
{
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // linking the root node
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inOrder(p);
    deleteNode(p,1);
    printf("\n");
    inOrder(p);
    return 0;
}