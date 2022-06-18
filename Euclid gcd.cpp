#include<bits/stdc++.h>
using namespace std;

int EuclidGCD(int a,int b){
    return b==0?a:EuclidGCD(b,a%b);
}
int main(){

    int a,b;
    cin >> a >> b;
    cout << EuclidGCD(a,b) << endl;

return 0;
}
