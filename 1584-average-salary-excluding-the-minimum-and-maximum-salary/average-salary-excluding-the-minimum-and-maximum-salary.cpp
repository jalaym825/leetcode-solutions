class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        return accumulate(salary.begin() + 1, salary.begin() + salary.size() - 1, 0) / (double)(salary.size() - 2);
    }
};