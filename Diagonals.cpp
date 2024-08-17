/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k;
        cin>>n>>k;
        if(k==0 || n>k){
            cout<<"0"<<endl;
        }
        else if(n==k){
            cout<<n/k<<endl;
        }
        else{
            cout<<(k/n)+1<<endl;
        }
    }
}
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        ll n,k;
        cin>>n>>k;
        ll v=1;
        ll d=n-1;
        if(k==0) v=0;
        k-=n;
        while(k>0){
            k-=d;
            v++;
        }
        d--;

     cout<<v<<endl;
     }
     return 0;

}
