#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int a,b,c;
    cin>>a>>b>>c;

    a+=b+c;

    if(a>9)
    cout<<a<<" H\n";
    else
    cout<<a<<" L\n";

	return 0;
}
