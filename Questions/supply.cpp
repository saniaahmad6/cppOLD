#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	for(int i{};i<num;i++){
        int n;
	    cin>>n;
        int c=1,pos=0;
        for(int i=0;i<n;i++){
            if (i%2==0) pos-=c;
            else pos+=c;
            c++;
        }
        
        cout<<pos<<endl;
	
	
	
	}
	return 0;
}
