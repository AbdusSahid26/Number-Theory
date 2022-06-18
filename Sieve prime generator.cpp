#include<bits/stdc++.h>
using namespace std;
int a[99999999];
int main(){
    int n,N=99999999, sq=(int)sqrt(N);
    a[0]=1; a[1]=1;
    for(int i=4;i<N;i+=2) a[i]=1;
    for(int i=3;i<=sq;i+=2){
        if(a[i]==0){
            for(int j=i*i;j<=n;j += (i+i))
                a[j]=1;
        }
    }  ///  Time complexity is O(n log(log(n)))
    cin >> n;
    if(a[n]==0) cout << "Prime" << endl;
    else cout << "Not prime" << endl;
return 0;
}
