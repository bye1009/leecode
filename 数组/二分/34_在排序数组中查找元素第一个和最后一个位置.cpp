#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int start = nums.size();
        int endd = -1;
        while(left <= right){
            cout<<left<<" "<<right<<endl;
            int mid = left + (right - left)/2;
            if (nums[mid]==target){
                 if (mid < start)
                    //endd = start;
                    start = mid;
                right = mid - 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        left = 0;
        right = nums.size() - 1;
        //endd = -1;
        while(left <= right){
            cout<<left<<" "<<right<<endl;
            int mid = left + (right - left)/2;
            if (nums[mid]==target){
                 if (mid > endd)
                    endd = mid;
                left = mid + 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        if (start > endd){
            start = -1;
            endd = -1;
        }
        vector<int> r{start,endd};
        return r;
    }
};
int main(){
    vector<int> nums{5,8,8,8,8,10};
    int target1 = 8;
   // int target2 = -1;
   // int target3 = 7;
    Solution s;
    vector<int> a = s.searchRange(nums, target1);
    //vector<int> b = s.searchRange(nums, target2);
   // vector<int> c = s.searchRange(nums, target3);
    cout << a[0]<<a[1];
}
/*
5 7 7 8 8 10 target=7
0 1 2 3 4  5
非递减数组、logn——>二分法确定7的位置
start=-1
[0,5]:search(7) mid=0+(5-0)/2=2 nums[2]=7 start=2
[0,1]: mid=0 num[0]=5<7
[1,1]:mid = 1 nums[1]=7  start=1

end=6
[3,5]:mid=4 nums[4]=8>7
[3,4]:mid=3 nums[3]=8>7
[3,2]:break

*/
