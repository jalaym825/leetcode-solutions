const int mod = 1e9+7;
#define ll long long
class Solution {
private:
    ll mult(ll x, ll y) {
        x %= mod;
        y %= mod;
        return (x * y) % mod;
    }
    ll power(ll x, ll y){
        if (y == 0) return 1;
        if (y & 1) return mult(x, power(x, y - 1));
        return power(mult(x, x), y / 2);
    }
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {

        int n = nums.size();
        if(mul == 1)
            return nums;

        multiset<pair<ll, ll>> st;

        for(int i = 0; i < nums.size(); i++) {
            st.insert({(ll)nums[i], i});
        }

        int c = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        ll maxiIndex = max_element(nums.begin(), nums.end()) - nums.begin();

        while(c < k) {
            c++;
            auto top = *st.begin();;
            st.erase(st.begin());

            ll val = top.first * mul;
            st.insert({val, top.second});

            if(top.second == maxiIndex) break;
        }

        k -= c;

        int t = k / n;
        vector<pair<ll, ll>> temp;

        for(int i = 0; i < n; i++) {
            auto top = *st.begin();
            st.erase(st.begin());

            ll val = top.first;
            ll idx = top.second;
            
            ll multipliedValue = mult(val, power(mul, t));
            temp.push_back({multipliedValue, idx});
        }

        for(int i = 0; i < k % n; i++) {
            temp[i].first = mult(temp[i].first, mul);
        }

        vector<int> ans(n);

        for(int i = 0; i < n; i++) {
            ans[temp[i].second] = int(temp[i].first % mod);
        }
        return ans;
    }
};