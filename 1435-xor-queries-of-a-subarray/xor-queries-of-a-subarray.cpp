class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;

        vector<int> preXor(arr.size() + 1, 0);

        for (int i = 1; i <= arr.size(); i++) {
            preXor[i] = preXor[i - 1] ^ arr[i - 1];
        }

        for (vector<int>& q : queries) {
            ans.push_back(preXor[q[1] + 1] ^ preXor[q[0]]);
        }

        return ans;
    }
};
