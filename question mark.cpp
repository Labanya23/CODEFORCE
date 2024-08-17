#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a=0,b=0,c=0,d=0;
        cin>>n;
        string s;
        for(int i=1;i<=n*4;i++){
                cin>>s;
           if(s[i]=='A') {
            a++;
           }
           else if(s[i]=='B'){
            b++;
           }
           else if(s[i]=='C'){
            c++;
           }
           else if(s[i]=='D'){
            d++;
           }
        }
        cout<<min(a,n)+min(b,n)+min(c,n)+min(d,n)<<endl;
    }
    return 0;
}
