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
    Don't give up until the last second.

    Topcoder handle : sea_26
    Codechef handle : sea_26

    Practice makes a man perfect.

*/

#pragma GCC optimize("03")
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;


template <int MOD>
class ModInt{
public:

    int Value;
    constexpr ModInt() : Value(0) {}
    constexpr ModInt &Setvalue(long long x){
        Value = (x >= MOD ? x - MOD : x);
        return *this;
    }
    constexpr ModInt(long long x){
        Setvalue(x % MOD + MOD);
    }

    constexpr ModInt operator+(const ModInt &x) const{
        return ModInt().Setvalue((long long)Value + x.Value);
    }
    constexpr ModInt operator-(const ModInt &x) const{
        return ModInt().Setvalue((long long)Value - x.Value + MOD);
    }
    constexpr ModInt operator*(const ModInt &x) const{
        return ModInt().Setvalue((long long)Value * x.Value % MOD);
    }
    constexpr ModInt operator/(const ModInt &x) const{
        return ModInt().Setvalue((long long)Value * x.Inv() % MOD);
    }

    constexpr ModInt &operator+=(const ModInt &x){
        return *this = *this + x;
    }
    constexpr ModInt &operator-=(const ModInt &x){
        return *this = *this - x;
    }
    constexpr ModInt &operator*=(const ModInt &x){
        return *this = *this * x;
    }
    constexpr ModInt &operator/=(const ModInt &x){
        return *this = *this / x;
    }

    friend constexpr ModInt operator+(long long a, const ModInt &x){
        return ModInt().Setvalue(a % MOD + x.Value);
    }
    friend constexpr ModInt operator-(long long a, const ModInt &x){
        return ModInt().Setvalue(a % MOD - x.Value + MOD);
    }
    friend constexpr ModInt operator*(long long a, const ModInt &x){
        return ModInt().Setvalue(a % MOD * x.Value % MOD);
    }
    friend constexpr ModInt operator/(long long a, const ModInt &x){
        return ModInt().Setvalue(a % MOD * x.Inv() % MOD);
    }

    friend std::ostream &operator<<(std::ostream &os, const ModInt &x){
        os << x.Value;
        return os;
    }

    constexpr long long Totient(long long n){
        long long Res = n;
        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0){
                while(n % i == 0){
                    n /= i;
                }
                Res -= Res / i;
            }
        }
        if(n > 1) Res -= Res / n;
        return Res;
    }

    constexpr long long Power(long long n) const {
        long long Res = 1;
        long long Cur = this->Value;
        while(n){
            if(n & 1){
                Res *= Cur;
                Res %= MOD;
            }
            Cur *= Cur;
            Cur %= MOD;
            n >>= 1;
        }
        return Res;
    }

    constexpr long long Inv() const {
         return this->Power(MOD - 2);
    }

    inline ModInt Factorial() const {
        vector<ModInt> Fact;
        int Left = Fact.size();
        if(Left > this->Value) return Fact[this->Value];

        Fact.resize(this->Value + 1);
        for(int i = Left; i <= this->Value; i++){
            if(i == 0) Fact[i] = ModInt(1);
            else Fact[i] = Fact[i - 1] * ModInt(i);
        }
        return Fact[this->Value];
    }

    ModInt DoubleFactorial() const {
        long long k = (this->Value + 1) >> 1;
        if(this->Value & 1) return ModInt(k * 2).Factorial() / ModInt(2).Power(k) / ModInt(k).Factorial();
        else return ModInt(k).Factorial() * ModInt(2).Power(k);
    }

    ModInt nCr(const ModInt &r) const {
        if(this->Value < r.Value) return ModInt(0);
        return this->Factorial() / ((*this - r).Factorial() * r.Factorial());
    }

    ModInt nPr(const ModInt &r) const {
        if(this->Value < r.Value) return ModInt(0);
		return this->Factorial() / (*this - r).Factorial();
	}

    /// nHr = nCr(n + r - 1, r)
};

using Mint = ModInt<1000000007>;


void ReadInput(void){
    //read();
}


///  https://codeforces.com/contest/1444/submission/97319999



class TwoArrays{
public:
    void Solve(istream& cin, ostream& cout){
        ReadInput();
        int n, m;
        cin >> n >> m;
        cout << Mint(n).nCr(m) << endl;
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

    TwoArrays Problem;
    std::istream& in(std::cin);
    std::ostream& out(std::cout);
    Problem.Solve(in, out);

    #ifdef LOCAL_DEFINE
        auto end_time = clock();
        cerr << "\nTime Elapsed: " << fpre(3) << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC  << " Sec"<< endl;
    #endif // LOCAL_DEFINE

    return 0;
}
