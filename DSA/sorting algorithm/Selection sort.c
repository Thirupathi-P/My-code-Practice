#include<stdio.h>
#include<stdlib.h>
#define Max 100   
//Note,here No-(;)
int A[Max];
/*If A is not globle Varible.
A[] Must Passing an Argument Both selectionsort and Print function */

void Print(int n) 
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void  selectionsort(int n)
{
    int i,Min,j,temp;
    for(i=0;i<n-2;i++)
    {
        printf("iteration %d \n",i+1);
        Min=i; //Let assume the Minimun Element is i.
        for (j=i+1;j<n-1;j++)
        {   
            if(A[j]<A[Min]) //Now,Find the Minimum element in the array.
            {
                Min=j;
            }
            // swap the A[Min] & A[i] .
            temp=A[i];
            A[i]=A[Min];
            A[Min]=temp;
        }
        Print(n);
    }
}
int main()
{
    int i,n;
    printf("How many Number :");
    scanf("%d",&n);
    printf("Enter the number one by one :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Before Sorting: "); Print(n);
    selectionsort(n);
    printf("After Sorting: "); Print(n);
    return 0;
}
