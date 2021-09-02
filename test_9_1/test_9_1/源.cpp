#define _CRT_SECURE_NO_WARNINGS 1

//if语句
//#include <stdio.h>
//int main()
//{
//	int n = 5;
//	if (n > 3)
//	{
//		n = 9;
//		printf("%d\n", n);
//	}
//	return 0;
//}
// 
//#include <stdio.h>
//int main()
//{
//	int n = 2;
//	if (n > 3)
//	{
//		n = 9;
//		printf("%d\n", n);
//	}
//	else
//	{
//		printf("%d\n", n);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 2;
//	if (n > 3)
//	{
//		n = 9;
//		printf("%d\n", n);
//	}
//	else if (n > 2)
//	{
//		printf("%d\n", n + 1);
//	}
//	else
//	{
//		printf("%d\n", n);
//	}
//	return 0;
//}

//!=0 可以省略
//#include <stdio.h>
//int main()
//{
//	int n = 0, m = 5;
//	if (n)
//	{
//		printf("n is not zero!\n");
//	}
//	else
//	{
//		printf("n is zero!\n");
//	}
//	if (m)
//	{
//		printf("m is not zero!\n");
//	}
//	else
//	{
//		printf("m is zero!\n");
//	}
//	return 0;
//}

//==0可以省略，但要在表达式前面添加!
//#include <stdio.h>
//int main()
//{
//	int n = 0, m = 5;
//	if (!n)
//	{
//		printf("n is zero!\n");
//	}
//	else
//	{
//		printf("n is not zero!\n");
//	}
//	if (!m)
//	{
//		printf("m is zero!\n");
//	}
//	else
//	{
//		printf("m is not zero!\n");
//	}
//
//	return 0;
//}

//if语句的嵌套
//#include <stdio.h>
//int main()
//{
//	int n = 3, m = 5;
//	if (n < 5)
//	{
//		if (m < 5)
//		{
//			printf("%d", m + n);
//		}
//		else
//		{
//			printf("%d", m - n);
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//switch 语句
//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2;
//	switch (a + b)
//	{
//		case 2:
//			printf("%d\n", a);
//			break;
//		case 3:
//			printf("%d\n", b);
//			break;
//		case 4:
//			printf("%d\n", a + b);
//			break;
//		default :
//			printf("sad story\n");
//			break;
//	}
//	return 0;
//}

//while循环
//#include <stdio.h>
//int main()
//{
//	int n = 1, sum = 0;
//	while (n <= 100)
//	{
//		sum = sum + n;
//		n++;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 12345, count = 0;
//	while (n)
//	{
//		count = count + n % 10;
//		n /= 10;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 1, sum = 0;
//	do
//	{
//		sum = sum + n;
//		n++;
//	}
//	while (n <= 100);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		printf("1");
//		n--;
//	}
//	return 0;
//}

//for循环
//#include <stdio.h>
//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum = sum + i;
//		if (sum >= 2000)
//		{
//			break;
//		}
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 5; i++)
//	{
//		if (i % 2 == 1) continue;
//		sum = sum + i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//数组
//int a[10];
//double db[2333];
//char str[100000];
//bool HashTable[1000000];

//#include <stdio.h>
//int main()
//{
//	int a[10] = { 5, 3, 2, 6, 8, 4 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10];
//	scanf("%d", &a[0]);
//	for (int i = 1; i < 10; i++)
//	{
//		a[i] = 2 * a[i - 1];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10];
//	scanf("%d", &a[0]);
//	for (int i = 1; i < 10; i++)
//	{
//		a[i] = 2 * a[i - 1];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}

//冒泡排序
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

 