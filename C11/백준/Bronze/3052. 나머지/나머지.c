#include <stdio.h>

int main(){
    int remainder[43] ={0};
    int now, ans=0;
    for(int i=0; i<10; i++){
        scanf("%d", &now);
        remainder[now%42]=1;
    }
    for(int i=0; i<43; i++){
        if(remainder[i]==1) ans++;
    }
    printf("%d", ans);

    return 0;
}