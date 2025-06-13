#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin>>n;

    if(n==(n/100)*(n/100)*(n/100)+(n%100/10)*(n%100/10)*(n%100/10)+(n%10)*(n%10)*(n%10))
    cout<<"Yes\n";
    else
    cout<<"No\n";
    
	return 0;
}
