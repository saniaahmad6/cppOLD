#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num{};
    cin>>num;
    vector <vector<int>> table;
    for (int i{1};i<=num;i++){
        int x{},y{};
        cin>>x>>y;
        table.push_back({x,y});
    }
    for (int i{0};i<num;i++){
        int sum{0};
        for (int j{0};j<=1;j++){
            sum+=table.at(i).at(j);
        }
        cout<<sum<<endl;
    }
    
    
    return 0;
}
