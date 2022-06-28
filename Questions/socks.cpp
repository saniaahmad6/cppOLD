#include <bits/stdc++.h>

using namespace std;

int main(){
    int len,size=0;
    cin>>len;
    set <int> socks;
    for (int i=0;i<2*len;i++){
        int ele;
        cin>>ele;
        if (socks.count(ele)==0)socks.insert(ele);
        else (socks.erase(ele));
        int var=socks.size();
        if (var>=size) size=var;
    }
    
    cout<<size<<endl;
    
    return 0;
}