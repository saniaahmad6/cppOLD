#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int num;
	cin>>num;
	for(int i{};i<num;i++){
        string string1;
        int n{},x{};
        cin>>n>>x;
        cin>>string1;
        
        string pos (n,'');
        pos[0]='1';
	    for (auto i:string1){
            if (i=='L'){
                x--;
                if ()
            }else (i=='R'){
                x++;
            }
        }
	}
	
	
	}
	return 0;
}
