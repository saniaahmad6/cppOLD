#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        int n,m,k,space;
        cin>>n>>m>>k;
        space=m-k;
        if (space>=n){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
        
    }
    return 0;
}