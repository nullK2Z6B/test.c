#define _CRT_SECURE_NO_WARNINGS 1
//宏定义
//#include <stdio.h>
//#define pi 3.14
//int main()
//{
//	double r = 3;
//	printf("%.2f\n", pi * r * r);
//	return 0;
//}

//#include <stdio.h>
//const double pi = 3.14;
//int main()
//{
//	double r = 3;
//	printf("%.2f\n", 2 * pi * r);
//	return 0;
//}

//#include <stdio.h>
//#define ADD(a,b) ((a)+(b))
//int main()
//{
//	int num1 = 1, num2 = 2;
//	printf("%d", ADD(num1, num2));
//	return 0;
//}

//#include <stdio.h>
//#define Sculpture(a,b) ((a)*(b))
//int main()
//{
//	int a = 3, b = 15;
//	printf("%d", Sculpture(a, b));
//	return 0;
//}

//#include <stdio.h>
//#define CAL(x) (x * 2 + 1)
//int main()
//{
//	int a = 1;
//	printf("%d\n", CAL(a + 1));
//	return 0;
//}

//运算符
//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 4;
//	double c = 1.23, d = 0.24;
//	printf("%d %d\n", a + b, a - b);
//	printf("%f", c * d);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 5, b = 4, c = 5, d = 6;
//	printf("%d %d %d\n", a / b, a / c, a / d);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 5, b = 3, c = 5;
//	printf("%d %d\n", a % b, a % c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 1, n1, n2;
//	n1 = a++;
//	n2 = ++b;
//	printf("%d %d\n", n1, a);
//	printf("%d %d\n", n2, b);
//	return 0;
//}

//三目运算符
//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 5;
//	int c = a > b ? 7 : 11;
//	printf("%d", c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2;
//	int c = a > b ? a : b;
//	printf("%d",c);
//	return 0;
//}

//#include <stdio.h>
//#define max(a,b) ((a)>(b)?(a):(b))
//int main()
//{
//	int a = 4, b = 7;
//	printf("%d\n", max(a, b));
//	return 0;
//}

//#include <stdio.h>
//#define min(a,b) ((a<b)?(a):(b))
//int main()
//{
//	int a = 5, b = 7;
//	int c = min(a, b);
//	printf("%d", c);
//	return 0;
//}

//const int INF = (1 << 30) - 1;
//const int INF = 0x3fffffff;

//赋值表达式
//int n = 5;
//n = 6;
//int n, m;
//n = m = 5;

//#include <stdio.h>
//int main()
//{
//	int n = 3 * 2 + 1; //n = 7
//	int m = (n > 6) && (n < 8); //m = 1
//	n = n + 2;// n = 9
//	printf("%d %d\n", n, m);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 12, m = 3;
//	n /= m + 1;//n = n/(m+1) = 12/4 = 3
//	m %= 2;//m = m%2 = 1
//	printf("%d %d\n", n, m);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	scanf("%lld", &n);
//	scanf("%f", &n);
//	scanf("%lf", &n);
//	scanf("%c", &n);
//	scanf("%s", n); //数组不需要加取地址符号
//}
// 
//#include <stdio.h>
//int main()
//{
//	int hh, mm, ss;
//	scanf("%d:%d:%d", &hh, &mm, &ss);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	char c;
//	scanf("%d,%lf,%c", &a, &b, &c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);//两个%d之间可以不加空格（scanf以空白符为读入结束标志）
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[10];
//	scanf("%s", str);
//	printf("%s", str);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	char c, str[10];
//	scanf("%d%c%s", &a, &c, str);
//	printf("a=%d,c=%c,str=%s", a, c, str);  //scanf("%c")可以读取空格
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 5;
//	printf("%d", n);
//	printf("%d", n);
//	printf("%lld", n);
//	printf("%f", n);
//	printf("%f", n);
//	printf("%c", n);
//	printf("%s", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float f1 = 8765.4, f2 = 8765.4;
//	double d1 = 8765.4, d2 = 8765.4;
//	printf("%f\n%f\n",f1*f2,d1*d2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("abcd\nefg\n\nhijklmn\n");
//	printf("%%\n");
//	printf("\"hello\"\n");
//	printf("\'\'\n");
//	printf("//\n");
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit.";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//memset函数的使用
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "hello bit.";
//	memset(arr1, 'x', 5);
//	printf("%s", arr1);
//	return 0;
//}

