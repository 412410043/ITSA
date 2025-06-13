#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int n,cnt=0;
    cin>>n;

    for(int i=2;i<n/2;++i){
        if(n%i==0){
            ++cnt;
            break;
        }
    }

    if(cnt)
    cout<<"NO\n";
    else
    cout<<"YES\n";
    
	return 0;
}
