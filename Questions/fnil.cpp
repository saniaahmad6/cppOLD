#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	for(int i{};i<num;i++){
        int n;
	    cin>>n;
        int c=0;
        int fi=1,x;
        
        for(int i=1;i<n;i++){
            fi=fi|i;
            
            x=fi|(i+1);
            if (fi==x){
                c++;
            }
            
        }
        
        cout<<c<<endl;
	
	
	
	}
	return 0;
}
