#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define CNT 10 //카드의 수

int main(void)
{int check[CNT + 1] = { 0 };//1~10까지 현재 어떤 수들이 생성이 되었는가를 기록하는 테이블 1은 생성 0은 미생성
int rand_order[CNT] = { 0 };//생성된 수들을 순서대로 담는 배열  
int rand_max = 10;//생성되는 최고 값
int rand_min = 1;//생성되는 최저 값

srand((unsigned int)time(NULL));


}