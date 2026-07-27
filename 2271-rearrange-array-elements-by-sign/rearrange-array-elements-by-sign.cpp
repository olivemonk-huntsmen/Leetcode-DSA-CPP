class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n);

        int pos = 0;   // Next even index
        int neg = 1;   // Next odd index

        for (int num : nums) {
            if (num > 0) {
                ans[pos] = num;
                pos += 2;      // Move to the next even index
            } else {
                ans[neg] = num;
                neg += 2;      // Move to the next odd index
            }
        }

        return ans;
    }
};