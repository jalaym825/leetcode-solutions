#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {
        vector<string> ans(arr.size());
        
        vector<map<string, bool>> substrings(arr.size());
        
        for (int i = 0; i < arr.size(); ++i) {
            const string& str = arr[i];
            for (int j = 0; j < str.size(); ++j) {
                string tempStr;
                for (int k = j; k < str.size(); ++k) {
                    tempStr += str[k];
                    substrings[i][tempStr] = true;
                }
            }
        }
        
        for (int i = 0; i < arr.size(); ++i) {
            vector<string> tempans;
            string shortestSubstring;
            
            for (auto& substr : substrings[i]) {
                bool isShortest = true;

                for (int j = 0; j < arr.size(); ++j) {
                    if (i != j && substrings[j].count(substr.first) > 0) {
                        isShortest = false;
                        break;
                    }
                }
                
                if (isShortest) {
                    if (shortestSubstring.empty() || substr.first.size() < shortestSubstring.size()) {
                        shortestSubstring = substr.first;
                        tempans.clear();
                        tempans.push_back(shortestSubstring);
                    } else if (substr.first.size() == shortestSubstring.size()) {
                        tempans.push_back(substr.first);
                    }
                }
            }
            
            if (!tempans.empty()) {
                sort(tempans.begin(), tempans.end());
                ans[i] = tempans[0];
            } else {
                ans[i] = "";
            }
        }
        
        return ans;
    }
};
