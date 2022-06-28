#include <iostream>

using namespace std;

int main(){
    const double convert_factor {1.19};
    
    cout<<"\nEnter no of Euros: ";
    double euro{0.0};
    cin>>euro;
    
    double dollar;
    dollar=euro*convert_factor;
    cout<<"No of dollars: "<<dollar<<endl<<endl;
    return 0;

}