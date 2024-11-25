#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define CNT 10 //카드의 수
int rand_max = 10;//생성되는 최고 값
int rand_min = 1;//생성되는 최저 값


void make_randnum(int[],int[],int,int);//난수를 생성하고 결과를 테이블에 기록하는 함수
void output_result(int[]);//생성된 난수를 순서대로 출력하는 함수

void make_randnum(int check[],int rand_order[],int index, int count)
{if (index<count)
	{int num;
	do{num=rand()%(rand_max-rand_min+1)+rand_min;} 
	while (check[num] == 1);//해당 테이블이 0이라면(=아직 기록되지 않았으면) 종료, 1이라면(=이미 이전에 만들어져 기록되었으면) 다시 난수 생성 
	//rand_order에 중복된 난수가 담기지 않음
	check[num] = 1;
	rand_order[index] = num;
	return make_randnum(check, rand_order, index + 1, count);}
else
	{return; }
}

void output_result(int rand_order[])
{for (int i=0;i<CNT;i++)
	{printf("%3d ",rand_order[i]); }
}



int main(void)
{int check[CNT + 1] = { 0 };//1~10까지 현재 어떤 수들이 생성이 되었는가를 기록하는 테이블 1은 생성 0은 미생성
int rand_order[CNT] = { 0 };//생성된 수들을 순서대로 담는 배열  


srand((unsigned int)time(NULL));
make_randnum(check, rand_order, 0, CNT);
output_result(rand_order);



}