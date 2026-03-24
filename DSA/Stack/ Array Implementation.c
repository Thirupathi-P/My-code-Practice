#include<stdio.h>

int A[100];
int top;
void push(int x){
    A[++top]=x;
}
void pop(){
    top--;
}
int Top(){
    return A[top];
}
int main(){
    push(1);
    push(2);
    printf("%d \n",Top());
    pop();
    printf("%d \n",Top());
    return 0;
}
