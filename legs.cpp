#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
    /*
        if(n%4==0){
            cout<<n/4<<endl;
        }
        else if(n%4!=0){
            cout<<n%4<<endl;
        }
        else if(n%2==0){
                cout<<n/2<<endl;
        }

        int a=4+2;
        if(n%6==0){
            cout<<"2"<<endl;
        }
        else if(n>6){
            cout<<n%6<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
        */
        int a=n/4;
        n=n%4;
        a+=n/2;
        cout<<a<<endl;
    }
    return 0;
}
