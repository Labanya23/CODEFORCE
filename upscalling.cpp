#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                if((i/2)%2+(j/2)%2==1){
                    cout<<".";

                }
                    else{
                        cout<<"#";

                        //cout<<endl;
                    }
                   // cout<<endl;

            }
            cout<<endl;
        }
    }
    return 0;
}

