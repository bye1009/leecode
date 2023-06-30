#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size()  - 1;
        while (left <= right){
            int mid = left + (right - left)/2;
            if (nums[mid] > target){
                right = mid - 1;
            }
            else if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target){
                left = mid + 1;
            }
        }
        if(left > right){
            cout<< left<<right<<endl;
            int pos =  right + 1;
            return pos;
        }
        else{
            // if
            int pos = left + 1;
            return pos;
        }

    }
};
int main(){
    vector<int> nums{-1,0,3,5,9,12};
    int target1 = 17;
    int target2 = 6;
    int target3 = -5;
    Solution s;
    int a = s.search(nums, target1);
    int b = s.search(nums, target2);
    int c = s.search(nums, target3);
    cout << a <<b <<c;
}
/*
-1,0,3,5,9,12   9
 0 1 2 3 4  5
 [0,5] mid=0 + (5-0)/2 = 2 nums[2]=3
    if 3 > 9 right = mid-1
        3=9  return mid
        3 < 9 left = mid +1
            [3,5] mid=4 nums[4]=9*/
