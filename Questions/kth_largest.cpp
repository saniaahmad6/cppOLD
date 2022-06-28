#include <bits/stdc++.h>

using namespace std;
void rotat(vector<int>& nums, int k) {
        int temps;
        for (int i=0;i<k;i++){
            temps=nums[nums.size()-1];
            for (int j=nums.size()-1;j>0;j--){
                nums[j]=nums[j-1];
            }
            nums.at(0)=temps;
        }  
        for (int i=0;i<nums.size();i++) 
        cout<< nums[i]<<" "; 
}

void rotat(vector<int>& nums, int k){
    int arr[k];
    int last=nums.size()-1;
    for (int i=0;i<k;i++){
        arr[i]=nums[last];
        nums.pop_back();
    }

}
int main(){
    vector <int> x={1,2,3,4,5,6,7};
    rotat(x,3);
    rot(x,3);
    return 0;
}