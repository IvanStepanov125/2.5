#include <stdio.h>
#include <math.h>

int main(){

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int max_s, sr_s, min_s;
    max_s = max(x, max(y, z));
    min_s = min(x, min(y, z));
    sr_s = x + y + z - max_s - min_s;
    printf("%d %d %d",max_s, sr_s, min_s);
    
    return 0;
}