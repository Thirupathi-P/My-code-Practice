#include<stdio.h>
#include<stdlib.h>
#define Max 100   
//Note,here No-(;)
int A[Max];
/*If A is not globle Varible.A[] Must Passing an Argument Both selectionsort and Print function */
void  selectionsort(int n){
    int i,Min,j,temp;
    for(i=0;i<n-1;i++){
        Min=i; //Let assume the Minimun Element is i.
        for (j=i+1;j<n;j++){   
             //Now,Find the Minimum element in the array.
            if(A[j]<A[Min]) {
                Min=j;
            }// swap the A[Min] & A[i] .
            temp=A[i];
            A[i]=A[Min];
            A[Min]=temp;
        }
    }
}
void Print(int n) {
    int i;
    for (i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main(){
    int i,n;
    printf("How many Number :");
    scanf("%d",&n);
    printf("Enter the number one by one :\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    Print(n);// Before sorting
    selectionsort(n);
    Print(n);//After Sorting
    return 0;
}
