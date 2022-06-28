
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        string s;
        cin>>s;
        int len=s.length();
        if (len%2!=0) s.erase(len/2,1);
        string shalf=s.substr(len/2,len/2);
        s.erase(len/2,len/2);
        
        sort(s.begin(),s.end());
        sort(shalf.begin(),shalf.end());
        (shalf==s) ? cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    return 0;
}