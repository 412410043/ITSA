#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a,sum=0;
    cin>>a;

    for(int i=1;i<=a;++i){
        if(i%3==0)
        sum+=i;
    }

    cout<<sum<<"\n";

	return 0;
}
