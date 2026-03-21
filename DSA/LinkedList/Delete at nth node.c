#include<stdio.h>
#include<stdlib.h>
//create a node 
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert (int data) // Insert at end
{
    struct Node*newnode,*temp;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        newnode->next =head;
        head=newnode;
        return;
    }
    temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void Delete(int position){
    struct Node *temp=head;
    int i;
    if(position==1){
        head=temp->next;
        free(temp);
        return;
    }
    for(i=0;i<position-2;i++){
        temp=temp->next;
    }
     struct Node *wlr;   //wlr=without loss the reference
        wlr=temp->next;
        temp->next=temp->next->next;
       // free(temp->next);wrong,because we already loss the reference
        free(wlr);
}
void Print() {
    struct Node* temp;
    temp=head;
    while (temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    head=NULL;
    Insert(1);Insert(2);Insert(3);
    Print();
    printf("\n");
    Delete (2);
    Print();
    return 0;
}
