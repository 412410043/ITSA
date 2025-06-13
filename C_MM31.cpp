#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int n,sum=0;
    cin>>n;

    for(int i=1;i<=n;++i){
        if(!(i%6) && i%12)
        sum+=i;
    }

    cout<<sum<<"\n";
    
	return 0;
}
