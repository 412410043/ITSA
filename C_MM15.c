#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x,y;
    scanf("%d %d",&x,&y);

    if(x<=100 && x>=0 && y>=0 && y<=100)
    printf("inside\n");
    else
    printf("outside\n");

	return 0;
}