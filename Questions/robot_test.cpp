#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        set <int> pos;
        pos.insert(x);
        for (int i=0;i<s.length();i++){
            if (s[i]=='L') x--;
            else if (s[i]=='R') x++;
            pos.insert(x);
        }
        cout<<pos.size()<<endl;
    }
    return 0;
}