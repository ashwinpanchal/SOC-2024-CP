#include<bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int t;
    cin>>t;
    while(t--){
        long long y,x;
        cin>>y>>x;
        if(y>x){
            long long number;
            if(y%2==0){
                number = y*y;
                cout<<number-x+1<<endl;
            }
            else{
                number = (y-1)*(y-1);
                cout<<number+x<<endl;
            }
        }
        else{
            long long number;
            if(x%2==0){
                number = (x-1)*(x-1);
                cout<<number+y<<endl;
            }
            else{
                number = x*x;
                cout<<number-y+1<<endl;
            }
        }
    }
    return 0;
}