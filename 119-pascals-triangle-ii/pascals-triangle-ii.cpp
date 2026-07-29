class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> ans;

        long long element = 1;
        ans.push_back(element);

        for (int r = 0; r < rowIndex; r++) {
            element = element * (rowIndex - r);
            element = element / (r + 1);

            ans.push_back(element);
        }

        return ans;
    }
};