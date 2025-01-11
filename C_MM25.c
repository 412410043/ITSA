#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,sum=0;
    scanf("%d",&a);

    for(int i=1;i<=a;++i){
        if(i%3==0)
        sum+=i;
    }

    printf("%d\n",sum);

	return 0;
}