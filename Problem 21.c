#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,b,c,x,y;
    scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);

    if(a*x+b*y+c==0)
    printf("YES\n");
    else
    printf("NO\n");

	return 0;
}