#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cin>>a;

    if(a>=100)
    a*=100*0.7f;
    else if(a>=30)
    a*=100*0.8f;
    else if(a>=10)
    a*=100*0.9f;
    else
    a*=100;

    cout<<a<<"\n";

	return 0;
}
