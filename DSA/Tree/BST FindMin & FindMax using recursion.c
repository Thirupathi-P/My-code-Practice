#include<stdio.h>
#include<stdlib.h>
//Define BST
struct BstNode {
    int data;
    struct BstNode*left;
    struct BstNode*right;
};
struct BstNode* root;
struct BstNode *GetNewNode(int data){
    struct BstNode* newnode=(struct BstNode*)malloc(sizeof(struct BstNode));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return root;
}
struct BstNode* Insert(struct BstNode* root,int x) {
    if(root==NULL){
        return GetNewNode(x);
    }else if(x<root->data){
        root->left=Insert(root->left,x);
    }else {
        root->right=Insert(root->right,x);
    }
    return root;
}
int FindMin(struct BstNode* root){
    if(root==NULL) return -1; //Empty Tree
    else if(root->left==NULL){
        return root->data;    //Base Condition
    }
    return FindMin(root->left);
}
int FindMax(struct BstNode* root){
    if(root==NULL) return -1; //Empty Tree
    else if(root->right==NULL){
        return root->data;    //Base Condition
    }
    return FindMax(root->right);
}
int main(){
    root =NULL;
    Insert(root,1);
    Insert(root,3);
    Insert(root,2);
    printf("%d ",FindMin(root));
    printf("%d ",FindMax(root));
    return 0;
}
