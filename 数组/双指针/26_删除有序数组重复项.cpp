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
������������飬һ��ѭ��
�жϣ�
1��if nums[i]==val ��nums[i]=-1��cnt++
2) if nums[i]==-1 ����Ԫ������
*/
