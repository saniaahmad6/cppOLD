#include <bits/stdc++.h>
using namespace std;

int main(){

    int n=3,s=1,p=1,q=1;
    //cin>>n,s,p,q;
    int arr[n];
    arr[0]=1;
    for(int i=1;i<n;i++){
        arr[i]=(arr[i-1]*p)+(q*arr[0]);
        cout<<arr[i]<<' ';
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;

}