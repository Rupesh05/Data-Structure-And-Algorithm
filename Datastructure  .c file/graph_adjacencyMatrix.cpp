#include<iostream>
using namespace std;
int grp[9][9]={0};
void addEdge(int u,int v,int wt){
    grp[u][v]=wt;
    grp[v][u]=wt;
}

void Display(int grp[][9]){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<grp[i][j]<<" ";
            }
            cout<<"\n";
        }
}
int main(){
    int edge,wt,x,y;
    cout<<"Enter number of edge";
    cin>>edge;
    for(int i=0;i<edge;i++){
        cout<<"Enter source vertex and destination vertex  with weight";
        cin>>x>>y>>wt;
        addEdge(x,y,wt);
    }
    Display(grp);
    return 0;
}
