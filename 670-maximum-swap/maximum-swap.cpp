class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        int n = str.length();
        
        vector<int> last(10, -1);
        for(int i = 0; i < n; i++) {
            last[str[i] - '0'] = i;
        }
        
        bool swapped = false;
        for(int i = 0; i < n; i++) {
            int curr = str[i] - '0';
            for(int j = 9; j > curr; j--) {
                if(last[j] > i) {
                    swap(str[i], str[last[j]]);
                    return stoi(str);
                }
            }
        }
        
        return num;
    }
};