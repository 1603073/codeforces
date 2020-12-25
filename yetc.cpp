#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b,l,r,q,i,t,j,k;
cin >> t;
for(i=1;i<=t;i++){
    cin >> a >> b >> q;
    for(j=1;j<=q;j++){
        cin >> l >> r;
        if(((l%a)%b)!=((l%b)%a))
        cout << l;
        else if(((r%a)%b)!=((r%b)%a))
        cout << r;
        else
            cout << 0;
    }
    cout << "\n";
}
}
