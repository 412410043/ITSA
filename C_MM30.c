#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,cnt=0;
    scanf("%d",&n);

    for(int i=2;i<n/2;++i){
        if(n%i==0){
            ++cnt;
            break;
        }
    }

    if(cnt)
    printf("NO\n");
    else
    printf("YES\n");
    
	return 0;
}