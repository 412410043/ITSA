#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    double n;
    cin>>n;
    n*=n*10;
    n=round(n);
    n/=10;

    cout<<fixed<<setprecision(1)<<n<<"\n";
    
	return 0;
}
