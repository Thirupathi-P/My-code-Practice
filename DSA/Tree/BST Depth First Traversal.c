#include<stdio.h>
#include<stdlib.h>

struct BstNode{
    int data;
    struct BstNode *left;
    struct BstNode *right;
};
struct BstNode* root;
struct BstNode* getnewnode(int data){
    struct BstNode* newnode=(struct BstNode*)malloc(sizeof(struct BstNode));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct BstNode *Insert(struct BstNode*root,int value){
    if(root==NULL) return getnewnode(value); //Base Condition
    else if(value <root->data){
        root->left=Insert(root->left,value);
    }else{
        root->right=Insert(root->right,value);
    }
    return root;
}
void Preorder(struct BstNode* root){
    if(root==NULL) return ;
    printf("%d ",root->data);
    Preorder(root->left);
    Preorder(root->right);
    
}
void Inorder(struct BstNode* root){
    if(root==NULL) return ; //Base Condition
    Inorder(root->left);
     printf("%d ",root->data);
    Inorder(root->right);
    
}
void Postorder(struct BstNode* root){
    if(root==NULL) return ; //Base Condition
     Postorder(root->left); 
     Postorder(root->right);
    printf("%d ",root->data);
}
int main(){
    root=NULL;
    int n,i,value;
    printf("how many Number ?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Number:");
        scanf("%d",&value);
        root =Insert(root,value);
    }
    Inorder(root);printf("\n");
    Preorder(root); printf("\n");
    Postorder(root); printf("\n");
    
    return 0;
}
