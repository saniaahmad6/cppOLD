#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
        int n;
        cin>>n;
        vector <int> v1,v2;
        for (int i=0;i<n;i++ ){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        for (int i=0;i<n;i++ ){
            int x;
            cin>>x;
            v2.push_back(x);
        }
        int c=0;
        for (int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                if (v1[i]==v2[j]){
                    if (v2[i]==v1[j]) c++;
                }
            }
        }
        cout<<c<<endl;
	}
	return 0;
}
