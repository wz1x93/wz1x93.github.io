![wz](https://github.com/wz1x93/wz1x93.github.io/blob/ad987aac93766e5859c11c2460ab5204bc7a399d/leetcode/0084.png)

#include <iostream>
#include <vector>

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int len = heights.size();
        int res = 0;

        for(int i = 0; i < len; ++i){
            int left = i;
            int cur_height = heights[i];
            while(left > 0 && heights[left-1] >= cur_height){
                left -= 1;
            }

            int right = i;
            while(right < len-1 && heights[right+1] >= cur_height){
                right += 1;
            }
            int max_width = right - left + 1;
            res = max(res, max_width * cur_height);
        }
        return res;
    }
};

int main(){
    vector<int> inputs = {1,2,3,4,5};
    Solution solu;
    int res = solu.largestRectangleArea(inputs);
    cout << res << endl;
}
