#include<iostream>
#define minimum 99999999
using namespace std;
int set[8]={-1,-1,-1,-1,-1,-1,-1,-1};
int inc_edges[11]={0,0,0,0,0,0,0,0,0,0,0};
int result[2][7];
//find operation
int find(int u){
    int x=u,v=0;
    while(set[x] > 0){
        x=set[x];
    }
    while(u!=x){
        v=set[u];
        set[u]=x;
        u=v;
    }
    return x; 
}
//join operation
void join(int u,int v){
    if(set[u]<set[v]){
        set[u]+=set[v];
        set[v]=u;
    }
    else{
        set[v]+=set[u];
        set[u]=v;
    }
} 
int main(){
    int vertex,edges,k,u,v,min,j=0;;
    cout<<"enter number of vertex and edges"<<"\n";
    cin>>vertex>>edges;
    int graph[3][10];
    //representing graph as edges
        for(int col_graph=0;col_graph<edges;col_graph++){
            for(int row_graph=0;row_graph<3;row_graph++){
                //enter both the vertex and edge of weight 
                //cout<<"enter vertex and weight"<<"\n";
                cin>>graph[row_graph][col_graph];
                //cout<<" - >";
            }
            cout<<"\n";
        }
   // cout<<"rupesh";
    //for selection of minimum edge weight
    while(j<vertex-1){
        min=minimum;
        for(int i=0;i<edges;i++){
            if(inc_edges[i]==0 && graph[2][i] < min){
                min=graph[2][i];
                k=i;
                u=graph[0][i];
                v=graph[1][i];
            }
        }
        if(find(u)!=find(v)){
            result[0][j]=u;
            result[1][j]=v;
            join(find(u),find(v));
            inc_edges[k]=1;
            j++;
        }
        else{
            inc_edges[k]=1;
            j++;
        }
        
    }
    cout<<"spanning tree\n";
    for(int m=0;m<7;m++){
        cout<<result[0][m]<<" - >"<<result[1][m]<<"\n";
    }
    return 0;
}
