#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int MOD = 1000000007;

using ll = long long;
using db = long double;
using str = string;

#define tcT template <class T
#define tcTU tcT, class U
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
using vi = V<int>;
using vb = V<bool>;
using vl = V<ll>;
using vd = V<db>;
using vs = V<str>;

// vectors
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rev(x) reverse(all(x))
#define pb push_back
#define rsz resize
#define ins insert
#define eb emplace_back
#define ft front
#define bk back
#define ff first
#define ss second
#define arrout(v) \
    F0R(i, v.size()) { cout << v[i] << " "; }
#define vin(v, end)        \
    rep(end)               \
    {                      \
        int temp;          \
        cin >> temp;       \
        v.push_back(temp); \
    }
#define vout(v) \
    each(it, v) { cout << it << " "; }
#define arrin(arr, end) \
    F0R(i, end) { cin >> arr[i] }
#define mpout(mp)        \
    each(it, mp)         \
    {                    \
        cout << it.ff(); \
        cout << ": ";    \
        cout << it.ss(); \
    }

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

const db PI = acos((db)-1);
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}; // for every grid problem!!

template <typename... T>
void read(T &...args)
{
    ((cin >> args), ...);
}

template <typename... T>
void write(T &&...args)
{ // rvalue reference is new to C++
    ((cout << args << " "), ...);
}

pair<int, int> gcdlcm(int a, int b)
{
    int tempa = a;
    int tempb = b;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return make_pair(a, (tempa * tempb) / a);
}

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

class Solution
{
public:
    int countPrefixSuffixPairs(vector<string> &words)
    {
        int ans = 0;
        F0R(i, words.size())
        {
            FOR(j, i + 1, words.size())
            {
                string str1 = words[i];
                string str2 = words[j];
                if (str1.size() > str2.size())
                {
                    continue;
                }
                else if (str1.size() == str2.size() && str1 == str2)
                {
                    ans++;
                }
                else
                {
                    int x = str2.size() - 1;
                    int y = str1.size() - 1;
                    bool flag = true;
                    while (x >= 0 && y >= 0)
                    {
                        if (str1[y] != str2[x])
                        {
                            flag = false;
                            break;
                        }
                        x--;
                        y--;
                    }
                    if (flag && y == -1 && str2.find(str1) == 0)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
