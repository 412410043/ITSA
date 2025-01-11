#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,sum=0;
    scanf("%d",&n);

    for(int i=1;i<=n;++i){
        if(!(i%6) && i%12)
        sum+=i;
    }

    printf("%d\n",sum);
    
	return 0;
}