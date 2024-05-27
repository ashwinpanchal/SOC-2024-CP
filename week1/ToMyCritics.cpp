#include<bits/stdc++.h>
using namespace std;

bool outputToNumbers(int a,int b,int c){
    if(a>b){
        swap(a,b);
    }
    if(a>c){
        return a+b>=10;
    }
    else{
        return b+c>=10;
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(outputToNumbers(a,b,c)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}