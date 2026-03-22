#include<stdio.h>
#include<stdlib.h>
#define Max 100 
//Note here No-(;)
int A[Max];
/*If A is not globle Varible.A[] Must Passing an Argument Both Bubblesort and Print function.*/ 
void Print(int n) {
    int i;
    for (i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void Bubblesort(int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        printf("%d iteration\n",i+1);
        for(j=0;j<=n-i-2;j++)
        {
             if(A[j]>A[j+1])//compare the Adjacent elements in a array
             {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
               //swap the values
                Print(n);
            }
        }
    }
}
int main(){
    int i,n;
    printf("How many Number :");
    scanf("%d",&n);
    printf("Enter the number one by one :\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Before sorting\n"); Print(n);
    Bubblesort(n);
    printf("After sorting\n");
    Print(n);
    return 0;
}
