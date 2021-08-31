#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)          //控制递归停止
//	{
//		print(n/10);   //使得递归不断靠近停止条件
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//求字符串长度（模拟strlen函数）
//使用strlen函数实现
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", strlen(arr));
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* str)  //传递的参数为数组时，实际上传递的为数组首元素的地址
//{
//	int count = 0;
//	while (*str != '\0') //*str表示对数组该元素的地址进行访问从而获得该元素原本的值
//	{
//		count++;
//		str++;    //这里的str++表示的是获取数组下一个元素的地址，并且用*str来接受
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d",my_strlen(arr));
//	return 0;
//}

int judge(int n, int c, int d, int* count)
{
	int i = 0;
	int a = 0;    //各位的数字
	int temp = 0; //暂存一下传上来的i（a到b之间的数）
	int sum = 0;
	temp = n;
	while (n != 0)
	{
		a = n % 10;
		sum += a * a * a;
		n = n / 10;
	}
	if (sum == temp)
	{
		return 1;
	}
	else
	{
		(*count)++;
		return 0;
	}
}
#include <stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int count = 0;
	while (scanf("%d %d",&a,&b) != EOF)
	{
		count = 0;
		for (i = a; i <= b; i++)//生成a到b之间的数
		{                      //判断是否为水仙花数
			
			if (judge(i, a, b,&count) == 1)
			{
				printf("%d ", i);
			}
		}
		if (count == b - a + 1)
		{
			printf("no\n");
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}