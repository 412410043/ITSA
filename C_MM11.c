#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,d[3]={0};
    scanf("%d",&a);

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

    printf("NT10=%d\nNT5=%d\nNT1=%d\n",d[0],d[1],d[2]);

	return 0;
}