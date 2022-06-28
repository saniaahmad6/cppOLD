#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    vector <int> vec{1,2,3};
    int result{};
    for (int i{0};i<vec.size();i++){
        for (int j{i+1};j<vec.size();j++)
            result+=(vec[i]*vec[j]);
    }
    cout<<result;
    return 0;
}