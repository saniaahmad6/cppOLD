#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    map <int,int> m;
    while (t--){
        int a;
        cin>>a;
        m[a]++;
    }
    int max=0,size=0;
    //max frequency object
    for (pair <int,int> p:m){
      
        
        if (max<=p.second) max=p.second;
    }
    cout<<max<<endl;
    return 0;
}