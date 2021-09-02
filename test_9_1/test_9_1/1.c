#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//计算两个数的和
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//基本数据类型
//int num;
//int num = 5;
//long long bignum;
//long long bignum = 123456789012345LL;

//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2;
//	printf("%d", a + b);
//	return 0;
//}

//float fl;
//float fl = 3.1415;
//double db;
//double db = 3.1415926536;
//
//#include <stdio.h>
//int main()
//{
//	double a = 3.14, b = 0.12;
//	double c = a + b;
//	printf("%f", c);
//	return 0;
//}

//char c;
//char c = 'e';
// 
//#include <stdio.h>
//int main()
//{
//	char c1 = 'z', c2 = 'j', c3 = 117;
//	printf("%c%c%c", c1, c2, c3);
//	return 0;
//}

//   \n \0
//#include <stdio.h>
//int main()
//{
//	int num1 = 1, num2 = 2;
//	printf("%d\n\n%d", num1, num2);
//	printf("%c", 7);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[25] = "Wo ai de ren bu ai wo";
//	char str2[25] = "so sad a stroy it is.";
//	printf("%s,%s", str1, str2);
//	return 0;
//}

//#include <stdbool.h>
//#include <stdio.h>
//int main()
//{
//	bool flag1 = 0, flag2 = true;
//	int a = 1, b = 1;
//	printf("%d %d %d\n", flag1, flag2, a == b);
//	return 0;
//}

//强制类型转换 (新类型名)变量名
//#include <stdio.h>
//int main() {
//	double r = 12.56;
//	int a = 3, b = 5;
//	printf("%d\n", (int)r);
//	printf("%d\n", a / b);
//	printf("%.1f", (double)a / (double)b);
//} 

//#define 标识符 常量
//#define pi 3.14
//#define pi 3.14
//#include <stdio.h>
//int main() {
//	double r = 3;
//	printf("%.2f\n", pi * r * r);
//}

//const 数据类型 变量名 = 常量
//const double pi = 3.14;

//#include <stdio.h>
//const double pi = 3.14;
//int main() {
//	double r = 3;
//	printf("%.2f\n", 2 * pi * r);
//	return 0;
//}

//#define ADD(a,b) ((a)+(b))
//#include <stdio.h>
//int main() {
//	int num1 = 3, num2 = 5;
//	printf("%d", ADD(num1, num2));
//	return 0;
//}

//#include <stdio.h>
//#define CAL(x) ((x)*2+1) //记得打上括号
//int main() {
//	int a = 1;
//	printf("%d\n", CAL(a + 1));
//	return 0;
//}

//运算符
//#include <stdio.h>
//int main() {
//	int a = 3, b = 4;
//	double c = 1.23, d = 0.24;
//	printf("%d %d\n", a + b, a - b);
//	printf("%f\n", c * d);
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

//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 5;
//	int c = a > b ? 7 : 11;
//	printf("%d\n", c);
//	return 0;
//}

//#define MAX(a,b) ((a) > (b) ? (a) : (b))
//#include <stdio.h>
//int main()
//{
//	int a = 4, b = 3;
//	printf("%d\n", MAX(a, b));
//	return 0;
//}

//const int INF = (1 << 30) - 1;
//const int INF = (0x3fffffff);

//int n = 5;
//n = 6;
//int n, m;
//n = m = 5;

//#include <stdio.h>
//int main()
//{
//	int n = 3 * 2 + 1;
//	int m = (n > 6) && (n < 8);
//	n = n + 2;
//	printf("%d %d\n", n, m);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 12, m = 3;
//	n /= (m + 1);
//	m %= 2;
//	printf("%d %d\n", n, m);
//	return 0;
//}

/*
scanf("%d", &n);
scanf("%lld", &n);
scanf("%f", &fl);
scanf("%lf", &db);
scanf("%c", &c);
scanf("%s", str);
*/

//int hh, mm, ss;
//scanf("%d:%d:%d", &hh, &mm, &ss);

//int a;
//double b;
//char c;
//scanf("%d,%lf,%c", &a, &b, &c);

