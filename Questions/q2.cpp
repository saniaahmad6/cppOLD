#include <bits/stdc++.h>

using namespace std;
int main (){
    long long t;
    cin>>t;
    while (t--){
        int n,x;
        cin>>n>>x;
        vector <int> v;
       if (n%2!=0){
           v.push_back(x);
           int c=0;
           for (int k=1;k<=(n-1)/2;k++){
               c++;
               v.push_back(x+c);
               v.push_back(x-c);
           }
       }
       if (n%2==0){
           int c=0;
           for (int k=1;k<=n/2;k++){
               c++;
               v.push_back(x+c);
               v.push_back(x-c);
           }


       }
        for (int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
      cout<<endl;  
      
    }
    return 0;
}