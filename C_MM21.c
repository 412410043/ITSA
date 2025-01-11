#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    long long x,sum=1;
    scanf("%lld",&x);
    for(int i=2;i<=x;++i)
    sum*=i;

    printf("%lld\n",sum);
	return 0;
}