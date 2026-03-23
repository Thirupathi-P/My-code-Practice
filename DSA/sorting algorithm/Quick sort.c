#include<stdio.h>
//swap with using pointer .
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void Print(int A[],int n) {
    int i;
    for (i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int Partition(int A[],int start,int end)
{
    int pivot,pIndex,i;
    pivot=A[end];
    pIndex=start; //set partitionIndex as start initially.
    for(i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {   
            swap(&A[i],&A[pIndex]);
            pIndex++;
        }
    }
    swap(&A[pIndex],&A[end]);
    return pIndex;
}
void Quicksort(int A[],int start,int end)
{
    int pIndex;
    if(start<end)
    {
        pIndex=Partition(A,start,end);
        Quicksort(A,start,pIndex-1);
        Quicksort(A,pIndex+1,end);
    }
}
int main(){
    int A[]={7,6,5,4,3,2,1,0};
    int n= sizeof(A)/sizeof(A[0]); //Calculation of No.of element of array.
    printf("Before sorting:\n"); Print(A,n);
    Quicksort(A,0,n-1);
    printf("After sorting:\n"); Print(A,n);
    return 0;
}

/* swap without using pointer
void swap(int A[],int a,int b){
    int temp;
    temp = A[a];
    A[a] = A[b];
    A[b] = temp;
} 
swap(A,i,pIndex);
swap(A,pIndex,end);
*/
