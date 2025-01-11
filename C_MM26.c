#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,sum=0;
    scanf("%d",&a);

    for(int i=1;i<=a;++i)
    printf("%d*%d=%d\n",i,i,i*i);

	return 0;
}