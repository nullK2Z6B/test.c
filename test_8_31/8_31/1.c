#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)          //���Ƶݹ�ֹͣ
//	{
//		print(n/10);   //ʹ�õݹ鲻�Ͽ���ֹͣ����
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

//���ַ������ȣ�ģ��strlen������
//ʹ��strlen����ʵ��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", strlen(arr));
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* str)  //���ݵĲ���Ϊ����ʱ��ʵ���ϴ��ݵ�Ϊ������Ԫ�صĵ�ַ
//{
//	int count = 0;
//	while (*str != '\0') //*str��ʾ�������Ԫ�صĵ�ַ���з��ʴӶ���ø�Ԫ��ԭ����ֵ
//	{
//		count++;
//		str++;    //�����str++��ʾ���ǻ�ȡ������һ��Ԫ�صĵ�ַ��������*str������
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
	int a = 0;    //��λ������
	int temp = 0; //�ݴ�һ�´�������i��a��b֮�������
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
		for (i = a; i <= b; i++)//����a��b֮�����
		{                      //�ж��Ƿ�Ϊˮ�ɻ���
			
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