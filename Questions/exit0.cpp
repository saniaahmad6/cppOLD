#include <iostream>

using namespace std;

int main(){
    int ar[]={1,2,3,4};
    int key=3,l=0,h=3;

    while (l<=h)
{
        int mid=(l+h)/2;
        if (key==ar[mid]){
            cout<<"Element at: "<<mid<<endl;
            exit(0);
        }
        else if (key>ar[mid]) l=mid+1;
        else h=mid-1;

}   
    cout<<"NOT FOUND"<<endl;
    return 0;
}