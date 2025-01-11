#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    a+=b+c;

    if(a>9)
    printf("%d H\n",a);
    else
    printf("%d L\n",a);

	return 0;
}