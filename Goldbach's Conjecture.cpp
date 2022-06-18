#include<bits/stdc++.h>
using namespace std;

int gold_con(int n){
    int res=0;
    int primes[32768];
    for(int i=2;i<=n/2;i++){
        if(primes[i] && primes[n-i])
            res++;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    cout << gold_con(n) << endl;

return 0;
}
