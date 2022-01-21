// 1.滑动窗口
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int len = 1;
        int res = 0;
        for(int i = 0; i < nums.size()-1; ++i){
            if(nums[i] == nums[i+1]){
                continue;
            }
            if(nums[i] + 1 == nums[i+1]){
                len += 1;
            }else{
                res = max(res, len);
                len = 1;
            }
        }
        return max(res, len);
    }
};

// 2.哈希表
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set;
        for (const int& num : nums) {
            num_set.insert(num);
        }

        int longestStreak = 0;

        for (const int& num : num_set) {
            if (!num_set.count(num - 1)) {
                int currentNum = num;
                int currentStreak = 1;

                while (num_set.count(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;           
    }
};
