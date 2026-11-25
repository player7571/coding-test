#include <stdio.h>

int main(){
    char color[4] ={0};
    int num[10] ={0};
    int ans=0;
    for(int i=0; i<5; i++){
        char a;
        int b;
        scanf(" %c %d",&a, &b);
        switch(a){
            case 'R': color[0]++; break;
            case 'B': color[1]++; break;
            case 'Y': color[2]++; break;
            case 'G': color[3]++; break;
        }
        num[b]++;
    }
    int one=0, three=0, four=0, straight=0; 
    //페어0개 탑
    //페어1개 원페어
    //페어2개 투페어
    //three 하나 트리플
    //페어3개 three한개 풀하우스
    //페어3개 포카드
    //five는 파이브
    int same_color=0;
    int high=0, one_high=0, three_high=0, four_high=0, one_high_2=0;
    for(int i=1; i<10; i++){
        if(i>4){
            if(num[i-4]&&num[i-3]&&num[i-2]&&num[i-1]&&num[i]) straight=1;
        }
        if(num[i]==2) {
            one++;
            if(one_high==0){
                one_high=i;
            }
            else one_high_2=i;
        }
        if(num[i]==3) {
            three++;
            three_high=i;
        }
        if(num[i]==4) {
            four++;
            four_high=i;
        }
        if(num[i]!=0&&i>high) high=i;
    }
    for(int i=0; i<4; i++){
        if(color[i]==5) {
            same_color=1;
            break;
        } 
    }
    if(straight&&same_color) ans=high+900;
    else if(four_high) ans=800+four_high;
    else if (three&&one==1) ans=700+10*three_high+one_high;
    else if (same_color) ans=600+high;
    else if (straight) ans=500+high;
    else if (three) ans=400+three_high;
    else if (one==2) ans=300+one_high_2*10+one_high;
    else if (one==1) ans=200+one_high;
    else ans=100+high;
    printf("%d", ans);
    
    return 0;
}