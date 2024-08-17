#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--)
   {

       int n;
       cin>>n;
       if(n%2==1){
        cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
           for(int i=1;i<=n/2;i++){
            cout<<"AAB";
           }
           cout<<endl;
       }
   }
   return 0;

}
