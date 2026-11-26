#include <stdio.h>

int main(void) {
    int N, M, set_min=1000, single_min=1000;
    scanf("%d %d", &N, &M);
    for (int i=0; i<M; i++) {
        int set, single;
        scanf("%d %d", &set, &single);
        if (set_min > set) set_min = set;
        if (single_min > single) single_min = single;
    }
    if (single_min*6<set_min) set_min = single_min*6;
    int ans=(N/6)*set_min+(N%6)*single_min;
    if (ans>((N/6)+1)*set_min) ans=((N/6)+1)*set_min;
    printf("%d" ,ans);
    return 0;
}
