#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node*next;
    struct Node*prev;
};
struct Node* head;

struct Node* GetNewNode(int x);
void InsertAtHead(int x);
void Print();
void ReversePrint();

int main(){
    head=NULL;
    InsertAtHead(2); InsertAtHead(1);InsertAtHead(0);
    Print();// 0 1 2
    ReversePrint();// 2 1 0
    return 0;
}

struct Node* GetNewNode(int x){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
}
void InsertAtHead(int x){
    struct Node* newnode=GetNewNode(x);
    if(head==NULL){
        head=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void Print(){
    struct Node* temp=head;
    while (temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void ReversePrint(){
    struct Node* temp=head;
    if(temp==NULL)//Empty list,exit
        return;
    /*Going to Last Node*/
    while(temp->next!=NULL){
        temp=temp->next;
    }
    /*Travesing Backward using Prev*/
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
