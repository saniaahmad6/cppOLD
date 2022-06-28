#include <bits/stdc++.h>
using namespace std;
int digsum(int copy){
    int d,sum=0;
    while (copy!=0){
            d=copy%10;
            sum+=d;
            copy/=10;
    }
    if (sum%2==0) return 1;
    else return -1;
}


int main(){
    int t;
    cin>>t;
    for (int a=0;a<t;a++){
        int x,ans,ans2;
        cin>>x;
        ans=digsum(x);
     
        while (true){
            x++;
            ans2=digsum(x);
            if (ans2!=ans) {cout<<x<<endl; break;}
        }

    }
    return 0;
}