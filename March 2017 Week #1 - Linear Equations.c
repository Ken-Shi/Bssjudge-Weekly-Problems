#include <stdio.h>
int main(){
    double m,b;
    scanf("%lf %lf",&m,&b);
    if(m == 0) printf("No Intercept");
    else printf("%lf",-b / m);
    return 0;
}
