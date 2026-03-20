#include<stdio.h>
#include<stdlib.h>
//create a node 
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert (int data,int position) // I'm not consider any kind of Invaild position Input given by user...
{
    struct Node*newnode,*temp;
    int i;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    if(position==1){
        newnode->next =head;
        head=newnode;
        return;
    }
    temp=head;
    for(i=0;i<position-2;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
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
   /*Insert(3,1); Print();    // Insert at begining
     Insert(5,2); Print();    //Insert at End 
     Insert(5,2); Print();    //Insert at middle
    */
    int n,i,data,position;    //input given by user
    printf("how many times:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\ncount %d:\n",i+1);
        printf("Data :");
        scanf("%d",&data);
        printf("which position:");
        scanf("%d",&position);
        Insert(data,position); Print();
    }
    return 0;
}
