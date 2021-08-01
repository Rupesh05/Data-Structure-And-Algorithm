#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter number of vertex";
    cin>>n;
    int G[n+1][n+1];
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            vector<pair<int,int> > p;
            int x;
            //cout<<"enter the vertex which is connected to"<<i<<" corresponding weight";
            cout<<"enter number of connected vertex";
            cin>>x;
            for(int k=0;k<x;k++){
                int v,w;
                cout<<"enter connected vertex and weight";
                cin>>v>>w;
                p.push_back(make_pair(v,w));
            }
            for(int m=0;m<p.size();m++){
                if(j==p[i].first)
                    G[i][j]=p[i].second;
            }
            p.clear();
            G[i][j]=0;

        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<G[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}