#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//数组
	int arr[10] = { 0 };
	//输入
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//找最大值
	int max = arr[0];//假设数组的第一个元素就是最大值
	//拿剩下的元素和max比较如果得到了比max大的值就更新max
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	//输出
	printf("max =%d\n", max);
	return 0;
}
//运行快捷建ctrl+F5