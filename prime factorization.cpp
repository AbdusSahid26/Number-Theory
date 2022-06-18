#include<bits/stdc++.h>
using namespace std;


template<typename T> vector<pair<T, int>> primeFactorization(T n){
    vector<pair<T, int>> factor;
    for(T i=2; i*i<=n; i++){
        if(n % i != 0) continue;
        int exponent = 0;
        while(n % i == 0){
            n /= i;
            exponent++;
        }
        factor.emplace_back(i, exponent);
    }
    if(n > 1) factor.emplace_back(n, 1);
    return factor;
}

/// https://codeforces.com/contest/1454/submission/99778154

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        auto pf = primeFactorization(n);

        int maxiFreq = 0;
        long long val = -1;
        for(auto x: pf){
            if(x.second > maxiFreq){
                maxiFreq = x.second;
                val = x.first;
            }
        }
        long long rem = n;
        while(rem % val == 0){
            rem /= val;
        }
        cout << maxiFreq << '\n';
        for(int i=0; i<maxiFreq-1; i++){
            cout << val << ' ';
        }
        cout << val * rem << '\n';
    }


return 0;
}
