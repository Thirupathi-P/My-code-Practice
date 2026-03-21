#include<stdio.h>
#include<stdlib.h>
//create a node
struct Node {
    int data;
    struct Node *next;
};
struct Node *head;
void Insert(int x) // Insert at End
{
    struct Node *newnode,*temp;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL){
        newnode->next=head;
        head=newnode;
        return;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void Reverse(){
    struct Node *current,*prev,*next;
    current =head;
    prev=NULL;
    while(current !=NULL){
        next =current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev; //after Reverse the LL, head is change 
    //Void Print ()
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    head=NULL;
    Insert(1);Insert(2);
    Insert(3);Insert(4);
    Reverse();
    return 0;
}
