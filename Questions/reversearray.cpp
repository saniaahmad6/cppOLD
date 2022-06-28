#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<t/2;i++){
        temp=arr[i];
        arr[i]=arr[t-i-1];
        arr[t-1-i]=temp;
        
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}