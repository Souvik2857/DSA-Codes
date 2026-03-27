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
int insertionBST(struct node * root,int data){
    struct node * prev=NULL;

    while (root!=NULL)
    {
        prev=root;
        if(root->data==data){
            printf("Cannot insert %d,already exists in BST\n",data);
            return 0;
        }
        else if (data < root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct node * new=createNode(data);
        if(data<prev->data){
            prev->left=new;
        }
        else
        {
            prev->right=new;
        }
        printf("Insertion Completed\n");
        return 1;
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
    insertionBST(p,7);
    insertionBST(p,6);
    insertionBST(p,12);
    inOrder(p);
    
    printf("\n");
    return 0;
}