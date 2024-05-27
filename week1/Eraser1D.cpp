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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int m = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='B' && m==0){
                m = k-1;
                ans++;
            }
            else if(m>0){
                m--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}