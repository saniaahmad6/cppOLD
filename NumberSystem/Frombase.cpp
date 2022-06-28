
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int num{},base{};
    double fraction{};
    cout<<"Enter number to be coverted: ";
    cin>>num;
    string s{};
    getline(cin,s,'.');
    cin>>fraction;
    cout<<num<<" "<<fraction<<endl;
    cout<<"Enter base from: ";
    cin>>base;
    int copy{num};
    int digit{},i{},sum{};
    vector <int> result;
    while (copy>0){
        digit=copy%10;
        sum+=(pow(base,i)*digit);
        copy/=10;
        i++;
    }
    // cout<<sum;
    
    int frac{fraction};
    int count{},digit1{};
    double sum1{};
    while (count<8){
        
        digit1=frac%10;
        
        result.push_back(digit1);
        frac/=10;
        if (frac==0){
            break;
        }
        
    }
    
    
    int c{-1*(result.size())};
    for (auto i:result){
        sum1+=((pow(base,c))*(i));
        c++;
        cout<<sum1<<endl;
    }cout<<sum1+sum;



    return 0;
}