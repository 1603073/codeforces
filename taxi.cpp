#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int i,n,s[10000],sum=0;
double j;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&s[i]);
    sum=sum+s[i];
    }
if(n==1)
    printf("%d",n);
if(sum<4 || sum==4)
    printf("1");
else
    printf("%0.1lf",ceil(sum*1.0/n));
}
