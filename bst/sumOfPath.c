/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} node;

node* insertion(node* root,int data){
    
    
    if(root==NULL){
        node* newNode=(node*)malloc(sizeof(node));
        newNode->data=data;
        root=newNode;
        root->left=NULL;
        root->right=NULL;
    }
    else{
        if(data<root->data){
            root->left=insertion(root->left,data);
        }
        else{
            root->right=insertion(root->right,data);
        }
    }
    return root;
}
void display(node* root)
{
   if(root==NULL)
   {
       return;
   }
   display(root->left);
   printf("%d ", root->data);
   display(root->right);
}

void solve(node* root,int pathSum,int *totalSum){
    if(root==NULL){
        return;
    }
    pathSum+=root->data;
    if(root->left==NULL && root->right==NULL){
        *totalSum += pathSum;
        return;
    }
    solve(root->left,pathSum,totalSum);
    solve(root->right,pathSum,totalSum);
}


int sumOfPath(node* root){
    int pathSum=0;
    int totalSum=0;
    solve(root,pathSum,&totalSum);
    return totalSum;
}
int main()
{
    
    node* root=NULL;
    
    root=insertion(root,10);
    root=insertion(root,8);
    root=insertion(root,12);
    // display(root);
    printf("%d",sumOfPath(root));
    return 0;
}
