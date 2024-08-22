class Solution {
private:
    string intToBin(int num) {
        string bin;
        while(num > 0) {
            bin.push_back(num & 1 ? '1':'0');
            num >>= 1;
        }
        reverse(bin.begin(), bin.end());
        return bin;
    }
    int binToInt(string bin) {
        int ans = 0;
        for(int i = 0; i < bin.size(); i++) {
            if(bin[i] == '1') {
                ans += 1 << (bin.size() - 1 - i); // Use bitwise shift instead of pow
            }
        }
        return ans;
    }
public:
    int findComplement(int num) {
        string bin = intToBin(num);
        for(int i = 0; i < bin.size(); i++) {
            bin[i] = bin[i] == '0' ? '1' : '0';
        }
        return binToInt(bin);
    }
};