#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//˼·1 main����д����
//2��������
//3ѭ������
//4ѭ����Ͳ�����ƽ��ֵ
//5���
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for(i = 0;i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//���
		int sum = 0;
		for (i = 0; i < 10; i++)
		{

		sum = sum + arr[i];
		}
	//��ƽ��ֵ
	int avg = sum / 10;
	printf("avg = %d\n", avg);
	return 0;
}