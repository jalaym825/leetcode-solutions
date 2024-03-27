// data types
using ll = long long;
using db = long double;
using str = string;
// vectors
#define tcT template <class T
#define tcTU tcT, class U
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
using vi = V<int>;
using vb = V<bool>;
using vl = V<ll>;
using vd = V<db>;
using vs = V<str>;
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rev(x) reverse(all(x))
#define pb push_back
// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)
// constants
const db PI = acos((db)-1);
const int MOD = 1000000007;

class Solution
{
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {
        vector<int> odd;
        vector<int> even;
        int n = nums.size();
        for (int i = 0; i < n; i += 2)
        {
            even.push_back(nums[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            odd.push_back(nums[i]);
        }
        sort(odd.rbegin(), odd.rend());
        sort(even.begin(), even.end());
        nums.clear();
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                nums.push_back(even[i / 2]);
            }
            else
            {
                nums.push_back(odd[i / 2]);
            }
        }
        return nums;
    }
};
