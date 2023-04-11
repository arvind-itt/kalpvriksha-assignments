#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* left; 
    struct node* right;
} node;

node* insert(int value, node *tnode)
{
  /* add your code here */
    node* newNode=(node*)malloc(sizeof(node));
    newNode->value=value;
    if(tnode==NULL){
        tnode=newNode;
        tnode->left=NULL;
        tnode->right=NULL;
    }
    else{
        if(value<tnode->value){
            tnode->left=insert(value,tnode->left);
        }
        else{
            tnode->right=insert(value,tnode->right);
        }
    }
    return tnode;
}
void preorder(node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->value);
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->value);
    inorder(root->right);
}

void postorder(node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->value);
}

node* search(node* root, int data) {
    if (root == NULL || root->value == data) {
        return root;
    }
    else if (data < root->value) {
        return search(root->left, data);
    }
    else {
        return search(root->right, data);
    }
}


void display(node* tnode)
{
   if(tnode==NULL)
   {
       return;
   }
   display(tnode->left);
   printf("%d ", tnode->value);
   display(tnode->right);
}

int main() {
    int i, num, value;
    node *root = NULL;
    scanf("%d", &num);
    for (i = 0; i < num; i++){
        scanf("%d",&value);
        root = insert(value, root);
    }
    // display(root);
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    node* searchResult = search(root,3);
    if (searchResult == NULL) {
        printf("\n%d not found\n", searchResult->value);
    }
    else {
        printf("\n%d found in the tree.\n", searchResult->value);
    }
    return 0;
}