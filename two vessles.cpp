#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,k,n;
        cin>>a>>b>>c;
        k=(a+b)/2;
        if((a+b)%2!=0)
            k++;
        n=(k-(min(a,b)));
        if(n%c==0)
            n/=c;
        else{
            n/=c;
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
