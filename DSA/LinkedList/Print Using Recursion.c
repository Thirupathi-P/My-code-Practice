#include<stdio.h>
#include<stdlib.h>
//create a node
struct Node {
    int data;//data
    struct Node *next;///address of the next node
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
void Print(struct Node *head){
    if(head==NULL)      //Base condition
       return;
    printf("%d ",head->data);//First Print the value of the Node
    Print(head->next);  //Recursion call
}
void ReversePrint(struct Node*head){
    if(head==NULL)      //Base condition
       return;
    ReversePrint(head->next);  //Recursion call
    printf("%d ",head->data);//Print in a Reverse order
}
int main(){
    head=NULL;
    Insert(1);Print(head);printf("\n"); 
    ReversePrint(head);printf("\n");
    Insert(2);Print(head);printf("\n");
    ReversePrint(head);printf("\n");
    Insert(3);Print(head);printf("\n");
    ReversePrint(head);printf("\n");
    return 0;
}
