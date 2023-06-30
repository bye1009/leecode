#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for (int i = 0; i<n; i++){
            if (nums[i]!=0){
                nums[j] = nums[i];
                j++;
            }
        }
        for (int i = j; i < n; i++){
            nums[i] = 0;
        }
    }
};


int main(){
    vector<int> nums{0,1,0,3,12};
    Solution s;
    s.moveZeroes(nums);
    for (int i=0; i<nums.size(); i++){
        cout<<nums[i];
    }
}
/*
nums = [3,2,2,3],val=3
遍历传入的数组，一个循环
判断：
1）if nums[i]==val 是nums[i]=-1，cnt++
2) if nums[i]==-1 后面元素左移
*/
