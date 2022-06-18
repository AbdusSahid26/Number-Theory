/*

     _____________    _____________    _____________	          _____________    _____________
    (  ___________)  |  _________  )  (___________  )	         (___________  )  (  ___________)
    ( (		     | |         | )	          | )            	     ) )  ( (
    ( (___________   | |_________| )   ___________| )	          ___________) )  ( (___________
    (___________  )  |  ___________)  |  _________  )            (  ___________)  (  _________  )
                ) )  | |	      | |         | )  	         ( (              ( (         ) )
     ___________) )  | |___________   | |_________| )   ______   ( (___________   ( (_________) )
    (_____________)  |_____________)  |_____________)  (______)  (_____________)  (_____________)



    Name  : Abdus Sahid

    Topcoder handle : sea_26
    Codechef handle : sea_26

    Practice makes a man perfect.
    Don't lose faith.

*/

#pragma GCC optimize("03")
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;


template <typename T>
      using ordered_set = tree<T, null_type, less<T>,
          rb_tree_tag, tree_order_statistics_node_update>;


using ll = long long;
using ld = long double;

typedef pair<int, int> PII;
typedef pair<ll, int> PLI;
typedef pair<int, ll> PIL;
typedef pair<ll, ll> PLL;

typedef vector<PII> VPII;
typedef vector<PLL> VPLL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<char> VC;
typedef vector<ll> VL;
typedef vector<VL> VVL;

typedef map<int, int> MII;
typedef map<ll, ll> MLL;
typedef map<PII, int> MPIII;
typedef map<string, int> MSI;

typedef ordered_set<int> OSI;
typedef ordered_set<ll> OSL;
typedef unordered_map<ll,ll> UOML;

typedef multiset<PLI> MSPLI;
typedef priority_queue<int> PQI;

const int M = 1e9 + 7;
const ll FM = 998244353;
const ld eps = 1e-9;
const ld PI = acos(-1.0);
VL PN = {2,3,5,7,11,13,17,19,23};
// const double pi = atan2(0, -1);
// const double PI = 4 * atan(1);
// const double pi = 2*cos(0.0);

const int iinf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3f;

#define mp make_pair
#define eb emplace_back
#define pf push_front
#define pb push_back
#define ppb pop_back()
#define ep emplace
#define fbo(ind) find_by_order(ind);
#define ook(val) order_of_key(val);
#define f first
#define s second
#define sz size()

#define bp(n) __builtin_popcount(n)
#define bclz(n) __builtin_clzll(n)
#define bctz(n) __builtin_ctzll(n)
#define bip(n) __builtin_parity(n)

#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define rvs(v) sort(all(v),greater<int>())
#define mnv(v) *min_element(all(v))
#define mxv(v) *max_element(all(v))
#define acm(v, ini) accumulate(all(v),ini)
#define uni(v) vsort(v),(v).erase(unique(all(v)), (v).end())
#define smp(container, element) (container.find(element) != container.end())
#define vp(container, element) (find(all(container),element) != container.end())

#define ub(v,k) upper_bound(all(v), k) - v.begin()
#define lb(v,k) lower_bound(all(v), k) - v.begin()
#define msz(a) memset(a, 0, sizeof(a))
#define msm(a) memset(a, 0xff, sizeof(a))
#define fpre(n) fixed << setprecision(n)
#define watch(x) cerr << (#x) << " is " << (x) << endl
#define sea template< typename T
#define tc int tt; cin >> tt; for(int t=1; t<=tt; t++)

#define rep(i,n) for(__typeof(n) i=0; i<n; i++)
#define per(i,n) for(__typeof(n) i=n-1; i>=0; i--)
#define lrep(i,p,q) for(__typeof(q) i=p; i<=q; i++)
#define perl(i,p,q) for(__typeof(p) i=p; i>=q; i--)
#define IT(it,x) for(__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define RIT(it,x) for(__typeof((x).rbegin()) it = (x).rbegin(); it != (x).rend(); it++)

sea > inline bool checkbit(T n, T pos) {return n & (1 << pos);}
sea > inline int setbit(T n, T pos) {return n | (1 << pos);}
sea > inline int resetbit(T n, T pos ) {return n & ~(1 << pos);}
sea > inline int flipbit(T n, T pos) {return n ^ (1 << pos);}

sea > inline T MAX(T a, T b){ return a ^ ((a ^ b) & -(a < b)); }
sea > inline T MIN(T a, T b){ return b ^ ((a ^ b) & -(a < b)); }
sea > void SWAP(T &a, T &b){ a = ((a) ^= (b)),  b = ((b) ^= (a)),  a = ((a) ^= (b)); }
sea > inline T sqr(T x){ return (x) * (x); }
sea > inline bool isPoT(T x){ return (x != 0 && (x&(x - 1)) == 0); }

sea > bool chkmax(T &a, const T b){ if(a < b){a = b; return true;} else return false; }
sea > bool chkmin(T &a, const T b){ if(a > b){a = b; return true;} else return false; }

