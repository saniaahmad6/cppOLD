#include <bits/stdc++.h>

using namespace std;
void reverse(vector <int> &nums,int start,int end){
        int temps;
        while (start<end){
            temps=nums[end];
            nums[end]=nums[start];
            nums[start]=temps;
            start++;
            end--;
        }
    }
void rotate(vector <int> &nums,int k){
    
    int len=nums.size();
    reverse(nums,0,len-1);
    reverse(nums,0,k-1);
    reverse(nums,k,len-1);
}
int main(){
    vector <int> nums={-1,-100,3,99};
    int k=2;
    rotate(nums,k);
    for (int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}