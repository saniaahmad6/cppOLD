#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	for(int i{};i<num;i++){
        int n;
	    cin>>n;
        int pos=0;
        if (n%2==0){
            pos=n/2;
            
        }else{
            pos=-1*(n/2+1);
            
        }
        
        cout<<pos<<endl;
	
	
	
	}
	return 0;
}
