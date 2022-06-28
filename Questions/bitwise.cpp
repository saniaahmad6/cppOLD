#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	for(int i{};i<num;i++){
        int n;
	    cin>>n;
        int c=0;
        for(int i=2;i<=n;i++){
            int fi=1;
            int fil=1;
            for(int j=1;j<=i;j++){
                fi|=j;
                if (j<i)
                    fil|=j;
            }
            if (fi==fil) c++;
            
        }
        
        cout<<c<<endl;
	
	
	
	}
	return 0;
}
