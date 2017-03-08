#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long total = 0;
    while(n > 0){
        total += n * n;
        n--;
    }
    printf("%lld",total);
    return 0;
}
