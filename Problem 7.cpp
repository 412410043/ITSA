#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int n,a,max=0;
    cin>>n;

    for(int i=0;i<n;++i){
        cin>>a;
        if(max<a)
        max=a;
    }

    cout<<max<<"\n";

	return 0;
}
