#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dp[n];
    for(int i=1;i<=n;i++){
        int p;
        p=i-1;
        dp[i]=dp[p]+(i-p)*1.0/i;

    }
    printf("%.4lf",dp[n]);
    return 0;
}
