#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n = nums.size();
            int j = 0;
            for(int i = 0;i < n; i++){
                if (nums[i] > nums[j]){
                    j++;
                    cout<<j<<endl;
                    nums[j] = nums[i];
                }
            }
            return j+1;
        }
};


int main(){
    vector<int> nums{1,1,2};
    Solution s;
    int a = s.removeDuplicates(nums);
    cout << a;
    for (int i=0; i<a; i++){
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
