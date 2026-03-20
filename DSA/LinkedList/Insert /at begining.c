#include<stdio.h>
#include<stdlib.h>
//CREATE A NODE
struct Node{
    int data;           //data
    struct Node*next;   //address of next node
};
struct Node*head;       //globle variable  
void Insert(int x)      //Insert at begining 
{
    struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;
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
    /*Insert(1);Insert(2);Insert(3);
    Print()*/ 
    int n,i,x;        // input given by user 
    printf("how many number ? \n");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("\nElement %d:",i+1);
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    return 0;
}
