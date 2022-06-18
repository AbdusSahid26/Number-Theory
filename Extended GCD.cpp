#include<bits/stdc++.h>
using namespace std;

int64_t ex_Euclid(int64_t a,int64_t b,int64_t &X,int64_t &Y){

    if(b==0){
        X=1;
        Y=0;
        return a;
    }
    int64_t xx,yy;
    int64_t gcd=ex_Euclid(b,a%b,xx,yy);
    X=yy;
    Y=xx-yy*(a/b);

return gcd;
}
int main(){
    int64_t a,b,x,y;
    cin >> a >> b;
    if(b>a)
        swap(a,b);
    int64_t ex_gcd=ex_Euclid(a,b,x,y);
    cout << "x = " << x << " " << "y = " << y <<  " " << "gcd = " << ex_gcd << endl;

return 0;
}
