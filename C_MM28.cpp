#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin>>n;
    n/=35;

    for(int i=1;i<=n;++i){
        if(i<n)
        cout<<i*35<<" ";
        else
        cout<<i*35<<"\n";
    }

	return 0;
}
