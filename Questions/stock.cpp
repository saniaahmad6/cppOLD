#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,c=0;
    cin>>t;
    map <string,pair<int,int>> m;
    while (t--){
        c++;
        int a;
        string s;
        cin>>a>>s;
        if (s!="BUY"){
            int b;
            cin>>b; 
            m[s]={b,a};
        }
        else {
            string mins;
            int min=INT_MAX;
            for (pair <string,pair<int,int>> p:m){
                if ((p.second).first<=min) {mins=p.first; min=(p.second).first;}
            }
            cout<<mins<<" "<<c<<endl;
            m.erase(mins);
        }
       
    }
  
    return 0;
}