#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int b[]={4,6,7,8,9};
    int i=0,j=0,k=0;
    int m=5,n=5;
    int c[m+n];
    while (i<m &&j<n){
        if (a[i]<b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    for(;i<m;i++){
        c[k++]=a[i];
    }
    for(;j<n;j++){
        c[k++]=b[j];
    }

    for (int c1=0;c1<m+n;c1++){
        cout<<c[c1]<<" ";
    }
    return 0;
}