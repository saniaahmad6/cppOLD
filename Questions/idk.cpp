#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int k=b+1;
    double x=a+static_cast<double>(a*b)/(k-b);
    int c=0;
    while (x>=a+1){
        x=a+static_cast<double>(a*b)/(k-b);
        if ((a*b)%(k-b)==0) {
            c++;
        }
        k++;
    }
    cout<<c<<endl;
    return 0;

}