sea > inline T gcd(T a, T b){ while (b) b ^= a ^= b ^= a %= b; return a; }
sea > T exgcd(T a, T b, T& x, T& y){ if(!b){ x = 1; y = 0;return a;} else{ T g = exgcd(b,a%b,y,x); y -= (a/b)*x; return g;}}
sea > inline T lcm(T a, T b){ return (a / gcd(a,b)) * b; }

sea > inline T mod(T a, T b){ return a >= b ? a % b : a; }
sea > T binpow(T n, T p){ T res = 1; while(p > 0){ if(p & 1) res *= n; n *= n; p >>= 1; } return res;}   /// n^p
sea > T bigmod(T n, T p, T M){ n %= M; T res = 1; while(p > 0){ if(p & 1)res = ((res%M)*(n%M))%M; n = ((n%M)*(n%M))%M; p >>= 1; } return res;}  /// (n^p) % M
sea > T modInv(T a, T m){return bigmod(a, m-2, m);}
sea > T mulmod(T a, T b, T M){ T x = 0, y = a % M; while(b > 0){ if(b&1) x = (x + y) % M; } y = (y << 1) % M; b >>= 1; }  /// (a*b) % M
bool mrpt(const ll n){ if(n<2) return false; if(n%2==0) return n==2; ll s = 0, d = n-1; while(d&1) s++, d/=2;for(auto a: PN){
        if(a > n-2) break; ll x = bigmod(a,d,n); if(x == 1 || x == n-1) continue;
        rep(i,s-1){ x = mulmod(x,x,n); if(x==1) return false; if(x==n-1) goto next_it; } return false; next_it:; }
return true;
}
sea > inline T BinCof(T n, T k){ T res = 1; if(k > n-k) k = n-k; for(T i=0 ;i<k ;i++){ res *= (n-i); res /= (i+1);} return res; }

static inline bool is_digit(char c){ return static_cast<unsigned char>(c - '0') < 10; }
static inline bool is_upper(char c){ return static_cast<unsigned char>(c - 'A') < 26; }
static inline bool is_lower(char c){ return static_cast<unsigned char>(c - 'a') < 26; }

sea > istream &operator>>(istream &is, vector<T> &vec){ for(auto &v : vec) is >> v; return is; }


VVL multiplication(VVL a, VVL b){
    VVL res = a;
    ll ln = res.sz;
    rep(i,ln){
        rep(j,ln){
            res[i][j] = 0;
            rep(k,ln){
                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % M;
            }
        }
    }
    return res;
}

//VVL power(VVL a, ll b){
//    if(b == 1) return a;   /// Bit fast but Memory enefficient
//    if(b & 1) return multiplication(a, power(a, b-1));
//    return power(multiplication(a,a), b/2);
//}


/*

const ll mod = 1e9 + 7;

void add(ll& a, ll b)
{
    a += b;
    if (a >= mod) {
        a -= mod;
    }
}

void mul(ll& a, ll b)
{
    a *= b;
    if (a >= mod) {
        a %= mod;
    }
}

typedef vector<vector<ll> > matrix;

matrix operator*(const matrix& a, const matrix& b)
{
    int n = sz(a);
    matrix c(n, vector<ll>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                ll val = a[i][k];
                mul(val, b[k][j]);
                add(c[i][j], val);
            }
        }
    }
    return c;
}

matrix binpow(matrix a, ll n)
{
    int s = sz(a);
    matrix ans(s, vector<ll>(s));
    for (int i = 0; i < s; ++i) {
        ans[i][i] = 1;
    }
    while (n) {
        if (n & 1) {
            ans = ans * a;
        }
        n >>= 1;
        if (n) {
            a = a * a;
        }
    }
    return ans;
}

*/

VVL power(VVL a, ll b){
    if(b == 1) return a;   /// Bit slow but Memory Efficient
    if(b & 1) return multiplication(a, power(a, b-1));
    VVL X = power(a, b/2);
    return multiplication(X, X);
}

const int N = 5e4+10;
int freq[N];
int n, b, k, x;

void input(void){
    cin >> n >> b >> k >> x;
}


class WetSharksAndBlocks{
public:
    void solve(istream& cin, ostream& cout){
        input();
        rep(i,n){
            int p;
            cin >> p;
            freq[p]++;
        }
        VVL v;
        v.resize(x);
        rep(i,v.sz){
            v[i].resize(x);
            rep(j,v[i].sz)
                v[i][j] = 0;
        }
        rep(i,x)
            rep(j,10)
                v[i][(i*10 + j) % x] += freq[j];

        v = power(v, b);
        cout << v[0][k] << endl;
    }
};


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifdef LOCAL_DEFINE
        auto start_time = clock();
    #endif // LOCAL_DEFINE

    #ifdef LOCAL_DEFINE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif // LOCAL_DEFINE

    WetSharksAndBlocks Problem;
    std::istream& in(std::cin);
    std::ostream& out(std::cout);
    Problem.solve(in, out);

    #ifdef LOCAL_DEFINE
        auto end_time = clock();
        cerr << "Time Elapsed: " << fpre(3) << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC  << " Sec"<< endl;
    #endif // LOCAL_DEFINE

    return 0;
}