//int a, b;
//scanf("%d%d", &a, &b);

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
//	printf("a=%d,c=%c,str=%s", a, c, str);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 5;
//	printf("%d", n);
//}

//#include <stdio.h>
//int main()
//{
//	float f1 = 8765.4, f2 = 8765.4;
//	double d1 = 8765.4, d2 = 8765.4;
//	printf("%f\n%f\n", f1 * f2, d1 * d2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("abcd\nefg\n\nhijklmn");
//	printf("%%");
//	printf("//");
//	return 0;
//}

/*

% md→让不足m位的int型变量以m位进行右对齐输出，高位用空格补齐
如果变量本身超过m位，则保持原样

*/

//#include <stdio.h>
//int main()
//{
//	int a = 123, b = 1234567;
//	printf("%5d\n", a);
//	printf("%5d\n", b);
//	printf("%-5d\n", a);
//	printf("%-5d\n", b);
//}

/*
%0md→当变量不足m位时，在前面补足够数量的0
*/
//#include <stdio.h>
//int main()
//{
//	int a = 123, b = 1234567;
//	printf("%05d\n", a);
//	printf("%05d\n", b);
//	printf("%-05d\n", a);
//	printf("%-05d\n", b);
//	return 0;
//}

/*
%mf 让浮点数保留m位小数输出（四舍六入五成双）
*/

//#include <stdio.h>
//int main()
//{
//	double dl = 12.3456;
//	printf("%.0f\n", dl);
//	printf("%.1f\n", dl);
//	printf("%.2f\n", dl);
//	printf("%.3f\n", dl);
//	printf("%.4f\n", dl);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c1, c2, c3;
//	c1 = getchar();
//	getchar();
//	c2 = getchar();
//	c3 = getchar();
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	return 0; 
//}

//#include <stdio.h>
//typedef long long LL;
//int main()
//{
//	LL a = 123456789012345LL, b = 234567890123456LL;
//	printf("%lld\n", a + b);
//	return 0;
//}
//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	double db = -12.56;
//	printf("%.2f\n", fabs(db));
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double db = -12.56;
//	printf("%.2f", fabs(db));
//	return 0;
//}

//floor→向下取整；ceil→向上取整
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double db1 = -5.2, db2 = 5.2;
//	printf("%.0f %.0f\n", floor(db1), ceil(db1));
//	printf("%.0f %.0f\n", floor(db2), ceil(db2));
//	return 0;
//}

// Pow(double r, double p) 用来计算幂
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a = 2;
//	double b = 3;
//	printf("%f", pow(a, b));
//	return 0;
//}

//sqrt(double x) 用来返回double型变量的算术平方根
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double db = sqrt(2.0);
//	printf("%f\n", db);
//	return 0;
//}

//log(double r)
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double db = log(1.0);
//	printf("%f\n", db);
//	return 0;
//}

//计算以2为底8的对数→换底公式
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a = log(2);
//	double b = log(8);
//	printf("%f\n", b / a);
//	return 0;
//}

//sin(double x), cos(double x), tan(double x)
//asin(double x), acos(double x), atan(double x)

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	const double pi = acos(-1.0);
//	double db1 = sin(pi * 45 / 180);
//	double db2 = cos(pi * 45 / 180);
//	double db3 = tan(pi * 45 / 180);
//	printf("%f, %f, %f\n", db1, db2, db3);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double db1 = asin(1);
//	double db2 = acos(-1.0);
//	double db3 = atan(0);
//	printf("%f, %f, %f\n", db1, db2, db3);
//	return 0;
//}

//round(double x)→用于四舍五入，返回值为doble类型，需要进行取整（int）xxxx
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double db1 = round(3.40);
//	double db2 = round(3.45);
//	double db3 = round(3.50);
//	double db4 = round(3.55);
//	double db5 = round(3.60);
//	printf("%d, %d, %d, %d, %d\n", (int)db1, (int)db2, (int)db3, (int)db4, (int)db5);
//	return 0;
//}