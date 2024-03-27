class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int num: nums)
        {
            int maxNum = 0;
            int tempNum = num;
            while(tempNum > 0)
            {
                maxNum = max(maxNum, tempNum % 10);
                tempNum /= 10;
            }
            string str;
            for(int i = 0; i < to_string(num).size(); i++)
            {
                str.push_back(maxNum+'0');
            }
            sum += stoi(str);
                
        }
        return sum;
    }
};