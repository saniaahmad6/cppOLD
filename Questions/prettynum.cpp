#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	int arr[num][2];
	for(int i{};i<num;i++){
	    cin>>arr[i][0]>>arr[i][1];
	}
	
	for (int i{};i<num;i++){
	    int c{};
	    for(int j{arr[i][0]};j<=(arr[i][1]);j++){
	        int d=j%10;
	        if (((d==3) || (d==2) || (d==9) )){
	            c++;
	        }
	    }cout<<c<<endl;
	}
	return 0;
}
