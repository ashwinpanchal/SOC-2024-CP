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
        int n;
        cin>>n;
        int ans=0;
        while(n--){
            int a,b;
            cin>>a>>b;
            if(a-b>0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}