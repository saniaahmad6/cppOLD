#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int x,a,b,diff,card,p=0;
        cin>>x>>a>>b;
        diff=a-b;
        if (diff<0) diff*=-1;
        if (diff<=1){
            if (a>=b){
                a++;b--;
                if (a<=x) p++;
                if ((b<=x) && b>0) p++;
            }
            else {
                a--;b++;
                if (a<=x && a>0) p++;
                if ((b<=x)) p++;
            }
            cout<<p<<endl;
        }
        
        else{
            cout<<0<<endl;
        }

    }
    return 0;
}