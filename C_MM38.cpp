#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a)
    cout<<("fit\n");
    else
    cout<<("unfit\n");
    
	return 0;
}
