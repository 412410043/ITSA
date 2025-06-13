#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int a,d[3]={0};
    cin>>a;

    while(a>=10){
        a-=10;
        ++d[0];
    }

    while(a>=5){
        a-=5;
        ++d[1];
    }

    while(a>=1){
        --a;
        ++d[2];
    }

    cout<<"NT10="<<d[0]<<"\nNT5="<<d[1]<<"\nNT1="<<d[2]<<"\n";

	return 0;
}
