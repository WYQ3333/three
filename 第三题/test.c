//������
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

int bulbSwitch(int n)
{
	if (n <= 0)
	{
		return 0;//�Ƶĸ���Ϊ������Ϊ0����0
	}
	int *array = (int *)malloc(sizeof(int)*(n + 1));
	int count = 0;//�����������м�յ������
	array[0] = 0;//Ϊ�˽�������±���Ƶĵ�i���Ӧ
	//��һ��
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		array[i] = 1;//����ȫ��
	}
	//��i��
	for (i = 2; i <= n; i++)
	{
		int j = 0;
		j = j + i;
		while (j <= n)
		{
			if (j <= n&&array[j] == 0)
			{
				array[j] = 1;
			}
			else if (j <= n&&array[j] == 1)
			{
				array[j] = 0;
			}
			j = j + i;
		}
	}
	for (i = 0; i <= n; i++)
	{
		if (array[i] == 1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n = 3;
	int ret = bulbSwitch(n);
	printf("�Ƶĸ���Ϊ%d", ret);
	system("pause");
	return 0;
}