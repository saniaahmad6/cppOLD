#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin>>num;
    vector <vector<int>> initial{
        {0,6},{1,2},{2,5},{3,5},{4,4},
        {5,5},{6,6},{7,3},{8,7},{9,6}
    };

	int arr[num][3];
	for(int i{};i<num;i++){
	    cin>>arr[i][0]>>arr[i][1];
        arr[i][3]=arr[i][0]+arr[i][1];
	}
	
	for (int i{};i<num;i++){
        int sum=arr[i][3];
        while (sum>0){
            int d=sum%10;
            for(auto i:initial){
                if (d==i.at(0)){
                    cout<<i.at(1)<<endl;
                }
            }
        }
	    
	}
	return 0;
}
