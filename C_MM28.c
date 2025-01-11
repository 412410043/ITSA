#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    n/=35;

    for(int i=1;i<=n;++i){
        if(i<n)
        printf("%d ",i*35);
        else
        printf("%d\n",i*35);
    }

	return 0;
}