#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>b){
        a=a^b;
        b=a^b;
        a=a^b;
    }

    printf("%d\n",(a+b)*(b-a+1)/2);

	return 0;
}