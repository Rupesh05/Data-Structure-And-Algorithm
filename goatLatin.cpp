#include<bits/stdc++.h>
using namespace std;

string solve(string s){

    int n=s.size();
    /*map<char,bool> vow {
                        {'a',true},
                        {'A',true},
                        {'e',true},
                        {'E',true},
                        {'i',true},
                        {'I',true},
                        {'o',true},
                        {'O',true},
                        {'u',true},
                        {'U',true},
                       };
                       */

    map<char,bool> vow;
        vow['a']=true;
        vow['e']=true;
        vow['i']=true;
        vow['o']=true;
        vow['u']=true;
        vow['A']=true;
        vow['E']=true;
        vow['I']=true;
        vow['O']=true;
        vow['U']=true;
    bool chk=false;
    string w="",ans="";

    if(vow[s[0]])
            chk=true;

    for(int i=0;i<=n;i++){

        if(s[i]==' ' || i==n){

            if(chk){
                w+="ma";
                ans+=w;
                ans+=" ";
                w="";
                chk=false;
            }
            else{
                char k=w[0];
                for(int j=1;j<w.size();j++){
                    w[j-1]=w[j];
                }
                w[w.size()-1]=k;
                w+="ma";
                ans+=w;
                ans+=" ";
                w="";

            }
            if(vow.find(s[i+1])!=vow.end()){
                chk=true;
            }
        }
        else{
            w+=s[i];
        }
    }

    int k=1;
    string res="";
    for(int i=0;i<=ans.size();i++){

        if(ans[i]==' ' || i==ans.size()-1){
                for(int j=1;j<=k;j++){
                    w+="a";
                }
            res+=w;
                res+=" ";
            k++;
            w="";
        }
        else{
            w+=ans[i];
        }

    }
    cout<<res<<"\n";
    return ans;

}

int main(){

    string s="The quick brown fox jumped over the lazy dog";
    solve(s);

    return 0;

}

