#include<stdio.h>

void timerev(int time){
    if (time < 0) {
        time += 24 * 60; // 如果时间是负的，加上一天的时间
    }
    int hour = time / 60;
    int min = time % 60;
    printf("%02d:%02d\n", hour, min); // 简化的时间格式化
}

int main(){
    float s, v;
    scanf("%f %f", &s, &v);
    int time = (int)(s / v + 0.999999); // 向上取整
    int totalTime = time + 10; // 加上额外的10分钟
    int departureTime = 480 - totalTime; // 8:00是480分钟

    timerev(departureTime);

    return 0;
}