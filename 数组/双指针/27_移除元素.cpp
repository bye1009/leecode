#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void move(vector<int>& nums, int m, int n){
        for(int i = m; i < n-1; i++){
            nums[i] = nums[i+1];
        }
        nums[n-1] = -2;
    }
    int removeElement(vector<int>& nums, int val) {
                int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (nums[i]==val){
                nums[i] = -1;
                cnt++;
            }
            if (nums[i]==-1){
                move(nums, i, n);
                i--;
            }

        }
        int len = n - cnt;
        return len;
    }
};


int main(){
    vector<int> nums{0,1,2,2,3,0,4,2};
    Solution s;
    int a = s.removeElement(nums, 2);
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
