#include <bits/stdc++.h>

using namespace std;

int main(){
    int len;
    cin>>len;
    set <int> arr;
    for (int i=0;i<len;i++){
        int ele;
        cin>>ele;
        arr.insert(ele);
    }

    if (arr.size()<=1) cout<<"NO"<<endl;
    else{
    auto it=arr.begin();
    it++;
    cout<<*it<<endl;
    }
    return 0;
}