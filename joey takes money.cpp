#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
            ll sum=1;
            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
                sum*=a[i];
            }
            sum+=n-1;
            cout<<sum*2022<<endl;

    }
    return 0;
}
