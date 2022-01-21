// 1.滑动窗口
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res = 0;
        for(int i = 0; i < nums.size()-1; ++i){
            if(nums[i] != nums[i+1]){
                res = nums[i];
                return res;
            }else{
                i += 1;
                continue;
            }
        }
        return nums[nums.size()-1];
    }
};

// 2.位运算
class Solution {
    public int singleNumber(int[] nums) {
        int single = 0;
        for (int num : nums) {
            single ^= num;
        }
        return single;
    }
}
