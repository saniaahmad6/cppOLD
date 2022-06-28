#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    int s=0,c=0;
	    for (int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        s+=x;
	        arr[i]=x;
	    }
	    while (true){
	        if (s>=x){
	            c+=n;
	            break;
	        }
	        else{
	            x-=s;
	            c+=n;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
