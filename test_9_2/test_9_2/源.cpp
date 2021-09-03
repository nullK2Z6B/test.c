#define _CRT_SECURE_NO_WARNINGS 1
//冒泡排序
//交换两个元素
//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2;
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//事先冒泡排序
//#include <stdio.h>
//int main()
//{
//	int a[10] = { 3,1,4,5,2 };
//	for (int i = 1; i <= 4; i++)
//	{
//		for (int j = 1; j <= 5 - i; j++)
//		{
//			int temp = 0;
//			if (a[j - 1] > a[j])
//			{
//				temp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}

//二维数组
//int a[5][6];
//double db[10][10];
//char  a[256][256];
//bool vis[1000][1000]

//#include <stdio.h>
//int main()
//{
//	int a[5][6] = { {3,1,2},{8,4},{},{1,2,3,4,5} };
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][3], b[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	int c[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			c[i][j] = a[i][j] + b[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组大小较大，需要将其定义在主函数外面
//#include <stdio.h>
//int a[1000000];
//int main()
//{
//	for (int i = 0; i < 1000000; i++)
//	{
//		a[i] = i;
//	}
//	return 0;
//}

//多维数组
//#include <stdio.h>
//int main()
//{
//	int a[3][3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			for (int k = 0; k < 3; k++)
//			{
//				scanf("%d", &a[i][j][k]);
//				a[i][j][k]++;
//			}
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			for (int k = 0; k < 3; k++)
//			{
//				printf("%d ", a[i][j][k]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//memset 函数→给数组中的每一个元素赋相同值
//memset(数组名， 值， sizeof（数组名）)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	memset(a, 0, sizeof(a));
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[10] = "hello!";
//	memset(arr1, 'x', 5);
//	printf("%s", arr1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[15] = { 'G', 'o', 'o', 'd', ' ',  's', 't', 'o','r','y','!' };
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%c", str1[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[15] = { 'G', 'o', 'o','d', ' ', 's', 't', 'o', 'r', 'y', '!' };
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%c", arr1[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[15] = "Good story!";
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%c", str1[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[10];
//	scanf("%s", str1);
//	printf("%s", str1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[5][5];
//	for (int i = 0; i < 3; i++ )
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			str[i][j] = getchar();
//		}
//		getchar();
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			putchar(str[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//gets输入，puts输出
//#include <stdio.h>
//int main()
//{
//	char str1[20];
//	char str2[5][10];
//	gets_s(str1);
//	for (int i = 0; i < 3; i++)
//	{
//		gets_s(str2[i]);
//	}
//	puts(str1);
//	for (int i = 0; i < 3; i++)
//	{
//		puts(str2[i]);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char arr1[20];
	char arr2[5][10];
	gets_s(arr1);
	for (int i = 0; i < 3; i++)
	{
		gets_s(arr2[i]);
	}
	puts(arr1);
	for (int i = 0; i < 3; i++)
	{
		puts(arr2[i]);
	}
	return 0;
}