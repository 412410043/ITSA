#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    long long x,sum=1;
    cin>>x;
    for(int i=2;i<=x;++i)
    sum*=i;

    cout<<sum<<"\n";
	return 0;
}
