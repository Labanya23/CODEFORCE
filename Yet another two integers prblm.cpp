#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);

       ll t;
       cin>>t;
       while(t--)
       {
           ll a,b;
           cin>>a>>b;
           if(b>a){
            swap(a,b);
           }
           if((a-b)%10!=0)
           {

               cout<<(a-b)/10+1<<endl;
           }
           else{
            cout<<(a-b)/10<<endl;
           }
       }
       return 0;
}
