#define _CRT_SECURE_NO_WARNINGS 1
//N ��������
//#include <stdio.h>
//int main()
//{
//	double a = 2;
//	double b = 1;
//	double sum = 2/1;//sum���������еĺ�
//	int i = 0;
//	int n = 0;
//	double temp = 0;
//	double c = 0; //c����������ÿһ��ֵ
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		temp = b;
//		b = a;
//		a = a + temp;
//		c = a / b;
//		sum = sum + c;
//	}
//	printf("%.6f", sum);
//	return 0;
//}



//O ��ĩ����֮�ֵȼ�

//#include <stdio.h>
//int judge(int n)
//{
//	if (n >= 90)
//		return 1;
//	else if (n >= 80 && n < 90)
//		return 2;
//	else if (n >= 70 && n < 80)
//		return 3;
//	else if (n >= 60 && n < 70)
//		return 4;
//	else
//		return 5;
//}
//int main()
//{
//	int a = 0;//��������ÿ��ѧ���ĳɼ�
//	int i = 0;
//	int n = 0;
//	int A=0, B=0, C=0, D=0, E=0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &a);
//		switch (judge(a))
//		{
//		case 1:
//		{
//			A++;
//			break;
//		}
//		case 2:
//		{
//			B++;
//			break;
//		}
//		case 3:
//		{
//			C++;
//			break;
//		}
//		case 4:
//		{
//			D++;
//			break;
//		}
//		case 5:
//		{
//			E++;
//			break;
//		}
//		}
//	}
//	printf("A %d\n", A);
//	printf("B %d\n", B);
//	printf("C %d\n", C);
//	printf("D %d\n", D);
//	printf("E %d\n", E);
//	return 0;
//}

//P ƽ����
//int judge(int i,int b)
//{
//	int j = 0;
//	for (j = 1; j <= b; j++)
//	{
//		if (j * j == i)
//			return 1;
//	}
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int a = 0, b = 0;//a��bΪ���������ٽ�ֵ
//	int temp = 0;
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		sum = 0;
//		scanf("%d %d", &a, &b);
//		if (a>b)     //a�����b��ͽ���ab˳����С������Ϊa���������Ϊb
//		{
//			temp = a;
//			a = b;
//			b = temp;
//		}
//		for (i = a; i <= b; i++) //����a~b����
//		{  //�ж�a~b�������Ƿ���ƽ����
//			if (judge(i,b) == 1)
//			{
//				sum = sum + i;
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//Q ��ӡ����

//#include <stdio.h>
//    int main()
//    {
//        int n = 0;
//        int i = 0;
//        int j = 0;
//        int z = 0;
//        int m = 0;
//        int a = 0;
//        int b = 0;
//        int c = 0;
//        int d = 0;
//        scanf("%d", &n);
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= n - i; j++)
//            {
//                printf(" ");
//            }
//            z = 2 * i - 1;
//            for (m = 1; m <= z; m++)
//            {
//                printf("*");
//            }
//            printf("\n");
//           
//        }
//        for (a = 1; a < n; a++)
//        {
//            for (b=1;b<=a;b++)
//            {
//                printf(" ");
//            }
//            c = 2*n - 2*a -1;
//            for (d = 1; d <= c; d++)
//            {
//                printf("*");
//            }
//            printf("\n");
//
//        }
//        return 0;
//    }

    // for (k = 1; k <= 5; k++)
   // {
   //     for (z = 1; z <= 2 * k - 1; z++)
   //     {
   //         printf("*");
   //     }
   //     printf("\n");
   // }

//дһ�������������������ֵ
//#include <stdio.h>
//int get_max(int a, int b) //�����Ķ���
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);  //�����ĵ���
//	printf("%d", max);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}

//дһ��������������������(��ַ����)
//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("������:a=%d b=%d\n", a, b);
//	return 0;
//}

//�ж��Ƿ�Ϊ�����ĳ���
//#include <stdio.h>
//int is_prime(int n)  //�ж��Ƿ�Ϊ��������2~m-1��ÿ�������
//{
//	int j = 0;
//	for (j = 2; j < n; j++)  //��ÿ������������2~��n-1����ÿһ��������������н��%Ϊ0�����䲻��������ֻ��2~n-1ÿһ��������֤ͨ��������forѭ����n��i��Ϊ��������n=j
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)    //����100-200֮�������
//	{
//		if (is_prime(i) == 1)     //�ж�i�Ƿ�Ϊ����
//		{
//			printf("%d", i);
//		}               
//	}
//	return 0;
//}

//�ж��Ƿ�Ϊ����ĳ���
//#include <stdio.h>
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d\n", y);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));  //����Ϊ�淵��1������Ϊ�ٷ���0��ʡ����if
//}

//#include <stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{	
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//������Ƕ�׵���

//void test_3()
//{
//	printf("hehe\n");
//}
//void test_2()
//{
//	test_3();
//}
//#include <stdio.h>
//int main()
//{
//	test_2();
//	return 0;
//}

//��������ʽ����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "abc";
//	int len = strlen(arr);
//	int len = stelen("abc");
//	printf("%d", strlen(arr));//strlen�ķ���ֱֵ����Ϊprinf�Ĳ���
//	return 0;
//}

//��ʽ����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	printf("%s\n", strcpy(arr1, arr2)); //strcpy�ķ���ֱֵ����Ϊprintf�Ĳ���
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));
//	return 0;
//}

//�����������붨��
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Add(int, int); //����������
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//#include <stdio.h>
//#include "add.h"
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}

//�����ĵݹ�
//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

