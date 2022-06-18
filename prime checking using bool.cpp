#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
     if(n<2)
        return false;
     for(int i=2;i<=(int)sqrt(n);i++){
      // for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
     }                       /// time complexity O(sqrt(n))
    return true;
}

int main(){
    int n;
    cin >> n;
    cout << isprime(n) << endl;
return 0;
}
