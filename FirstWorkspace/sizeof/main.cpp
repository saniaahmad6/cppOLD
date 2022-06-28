#include <iostream>
#include <climits>
//#include <cfloat>

using namespace std;

int main(){
    int x{13};
    cout<<"\nSIZE OF\n"<<endl;
    cout<<"Integer; "<<sizeof(int)<<endl;
    cout<<"short; "<<sizeof(short)<<endl;
    cout<<"long; "<<sizeof(long)<<endl;
    cout<<"unsigned long; "<<sizeof(unsigned long)<<endl;
    cout<<"long long; "<<sizeof(long long)<<endl;
    cout<<"float; "<<sizeof(float)<<endl;
    cout<<"double; "<<sizeof(double)<<endl;
    cout<<"long double; "<<sizeof(long double)<<endl;
    cout<<"char; "<<sizeof(char)<<endl;
    cout<<"bool; "<<sizeof(bool)<<endl;
    
    cout<<"\n CLIMITS VALUES\n "<<endl;
    cout<<"Integer; "<<INT_MAX<<endl;
    cout<<"Integer; "<<CHAR_MAX<<endl;
    cout<<"Integer; "<<LLONG_MAX<<endl;
    cout<<"Integer; "<<LONG_MAX<<endl;
    cout<<"Integer; "<<DBL_MAX<<endl;
    
    
    
    
    
    return 0;
}