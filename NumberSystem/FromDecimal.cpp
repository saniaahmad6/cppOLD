#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num{},base{};
    double fraction{};
    cout<<"Enter number to be coverted: ";
    cin>>num>>fraction;
    cout<<num<<" "<<fraction<<endl;
    cout<<"Enter base to: ";
    cin>>base;
    int quot{num};
    int rem{};
    vector <int> result1,result2;
    while (quot>0){
        rem=quot%base;
        result1.push_back(rem);
        quot/=base;
    }
    int total{fraction},integer{},count{};
    while (count<8){
        num=base*total;
        result2.push_back(num);
        total/=num;
        if (total==0){
            break;
        }
        count++;
    }

    for (int i{result1.size()-1};i>=0;i--){
        cout<<result1.at(i)<<" ";
    }cout<<".";
    for (int i{};i<(result2.size());i++){
        cout<<result2.at(i)<<" ";
    }



    return 0;
}