#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//思路1 main函数写出来
//2创建数组
//3循环输入
//4循环求和并计算平均值
//5输出
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for(i = 0;i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//求和
		int sum = 0;
		for (i = 0; i < 10; i++)
		{

		sum = sum + arr[i];
		}
	//求平均值
	int avg = sum / 10;
	printf("avg = %d\n", avg);
	return 0;
}