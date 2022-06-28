#include <iostream>
using namespace std;

int main(){
    int length{},width{},height{};
    const double base_charge{2.5};
    cout<<"\nEnter dimensions in form of length, width, height: ";
    cin>>length>>width>>height;
    cout<<"\n======================================\n"<<endl;
    if (height>10 || length>10 || width>10)//CONDITIONS
        cout<<"Can't Ship it!"<<endl;
    else{
        int volume=length*width*height;
        double cost=base_charge;
        
        if (volume>500){
            cost+=.25*cost;
            cout<<"ADDING TIER 2 SURCHARGE"<<endl;
        }
        else if (volume>100){
            cost+=.10*cost;
            cout<<"ADDING TIER 1 SURCHARGE"<<endl;
        }
        cout<<"VOLUME in cube inches: "<<volume<<endl;
        cout<<"COST: $"<<cost<<endl;
        
        
    }
    
    return 0;
}
