#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	while (t--){
	    int n,x;
	    cin>>n>>x;
        int a[n],b[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int j=0;j<n;j++){
            cin>>b[j];
        }

        vector <pair<int,int>> v;
        for (int i=0;i<n;i++){
            v.push_back({a[i],a[i]-b[i]});
        }
        int min=INT_MAX;
        pair<int,int> mp={INT_MAX,INT_MAX};
        int i=0;
        int c=0;
        while (x>=*min_element(a,a+n)){
            if(v[i].first>=x){
                if (v[i].second<=min){
                    if (mp.first>=v[i].first){
                    min=v[i].second;
                    mp.first=v[i].first;
                    mp.second=v[i].second;
                    }
                    x-=mp.second;
                }
            c++;
            }
            i++;
        }
       
        cout<<c<<endl;
	}
    return 0;
}