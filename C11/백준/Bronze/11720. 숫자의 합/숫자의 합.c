#include <stdio.h>

int main(){
    int N, ans=0;
    scanf("%d", &N);
    char num[N];
    scanf("%s", num);
    for(int i=0; i<N; i++){
        ans+=num[i]-'0';
    }
    printf("%d", ans);
    return 0;
}