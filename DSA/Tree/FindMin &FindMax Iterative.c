#include<stdio.h>
#include<stdlib.h>
//Define BST
struct BstNode{
    int data ;                   //data of the node
    struct BstNode*left;         //address of the left node  
    struct BstNode*right;        //address of the right node
};
struct BstNode* root; // globle variable 

struct BstNode* GetNewNode(int data){
    struct BstNode*newnode=(struct BstNode*)malloc(sizeof(struct BstNode));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct BstNode* Insert(struct BstNode *root,int data){
    if(root==NULL){
        return root=GetNewNode(data);
    }
    else if(data<root->data){ 
        root->left=Insert(root->left,data);
    }
    else{ 
        root->right=Insert(root->right,data);
    }
    return root;
}
int FindMin(struct BstNode* root) {
    if(root==NULL) return -1;
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
int FindMax(struct BstNode* root) {
    if(root==NULL) return -1;
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}
int main(){
    root==NULL;
    root=Insert(root,15);             
    root=Insert(root,16);
    root=Insert(root,17);
    root=Insert(root,10);
    printf("%d \n",FindMin(root)) ;
    printf("%d \n",FindMax(root)) ;
    
    return 0;
}
