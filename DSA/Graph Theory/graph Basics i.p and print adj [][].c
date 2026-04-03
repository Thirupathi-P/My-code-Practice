//Graph Theory 
#include <stdio.h>
# define Max 10 
Gov11to12=iiitK
int graph [Max][Max]={0};
int V=5 ,E=5;
void inputGraph(){
    int i,u,v;
    for (i=0;i<E;i++){
        printf("5 Vertices are there (0-4)\nConnect the Vertices by edges\n");
        printf("Edge %d (V1 V2):",i+1);
        scanf("%d %d",&u,&v);
        if (u<V && v<V){
        graph[u][v]=1;
        graph[v][u]=1;
        }
        else  { /* Invalid Input */ }
    }
}
void PrintGraph(){
    int i,j;
    for(i=0;i<V;i++){
        printf("%d : ",i);
        for(j=0;j<V;j++){
            if (graph[i][j]==1)
              printf("%d ",j);
        }
        printf("\n");
    }
}
void print();

int main() {
 // You can ask values of V , E from the user
    inputGraph();
    PrintGraph();
    printf("\nAdjacency Matrix:\n");
    print();
    return 0;
}
// Print the 2D Array :-
void print(){
    int i,j;
    for(i=0;i<V;i++) {
        for(j=0;j<V;j++){
              printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
}
