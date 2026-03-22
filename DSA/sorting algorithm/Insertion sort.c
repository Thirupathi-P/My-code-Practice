#include<stdio.h>
#include<stdlib.h>

void Print(int A[], int n) {
    int i;
    for (i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void Insertionsort(int A[], int n)
{ 
    int i,hole,value;
    //Start with i=1 
    for (i=1;i<n-1;i++)
    {
        printf("iteration %d\n",i+1);
        value=A[i];
        hole=i;
        while(hole>0 && A[hole-1]>value)
        {
            A[hole]=A[hole-1];
            hole=hole-1;
        }
        A[hole]=value;
        Print(A,n);
    }
    
}
    
    
int main(){
    int i,n,A[100];
    printf("How many Number :");
    scanf("%d",&n);
    printf("Enter the number one by one :\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Before sorting\n"); Print(A,n);// Before sorting
    Insertionsort(A,n);
    printf("After sorting\n");
    Print(A,n);//After Sorting
    return 0;
}
