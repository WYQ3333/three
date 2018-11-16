//第三题
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

int bulbSwitch(int n)
{
	if (n <= 0)
	{
		return 0;//灯的个数为负数或为0返回0
	}
	int *array = (int *)malloc(sizeof(int)*(n + 1));
	int count = 0;//用来计数还有几盏灯亮着
	array[0] = 0;//为了将数组的下标与灯的第i相对应
	//第一轮
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		array[i] = 1;//将灯全打开
	}
	//第i轮
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
	printf("灯的个数为%d", ret);
	system("pause");
	return 0;
}