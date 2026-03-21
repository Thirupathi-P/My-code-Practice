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
int Search(struct BstNode*root,int value){
    if (root==NULL) return 0;             // Base condition 
    else if(value==root->data) 
        return 1;                        //If the element is Founded.
    else if(value<root->data){
        return Search(root->left,value);
    }
    else if(value>root->data){
        return Search(root->right,value);
    }
}
int main(){
    root==NULL;
    root=Insert(root,15);             
    root=Insert(root,16);
    root=Insert(root,17);
    root=Insert(root,10);
    int value =10;
    if(Search(root,value)==1){
        printf("Element is Founded");
    }
    else{
        printf("Element is Not Founded");
    }
    return 0;
}
