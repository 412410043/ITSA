#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,d[3]={0};
    scanf("%d",&a);

    while(a>=86400){
        a-=86400;
        ++d[0];
    }

    while(a>=3600){
        a-=3600;
        ++d[1];
    }

    while(a>=60){
        a-=60;
        ++d[2];
    }

    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",d[0],d[1],d[2],a);

	return 0;
}