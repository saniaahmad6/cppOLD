#include <iostream>
#include <set>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	for(int i{};i<num;i++){
        int n;
	    cin>>n;
        set <int> name;
        for (int j=0;j<n;j++){
            int x;
            cin>>x;
            name.insert(x);
        }
        int c=0;
        set<int>::iterator itr;
        set<int>::iterator itr1;
        for (itr = name.begin(); itr !=name.end(); itr++) {
            for (itr1 = name.begin()+itr; itr1 !=name.end(); itr1++){
                int xor1=*itr^*itr1;
                int and1=*itr&*itr1;
                if (xor1<and1)
                    c++;
            }
            
        }
        
        cout<<c<<endl;
	
	
	
	}
	return 0;
}
