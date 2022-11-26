#define _CRT_SECURE_NO_WARNINGS 1

/*
*作者: 果壳里的幻想
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


//1.1.01
//int main()
//{
//	printf("Hello, World!");
//	return 0;
//}

//1.1.02.1
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d", b);
//	return 0;
//}

//1.1.02.2
//int main()
//{
//	int num1;  //第一个数
//	int num2;  //第二个数
//	int num3;  //第三个数
//	scanf("%d %d %d", &num1, &num2, &num3);
//	printf("%d", num2);  //只打印第二个数
//	return 0;
//}

//1.1.03
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%8d %8d %8d", a, b, c);
//	return 0;
//}

//1.1.04
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	printf("%.3f", a);
//	return 0;
//}

//1.1.05
//int main()
//{
//	double dou = 0.0;
//	scanf("%lf", &dou);
//	printf("%.12lf\n", dou);
//	return 0;
//}

//1.1.06
//int main()
//{
//	char ch = '0';
//	int num = 0;
//	float fl = 0.0;
//	double dou = 0.0;
//	scanf("%c\n%d\n%f\n%lf", &ch, &num, &fl, &dou);
//	scanf("%c %d %f %lf", &ch, &num, &fl, &dou);
//	printf("%c %d %.6f %.6lf", ch, num, fl, dou);
//	return 0;
//}

//1.1.07
//int main()
//{
//	double dou = 0.0;
//	scanf("%lf", &dou);
//	printf("%lf\n", dou);
//	printf("%.5lf\n", dou);
//	printf("%e\n", dou);
//	printf("%g\n", dou);
//	return 0;
//}

//1.1.08
//int main()
//{
//	char ch = '0';
//	scanf("%c", &ch);
//	printf("%3c\n", ch);
//	printf("%2c%c%c\n", ch, ch, ch);
//	printf("%c%c%c%c%c", ch, ch, ch, ch, ch);
//	return 0;
//}

//1.1.09
//int main()
//{
//	char ch = '0';
//	scanf("%c", &ch);
//	printf("%3c\n", ch);
//	printf("%2c%c%c\n", ch, ch, ch);
//	printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
//	printf("%2c%c%c\n", ch, ch, ch);
//	printf("%3c", ch);
//	return 0;
//}

//1.1.10
//int main()
//{
//	printf("                ********\n");
//	printf("               ************\n");
//	printf("               ####....#.\n");
//	printf("             #..###.....##....\n");
//	printf("             ###.......######              ###                 ###           ###           ###\n");
//	printf("                ...........               #...#               #...#         #...#         #...#\n");
//	printf("               ##*#######                 #.#.#               #.#.#         #.#.#         #.#.#\n");
//	printf("            ####*******######             #.#.#               #.#.#         #.#.#         #.#.#\n");
//	printf("           ...#***.****.*###....          #...#               #...#         #...#         #...#\n");
//	printf("           ....**********##.....           ###                 ###           ###           ###\n");
//	printf("           ....****    *****....\n");
//	printf("             ####        ####\n");
//	printf("           ######        ######\n");
//	printf("##############################################################              ##################################\n");
//	printf("#...#......#.##...#......#.##...#......#.##------------------#              #...#......#.##------------------#\n");
//	printf("###########################################------------------#              ###############------------------#\n");
//	printf("#..#....#....##..#....#....##..#....#....#####################              #..#....#....#####################\n");
//	printf("##########################################    #----------#                  ##############    #----------#\n");
//	printf("#.....#......##.....#......##.....#......#    #----------#                  #.....#......#    #----------#\n");
//	printf("##########################################    #----------#                  ##############    #----------#\n");
//	printf("#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#                  #.#..#....#..#    #----------#\n");
//	printf("##########################################    ############                  ##############    ############");
//	return 0;
//}

//1.2.01
//int main()
//{
//	int a = 0;
//	short b = 0;
//	printf("%d %d", sizeof a, sizeof b);
//	return 0;
//}

//1.2.02
//int main()
//{
//	float a;
//	double b;
//	printf("%d %d", sizeof a, sizeof b);
//	return 0;
//}

//1.2.03
//int main()
//{
//	bool a;
//	char b;
//	printf("%d %d", sizeof a, sizeof b);
//	return 0;
//}

//1.2.04
//int main()
//{
//	int a = 32768;
//	short b = a;
//	printf("%d %d\n", a, b);
//	
//	//提交的内容
//	printf("D C");
//
//	return 0;
//}

//1.2.05
//int main()
//{
//	double a = 1.000000001;
//	float b = a;
//	printf("%.9f %.9f\n", a, b);
//	
//	//提交的内容
//	printf("F E");
//
//	return 0;
//}

//1.2.06
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	int b = a;
//	printf("%d", b);
//	return 0;
//}

//1.2.07
//int main()
//{
//	char cha = '0';
//	scanf("%c", &cha);
//	printf("%d", cha);
//	return 0;
//}

//1.2.08
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%c", num);
//	return 0;
//}

//1.2.09
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	bool b = num;
//	printf("%d", b);
//	return 0;
//}

//1.2.10
//int main()
//{
//	char cha[] = "Hello, World!";
//	printf("%d", sizeof(cha));
//	return 0;
//}

//1.3.01
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d %d", &A, &B);
//	int sum = add(A, B);
//	printf("%d", sum);
//	return 0;
//}

//1.3.02
//int c(int x, int y, int z)
//{
//	return (x + y) * z;
//}
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	scanf("%d %d %d", &A, &B, &C);
//	int j = c(A, B, C);
//	printf("%d", j);
//	return 0;
//}

//1.3.03
//int chh(int x, int y, int z)
//{
//	return (x + y) / z;
//}
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	scanf("%d %d %d", &A, &B, &C);
//	int ch = chh(A, B, C);
//	printf("%d", ch);
//	return 0;
//}

//1.3.04
//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d %d", &A, &B);
//	printf("%d %d", A / B,A % B);
//	return 0;
//}

//1.3.05
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double ch = 0.0;
//	scanf("%lf %lf", &a, &b);
//	ch = a / b;
//	printf("%.9f", ch);
//	return 0;
//}

//1.3.06
//int main()
//{
//	float x = 0.0;
//	float y = 0.0;
//	scanf("%f %f", &x, &y);
//	float z = y / x * 100;
//	printf("%.3f%%", z);
//	return 0;
//}

//1.3.07
//double def(double x , double a, double b, double c, double d)
//{
//	//返回什么样的值 def前面就是什么类型!!!
//	return a * x * x * x + b * x * x + c * x + d;
//}
//int main()
//{
//	double X, A, B, C, D;
//	scanf("%lf %lf %lf %lf %lf", &X, &A, &B, &C, &D);
//	double result = def(X, A, B, C, D);
//	printf("%.7lf", result);
//	return 0;
//}

//1.3.08.01
//int main()
//{
//	double F = 0.0;
//	scanf("%lf", &F);
//	double C = 5 * (F - 32) / 9;
//	printf("%.5lf", C);
//	return 0;
//}

//1.3.08.02
//double def(double F)
//{
//	//函数定义参数时记得要加类型!!!
//	return 5 * (F - 32) / 9;
//}
//int main()
//{
//	double f = 0.0;
//	scanf("%lf", &f);
//	double C = def(f);
//	printf("%.5lf", C);
//	return 0;
//}

//1.3.09
//int main()
//{
//	double r = 0.0;
//	double pi = 3.14159;
//	scanf("%lf", &r);
//	double d = 2 * r;
//	double c = 2 * pi * r;
//	double s = pi * r * r;
//	printf("%.4lf %.4lf %.4lf", d, c, s);
//	return 0;
//}

//1.3.10
//int main()
//{
//	float r1 = 0;
//	float r2 = 0;
//	scanf("%f %f", &r1, &r2);
//	float R = 1 / (1 / r1 + 1 / r2);
//	printf("%.2f", R);
//	return 0;
//}

//1.3.11
//int main()
//{
//	//引用头文件!!!
//	double a = 0.0;
//	double b = 0.0;
//	int k = 0;
//	scanf("%lf %lf", &a, &b);
//	while (true)
//	{
//		if (a - k * b < b)
//		{
//			double result = a - k * b;
//			printf("%g", result);
//			break;
//		}
//		k++;
//	}
//	return 0;
//}

//1.3.12
//double pi = 3.14;
//double V(double R)
//{
//	//函数定义参数时记得要加类型!!!
//	return (4.0 / 3.0)* pi * R * R * R;
//}
//int main()
//{
//	double r = 0.0;
//	scanf("%lf", &r);
//	double v = V(r);
//	printf("%.2lf", v);
//	return 0;
//}

//1.3.13
//int main()
//{
//	char arr[3] = "0";  //可以开的很大
//	scanf("%s", &arr);
//	for (int i = 0; i <= 2; i++)
//	{
//		printf("%c", arr[2 - i]);
//	}
//	return 0;
//}

//1.3.14
//float pi = 3.14159;
//long v = 20000;
//int def(float r, float h)
//{
//	float ve = pi * r * r * h;
//	return v / ve;
//}
//int main()
//{
//	int R, H;
//	scanf("%d %d", &H, &R);
//	int num = def(R, H) + 1;
//	printf("%d", num);
//	return 0;
//}

//1.3.15
//int main()
//{
//	int n, x, y;
//	scanf("%d %d %d", &n, &x, &y);
//	int s = y / x;
//	if (y % x != 0)
//	{
//		s += 1;
//	}
//	int ss = n - s;
//	printf("%d", ss);
//	return 0;
//}

//1.3.16
//int main()
//{
//	float ax, ay, bx, by;
//	scanf("%f %f %f %f", &ax, &ay, &bx, &by);
//	float z = sqrt((bx-ax) * (bx-ax) + (by-ay) * (by-ay));  //计算x开根号 包含头文件<math.h>
// 	printf("%.3f", z); 
//	return 0;
//} 

//1.3.17
//double distance(double ax, double ay, double bx, double by)
//{
//	double dis = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
//	return dis;
//}
//double hailun(double a, double b, double c)
//{
//	double p = (a + b + c) / 2;
//	double result = sqrt(p * (p - a) * (p - b) * (p - c));
//	return result;
//}
//int main()
//{
//	double x1, y1, x2, y2, x3, y3;
//	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
//	double aa = distance(x1, y1, x2, y2);
//	double bb = distance(x2, y2, x3, y3);
//	double cc = distance(x1, y1, x3, y3);
//	double results = hailun(aa, bb, cc);
//	printf("%.2lf", results);
//	return 0;
//}

//1.3.18
//int main()
//{
//	int a1, a2, n;
//	scanf("%d %d %d", &a1, &a2, &n);
//	int d = a2 - a1;
//	printf("%d", a1 + (n - 1) * d);
//	return 0;
//}

//1.3.19.1
//int main()
//{
//	unsigned int A, B;  // https://blog.csdn.net/weixin_43877387/article/details/118394375 https://baike.baidu.com/item/unsigned/8604216
//	scanf("%u %u", &A, &B);
//	printf("%u", A * B);
//	return 0;
//}

//1.3.19.2
//int main()
//{
//	long long unsigned int A, B;
//	scanf("%llu %llu", &A, &B);
//	printf("%llu", A * B);
//	return 0;
//}

//1.3.20
//int main()
//{
//	int a, i, result = 1;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		result *= 2;
//	}
//	printf("%d", result);
//	return 0;
//}

//1.4.01
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	if (N > 0)
//	{
//		printf("positive");
//	}
//	if (N == 0)
//	{
//		printf("zero");
//	}
//	if (N < 0)
//	{
//		printf("negative");
//	}
//	return 0;
//}

//1.4.02
//int main()
//{
//	double dou;
//	scanf("%lf", &dou);
//	if (dou < 0)
//	{
//		dou = 0 - dou;
//	}
//	printf("%.2lf", dou);
//	return 0;
//}

//1.4.03
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("even");
//	}
//	if (num % 2 != 0)
//	{
//		printf("odd");
//	}
//	return 0;
//}

//1.4.04
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	int ASCI = ch;
//	if (ASCI % 2 == 1)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

//1.4.05
//int main()  // https://blog.csdn.net/weixin_43877387/article/details/118455974
//{
//	long long  x;
//	long long  y;
//	scanf("%lld %lld", &x, &y);
//	if (x > y)
//	{
//		printf(">");
//	}
//	if (x == y)
//	{
//		printf("=");
//	}
//	if (x < y)
//	{
//		printf("<");
//	}
//	return 0;
//}

//1.4.06
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num >= 10 && num <= 99)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}

//1.4.07
//int main()
//{
//	int luck, encourage = 0;
//	scanf("%d %d", &luck, &encourage);
//	if (luck >= 10 || encourage >= 20)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}

//1.4.08
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0 && num % 5 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

//1.4.09
//int main()
//{
//	int num,i = 0;
//	
//	scanf("%d", &num);
//	if (num % 3 == 0)
//	{
//		printf("3");
//		i++;
//	}
//	if (num % 5 == 0)
//	{
//		if (i != 0)
//		{
//			printf(" ");
//		}
//		printf("5");
//		i++;
//		
//	}
//	if (num % 7 == 0)
//	{
//		if (i != 0)
//		{
//			printf(" ");
//		}
//		printf("7");
//		
//	}
//	if (num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
//	{
//		printf("n");
//	}
//	return 0;
// } 

//1.4.10
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	if ((a < 60 && b >= 60) || (a >= 60 && b < 60))
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}

//1.4.11
//int main()
//{
//	int date = 0;
//	scanf("%d", &date);
//	if (date == 1 || date == 3 || date == 5)
//	{
//		printf("NO");
//	}
//	else
//	{
//		printf("YES");
//	}
//	return 0;
//}

//1.4.12
//double time(double distance, double speed)
//{
//	double ti = distance / speed;
//	return ti;
//}
//int main()
//{
//	double dis;
//	scanf("%lf", &dis);
//	double timewalk = time(dis, 1.2);
//	double timebike = time(dis, 3.0) + 50.0;
//	if (timewalk > timebike)
//	{
//		printf("Bike");
//	}
//	if (timewalk < timebike)
//	{
//		printf("Walk"); 
//	}
//	if (timewalk == timebike)
//	{
//		printf("All");
//	}
//	return 0;
//}

//1.4.13
//double y;
//double def1(double x)
//{
//	y = -x + 2.5;
//	return y;
//}
//double def2(double x)
//{
//	y = 2.0 -1.5*(x-3.0)*(x-3.0);
//	return y;
//}
//double def3(double x)
//{
//	y = x / 2.0 - 1.5;
//	return y;
//}
//int main()
//{
//	double N = 0.0;
//	double result = 0.0;
//	scanf("%lf", &N);
//	if (N >=0.0 && N < 5.0)
//	{
//		result = def1(N);
//	}
//	if (N >=5.0 && N < 10.0)
//	{
//		result = def2(N);
//	}
//	if (N >= 10.0 && N < 20.0)
//	{
//		result = def3(N);
//	}
//	printf("%.3lf", result);
//	return 0;
//}

//1.4.14.01
//int main()
//{
//	int gram = 0;
//	char speed = '0';
//	int money = 0;
//	scanf("%d %c", &gram, &speed);
//	if (gram - 1000 <= 0)
//	{
//		money = 8;
//	}
//	if (gram - 1000 > 0)
//	{
//		if ((gram - 1000) % 500 == 0)
//		{
//			money = ((gram - 1000) / 500) * 4 + 8;
//		}
//		else
//		{
//			money = ((gram - 1000) / 500 + 1) * 4 + 8;
//		}
//		
//	}
//	if (speed == 'y')
//	{
//		money += 5;
//	}
//	printf("%d", money);
//	return 0;
//}

//1.4.14.02
//int main()  // 计科2204粟宇
//{
//	int a = 0, s = 0;
//	char b;
//	scanf("%d %c", &a, &b);
//	if (a <= 1000)
//	{
//		s = 8;
//	}
//	else if (a > 1000)
//	{
//		s = 8 + ceil((double)(a - 1000) / 500) * 4;
//	}
//  if (b == 'y')
//	{
//		s = s + 5;
//	}
//	printf("%d", s);
//
//	return 0;
//}

//1.4.15
//int main()
//{
//	int x, y, z;
//	scanf("%d %d %d", &x, &y, &z);
//	if (x > y && x > z)
//	{
//		printf("%d", x);
//	}
//	if (y > x && y > z)
//	{
//		printf("%d", y);
//	}
//	if (z > x && z > y)
//	{
//		printf("%d", z);
//	}
//	return 0;
//}

//1.4.16
//int main()
//{
//	int x, y, z;
//	scanf("%d %d %d", &x, &y, &z);
//	if (x + y > z && x + z > y && y + z > x)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//1.4.17
//int main()  // https://www.jianshu.com/p/6d772898a65d
//{
//	int year;
//	scanf("%d", &year);
//	if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
//	{
//		printf("Y");
//	}
//	else
//	{
//		printf("N");
//	}
//	return 0;
//}

//1.4.18
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	if (x >= -1 && x <= 1 && y >= -1 && y <= 1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//1.4.19
//int main()
//{
//	int a, b, re, i = 0;
//	char sign;
//	scanf("%d %d %c", &a, &b, &sign);
//	switch (sign)
//	{
//	case '+':
//		re = a + b;
//		break;
//	case '-':
//		re = a - b;
//		break;
//	case '*':
//		re = a * b;
//		break;
//	case '/':
//		re = a / b;
//		if (b == 0)
//		{
//			printf("Divided by zero!");
//			i++;
//		}
//		break;
//	default:
//		printf("Invalid operator!");
//		i++;
//		break;
//	}
//	if (i == 0)
//	{
//		printf("%d", re);
//	}
//	return 0;
//}

//1.4.20
//int main()
//{
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	if (b * b == 4 * a * c)
//	{
//		double result1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//		printf("x1=x2=%.5lf", result1);
//	}
//	if (b*b > 4 * a * c)
//	{
//		double result2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//		double result3 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//		if (result2 > result3)
//		{
//			printf("x1=%.5lf;x2=%.5lf", result2, result3);
//		}
//		if (result2 < result3)
//		{
//			printf("x1=%.5lf;x2=%.5lf", result3, result2);
//		}
//	}
//	if (b * b < 4 * a * c)
//	{
//		double xu = sqrt(4 * a * c - b * b) / (2 * a);
//		double shi = -b / (2 * a);
//		if (shi == -0.0)
//		{
//			shi = 0.0;
//		}
//		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", shi, xu, shi, xu);
//	}
//	return 0;
//}

//1.4.21
//int main()
//{
//	int n, x, y, num = 0;
//	scanf("%d %d %d", &n, &x, &y);
//	if (y >= n * x)
//	{
//		printf("0");
//	}
//	else if (y <= n * x)
//	{
//		num = n - (y / x);
//		if (y % x != 0)
//		{
//			num -= 1;
//		}
//		printf("%d", num);
//	}
//}

//1.5.01
//int main()
//{
//	int i;
//	int n = 0;
//	int num = 0;
//	int result = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		result += num;
//	}
//	printf("%.2f", (float)result/(float)i);
//	return 0;
//}

//1.5.02
//int main()
//{
//	int i;
//	float money;
//	float sum;
//	for (i = 0;i<12; i++)
//	{
//		scanf("%f", &money);
//		sum += money;
//	}
//	printf("$%.2lf", sum / 12.0);
//	return 0;
//}

//1.5.03
//int main()
//{
//	int i;
//	int max;
//	float sum;
//	float every;
//	scanf("%d", &max);
//	for (i=0;i<max;i++)
//	{
//		scanf("%f", &every);
//		sum += every;
//	}
//	printf("%.4lf", sum / i);
//	return 0;
//}

//1.5.04
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int every = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i=0;i<n;i++)
//	{
//		scanf("%d", &every);
//		sum += every;
//	}
//	printf("%d %.5lf", sum, (double)sum/(double)i);
//}

//1.5.05
//int main()
//{
//	int i;
//	int num = 0;
//	scanf("%d", &num);
//	int every = 0;
//	int max = 0;
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &every);
//		if (every > max)
//		{
//			max = every;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//1.5.06
//int main()
//{
//	int num = 0;
//	int i;
//	int max = -1;
//	int min = 1001;
//	int every = 0;
//	scanf("%d", &num);
//	for (i = 0;i<num;i++)
//	{
//		scanf("%d", &every);
//		if (every < min)
//		{
//			min = every;
//		}
//		if (every > max)
//		{
//			max = every;
//		}
//	}
//	printf("%d", max - min);
//	return 0;
//}

//1.5.07
//int main()
//{
//	int num = 0;
//	int i;
//	scanf("%d", &num);
//	int jin = 0, yin = 0, ton = 0;
//	int jin_all = 0, yin_all = 0, ton_all = 0;
//	int all = 0;
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d %d %d", &jin, &yin, &ton);
//		jin_all += jin;
//		yin_all += yin;
//		ton_all += ton;
//	}
//	all = jin_all + yin_all + ton_all;
//	printf("%d %d %d %d", jin_all, yin_all, ton_all, all);
//	return 0;
//}

//1.5.08
//int main()
//{
//	int i;
//	int coner_num = 0;
//	int sum = 0;
//	int coner = 0;
//	scanf("%d", &coner_num);
//	sum = (coner_num - 2) * 180;
//	for (i = 1; i < coner_num; i++)
//	{
//		scanf("%d", &coner);
//		sum -= coner;
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.5.09
//int main()
//{
//	int start = 0, end = 0;
//	int sum = 0;
//	scanf("%d %d", &start, &end);
//	for (start; start <= end; start++)
//	{
//		if (start % 2 == 1)
//		{
//			sum += start;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.5.10
//int main()
//{
//	int start = 0, end = 0;
//	scanf("%d %d", &start, &end);
//	int sum = 0;
//	for (start; start <= end; start++)
//	{
//		if (start % 17 == 0)
//		{
//			sum += start;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.5.11
//int main()
//{
//	int i;
//	int k = 0;
//	int num = 0;
//	int num_1 = 0;
//	int num_5 = 0;
//	int num_10 = 0;
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		scanf("%d", &num);
//		if (num == 1)
//		{
//			num_1 += 1;
//		}
//		if (num == 5)
//		{
//			num_5 += 1;
//		}
//		if (num == 10)
//		{
//			num_10 += 1;
//		}
//	}
//	printf("%d\n%d\n%d", num_1, num_5, num_10);
//	return 0;
//}

//1.5.12
//int main()
//{
//	int N = 0;
//	int m = 0;
//	int i;
//	int num = 0;
//	int result = 0;
//	scanf("%d %d", &N, &m);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &num);
//		if (num == m)
//		{
//			result += 1;
//		}
//	}
//	printf("%d", result);
//	return 0;
//}

//1.5.13
//int main()
//{
//	int num = 0;
//	int b = 0;
//	scanf("%d %d", &num, &b);
//	int i;
//	int result = 1;
//	for (i = 0; i < b; i++)
//	{
//		result *= num;
//	}
//	printf("%d", result);
//	return 0;
//}

//1.5.14
//int main()
//{
//	double people = 0;
//	int year = 0;
//	int i;
//	scanf("%lf %d", &people, &year);
//	for (i = 0; i < year; i++)
//	{
//		people *= 1.001;
//	}
//	printf("%.4lf", people);
//	return 0;
//}

//1.5.15
//int main()
//{
//	double M;
//	double R = 0;
//	int Y = 0;
//	int i;
//	scanf("%lf %lf %d", &R, &M, &Y);
//	R = 1.0 + R * 0.01;
//	for (i = 0; i < Y; i++)
//	{
//		M *= R;
//	}
//	printf("%d", (int)M);
//	return 0;
//}

//1.5.16
//int main()
//{
//	double start_money = 200.0;
//	double N = 0;
//	double K = 0.0;
//	int i = 1;
//	scanf("%lf %lf", &N, &K);
//	K = 1.0 + K * 0.01;
//	while (1)
//	{
//		if (i > 20)
//		{
//			printf("Impossible");
//			break;
//		}
//		if (i * N >= start_money)
//		{
//			printf("%d",i);
//			break;
//		}
//		start_money *= K;
//		i++;
//	}
//	return 0;
//}

//1.5.17
//int main()
//{
//	int a1 = 1;
//	int a2 = 1;
//	int an_2 = 0;
//	int an_1 = 0;
//	int an = 1;
//	int n = 3;
//	int end = 0;
//	scanf("%d", &end);
//	an_2 = a1;
//	an_1 = a2;
//	while (n <= end)
//	{
//		an = an_1 + an_2;
//		an_2 = an_1;
//		an_1 = an;	
//		n++;
//	}
//	printf("%d", an);
//	return 0;
//}

//1.5.18
//int main()
//{
//	int i;
//	int n = 0;
//	scanf("%d", &n);
//	n -= 1;
//	double old_1 = 0;
//	double old_2 = 0;
//	double old_eff = 0;
//	double new_1 = 0;
//	double new_2 = 0;
//	double new_eff = 0;
//	scanf("%lf %lf", &old_1, &old_2);
//	old_eff = old_2 / old_1;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf %lf", &new_1, &new_2);
//		new_eff = new_2 / new_1;
//		if (new_eff - old_eff > 0.05)
//		{
//			printf("better\n");
//		}
//		else if (old_eff - new_eff > 0.05)
//		{
//			printf("worse\n");
//		}
//		else
//		{
//			printf("same\n");
//		}
//	}
//	return 0;
//}

//1.5.19
//int main()
//{
//	int i;
//	int n = 0;
//	scanf("%d", &n);
//	double time = 0;
//	double x = 0, y = 0;
//	double distance = 0;
//	int peo_num = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf %lf %d", &x, &y, &peo_num);
//		distance = sqrt(x * x + y * y);
//		time += distance / 25 + peo_num * 1.5;
//	}
//	time = ceil(time);
//	printf("%d", (int)time);
//	return 0;
//}

//1.5.20
//int main()
//{
//	double h = 0;
//	double s = 0;
//	int i;
//	scanf("%lf", &h);
//	for (i = 0; i < 10; i++)
//	{
//		s += h + h / 2;
//		h = h / 2;
//	}
//	s -= h;
//	printf("%g\n%g", s, h);
//}

//1.5.21
//int main()
//{
//	long long int num = 0;
//	scanf("%lld", &num);
//	do
//	{
//		if (num == 1) break;
//		if (num % 2 != 0)
//		{
//			printf("%lld*3+1=", num);
//			num = num * 3 + 1;
//			printf("%lld\n", num);
//		}
//		else if (num % 2 == 0)
//		{
//			printf("%lld/2=", num);
//			num /= 2;
//			printf("%lld\n", num);
//		}
//	} while (num != 1);
//	printf("End");
//}

//1.5.22
//int main()
//{
//	int i = 1;
//	const int wage = 300;
//	int budget = 0;
//	int sum_every = 0;
//	int sum_mother = 0;
//	int sum_year = 0;
//	for (i; i < 13; i++)
//	{
//		sum_every += wage;
//		scanf("%d", &budget);
//		if (sum_every < budget)
//		{
//			printf("-%d", i);
//			break;
//		}
//		sum_every -= budget;
//		if (sum_every / 100 > 0)
//		{
//			sum_mother += (sum_every / 100) * 100;
//			sum_every -= (sum_every / 100) * 100;
//		}
//	}
//	if (i == 13)
//	{
//		sum_year = sum_mother * 1.2 + sum_every;
//		printf("%d", (int)sum_year);
//	}
//	return 0;
//}

//1.5.23
//int main()
//{
//	int i;
//	int all_num = 0;
//	scanf("%d", &all_num);
//	int people_num = 0;
//	int medcine_num = 0;
//	int cant_get_num = 0;
//	scanf("%d", &people_num);
//	for (i=0;i<people_num;i++)
//	{
//		scanf("%d", &medcine_num);
//		if (all_num >= medcine_num)
//		{
//			all_num -= medcine_num;
//
//		}
//		else
//		{
//			cant_get_num += 1;
//		}
//	}
//	printf("%d", cant_get_num);
//	return 0; 
//}

//1.5.24
//int main()
//{
//	int i;
//	int num = 0;
//	scanf("%d", &num); 
//	int high = 0, low = 0;
//	int time = 0;
//	int time_max = 0;
//	for (i;i<num;i++)
//	{
//		scanf("%d %d", &high, &low);
//		if (high>=90&&high<=140&&low>=60&&low<=90)
//		{
//			time += 1;
//			if (time>time_max)
//			{
//				time_max = time;
//			}
//		}
//		else
//		{
//			time = 0;
//		}
//	}
//	printf("%d", time_max);
//	return 0;
//}

//1.5.25
//int main()  // https://blog.csdn.net/xcdq_aaa/article/details/105894356
//{
//	int g, a, b, c, r,e, f;
//	for (g = 1; g <= 999; g++)
//	{
//		a = g % 7; b = g / 7 % 7; c = g / 7 / 7;
//		e = g % 9; f = g / 9 % 9; r = g / 9 / 9;
//		if (a == r && b == f && e == c)
//		{
//			printf("%d\n", g);
//			printf("%d%d%d\n", c, b, a);
//			printf("%d%d%d\n", r, f, e);
//			return 0;
//		}
//	}
//}

//1.5.26.01
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i;
//	int num = 0;
//	int num_1 = 0, num_10 = 0, num_100 = 0, num_1000 = 0;
//	int result = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		num_1000 = num / 1000;
//		num_100 = (num % 1000) / 100;
//		num_10 = (num % 1000 % 100) / 10;
//		num_1 = (num % 1000 % 100 % 10);
//		if (num_1 > num_10 + num_100 + num_1000)
//		{
//			result += 1;
//		}
//	}
//	printf("%d", result);
//	return 0;
//}

//1.5.26.02
//int def(int char_num)
//{
//	switch (char_num)
//	{
//	case 48:
//		return 0;
//	case 49:
//		return 1;
//	case 50:
//		return 2;
//	case 51:
//		return 3;
//	case 52:
//		return 4;
//	case 53:
//		return 5;
//	case 54:
//		return 6;
//	case 55:
//		return 7;
//	case 56:
//		return 8;
//	case 57:
//		return 9;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i;
//	char num[5] = "0";
//	int num_1 = 0, num_10 = 0, num_100 = 0, num_1000 = 0;
//	int result = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &num);
//		num_1000 = def((int)num[0]);
//		num_100 = def((int)num[1]);
//		num_10 = def((int)num[2]);
//		num_1 = def((int)num[3]);
//		if (num_1 > num_10 + num_100 + num_1000)
//		{
//			result += 1;
//		}
//	}
//	printf("%d", result);
//	return 0;
//}

//1.5.26.03
//int main()  //雷学长给的建议 https://blog.csdn.net/BBBling/article/details/115540073
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i;
//	char num[5] = "0";
//	int num_1 = 0, num_10 = 0, num_100 = 0, num_1000 = 0;
//	int result = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &num);
//		num_1000 = (int)num[0]-'0';
//		num_100 = (int)num[1]-'0';
//		num_10 = (int)num[2]-'0';
//		num_1 = (int)num[3]-'0';
//		if (num_1 > num_10 + num_100 + num_1000)
//		{
//			result += 1;
//		}
//	}
//	printf("%d", result);
//	return 0;
//}

//1.5.27
//int main()
//{
//	int i = 1;
//	double Sn = 0;
//	double k = 0;
//	scanf("%lf", &k);
//	do {
//		Sn += 1.0 / i++;
//	} while (Sn<=k);
//	printf("%d", i-1);
//}

//1.5.28.01
//int main()
//{
//	char arr[11] = "0";
//	scanf("%s", &arr);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			i -= 1;
//			break;
//		}
//	}
//	for (i; i >= 0; i--)
//	{
//		if (i != 0)
//			printf("%c ", arr[i]);
//		else
//			printf("%c", arr[i]);
//	}
//}

//1.5.28.02
//int main()
//{
//	char arr[11] = "0";
//	scanf("%s", &arr);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			i -= 1;
//			break;
//		}
//	}
//	for (i; i >= 0; i--)
//	{
//		if (i != 0)
//			printf("%d ", arr[i]-'0');
//		else
//			printf("%d", arr[i]-'0');
//	}
//}

//1.5.29
//int def(char arr_[12],int i_)
//{
//	int i0_ = i_;
//	int i__;
//	if (arr_ == "0")
//	{
//		printf("0");
//		return 0;
//	}
//	for (i_; i_ < 12; i_++)
//	{
//		if (arr_[i_] == '\0')
//		{
//			i_ -= 1;
//			i__ = i_;
//			for (i__; i__ > 0; i__--)
//			{
//				if (arr_[i__] == '0')
//				{
//					i_ -= 1;
//				}
//				else
//				{
//					break;
//				}
//			}
//			break;
//		}
//	}
//	for (i_; i_ >= i0_; i_--)
//	{
//		printf("%d", arr_[i_] - '0');
//	}
//}
//int main()
//{
//	char arr[12] = "0";
//	scanf("%s", &arr);
//	int i = 0;
//	if (arr[0] != '-')
//	{
//		def(arr, i);
//	}
//	else
//	{
//		i = 1;
//		printf("-");
//		def(arr, i);
//	}
//}

//1.5.30
//int main()
//{
//	int num = 0;
//	int k = 0;
//	scanf("%d %d", &num, &k);
//	int k_num = 0;
//	int i;
//	int num_0 = num;
//	for (i = 100000; i>0; i/=10)
//	{
//		if (num - i >= 0)
//		{
//			if (num / i == 3)
//			{
//				k_num += 1;
//			}
//			num -= (num / i) * i;
//		}
//	}
//	if (num_0 % 19 == 0 && k_num == k)
//		printf("YES");
//	else
//		printf("NO");
//}

//1.5.31.01 改完了 不要用 \b 会变得不幸 tnnd
// 不要用 \b 会变得不幸!!!
// 不要用 \b 会变得不幸!!!
// 不要用 \b 会变得不幸!!!
//int main()
//{
//	int i;
//	int start;  //for循环
//	char oc[5001] = "tnnd";  //灯的模拟 1:开 0:关
//	int N = 0;  //灯数
//	int M = 0;  //人数
//	scanf("%d %d", &N, &M);
//	for (start = 0; start < N; start++)
//	{
//		if (M != 0)
//		{
//			oc[start] = '0';  //初始化 M1的职责
//		}
//		else
//		{
//			oc[start] = '1';  //初始化 M1的职责
//		}
//	}
//	for (i = 2; i <= M; i++)  //M2+
//	{
//		for (start = 0; start < N; start++)
//		{
//			if ((start + 1) % i == 0)
//			{
//				if (oc[start] == '1')
//				{
//					oc[start] = '0';
//				}
//				else
//				{
//					oc[start] = '1';
//				}
//			}
//		}
//	}
//	printf("1");
//	for (start = 1; start < N; start++)  //确认开关的
//	{
//		if (oc[start] == '0')
//		{
//			printf(",%d", start + 1);
//		}
//	}
//}

//1.5.31.02
//int main()
//{
//	bool oc[5005];  //灯的模拟 1:开 0:关
//	int N = 0;  //灯数
//	int M = 0;  //人数
//	scanf("%d %d", &N, &M);
//	memset(oc, false, sizeof oc);
//	for (int i = 2; i <= M; i++)  //M3+
//	{
//		for (int start = 1; start <= N; start++)
//		{
//			if (start % i == 0)
//			{
//				oc[start] = !oc[start];
//			}
//		}
//	}
//	printf("1");
//	for (int start = 2; start <= N; start++)  //确认开关的
//	{
//		if (oc[start] == false)
//		{
//			printf(",%d", start);
//		}
//	}
//}

//1.5.31.03
//int main() {
//	int i;
//	int start;  //for循环
//	char oc[5001] = "tnnd";  //灯的模拟 1:开 0:关
//	int N = 0;  //灯数
//	int M = 0;  //人数
//	scanf("%d %d", &N, &M);
//	for (start = 0; start < N; start++) {
//		if (M != 0) oc[start] = '0';  //初始化 M1的职责
//		else oc[start] = '1';  //初始化 M1的职责
//	}
//	for (i = 2; i <= M; i++) {
//		for (start = 0; start < N; start++) {
//			if ((start + 1) % i == 0) {
//				if (oc[start] == '1') oc[start] = '0';
//				else oc[start] = '1';
//			}
//		}
//	}
//	printf("1");
//	for (start = 1; start < N; start++) {
//		if (oc[start] == '0') printf(",%d", start + 1);
//	}
//}

//1.5.31.04
//int main() {
//	bool oc[5005];  //灯的模拟 1:开 0:关
//	int N = 0, M = 0;  //灯数
//	scanf("%d %d", &N, &M);
//	memset(oc, false, sizeof oc);
//	for (int i = 2; i <= M; i++) {
//		for (int start = 1; start <= N; start++) {
//			if (start % i == 0) oc[start] = !oc[start];
//		}
//	}
//	printf("1");
//	for (int start = 2; start <= N; start++) {
//		if (oc[start] == false) printf(",%d", start);
//	}
//}

//1.5.31.05  //22数据科学lg的思路 考虑每盏灯的开关次数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 1;
//	int j = 1;
//	scanf("%d %d", &n, &m);
//	for (i = 1; i <= n; i++)
//	{
//		int a = -1;
//		for (j = 2; j <= m; j++)
//		{
//			if (i % j == 0)
//				a = -a;
//			else
//				a = a;
//		}
//		if (i == 1) printf("1");
//		if (a == -1 && i != 1) printf(",%d", i);
//	}
//	return 0;
//}

//1.5.32
//int main() {
//	int i, n = 0, qi_ = 2, pi_ = 1, qi = 2, pi = 1;
//	double sum = 2;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++) {
//		qi = qi_ + pi_;
//		pi = qi_;
//		sum += (double)qi / pi;
//		qi_ = qi;
//		pi_ = pi;
//	}
//	printf("%.4lf", sum);
//	return 0;
//}

//1.5.33
//int main() {
//	int i, n = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		if (i % 2 != 0) sum += (float)1 / i;
//		else sum -= (float)1 / i;
//	}
//	printf("%.4lf", sum);
//}

//1.5.34
//int main() {
//	int i,max, ji, n = 0,sum = 0;
//	scanf("%d", &n);
//	for (max = 1; max <= n; max++) {
//		ji = 1;
//		for (i = 1; i <= max; i++) {
//			ji *= i;
//		}
//		sum += ji;
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.5.35
//int main() {
//	int max , i, n = 0;
//	double ji, e = 1;
//	scanf("%d", &n);
//	for (max = 1; max <= n; max++) {
//		ji = 1;
//		for (i = 1; i <= max; i++) {
//			ji *= i;
//		}
//		e += 1 / ji;
//	}
//	printf("%.10lf", e);
//	return 0;
//}

//1.5.36  // 超时
//float def_ji(float num, int ci) {
//	int i_;
//	float ji_ = 1;
//	for (i_ = 0; i_ < ci; i_++) {
//		ji_ *= num;
//	}
//	return ji_;
//}
//int main() {
//	float sum = 0, x = 0;
//	int i, max, n = 0;
//	scanf("%f %d", &x, &n);
//	for (max = n; max > 0; max--) {		
//		sum += def_ji(x,max);
//	}
//	printf("%.2f", sum+1);
//}

//1.5.36.01
//int main() {
//	float sum = 1, x = 0;
//	int i,  n = 0;
//	scanf("%f %d", &x, &n);
//	for (i = 0; i <= n; i++)
//		sum *= x;
//	if (x==1) printf("%.2f", (float)n*1 + 1);
//	else 
//		if ((sum - 1) / (x - 1)!=-0.00) printf("%.2f", (sum-1)/(x-1));
//		else printf("%.2f", -(sum - 1) / (x - 1));
//	return 0;

//1.5.36.02  // 0^n=0 :(
//int main() {
//	float sum = 1, x = 0;
//	int i, n = 0;
//	scanf("%f %d", &x, &n);
//	for (i = 0; i <= n; i++)
//		sum *= x;
//	if (x == 1) printf("%.2f", (float)n * 1 + 1);
//	else if (x == -1)
//		if (n % 2 == 0) printf("1.00");
//		else printf("0.00");
//	else if (x == 0) printf("1.00");
//	else printf("%.2f", (sum - 1) / (x - 1));
//	return 0;
//}

//1.5.37  //ceil() 的向上取整需要传参(float)
//int main()
//{
//	int M = 0, N = 0, X = 0;
//	scanf("%d %d %d", &M, &N, &X);
//	while (ceil((float)M / N) <= X&&M>=N)
//	{
//		X -= ceil((float)M / N);
//		N += M / N;
//	}
//	printf("%d", N);
//	return 0;
//}

//1.5.38  //MD 样例有问题!!! tnnd
//int main()
//{
//	int Cm=0, m=0, c = 0;
//	scanf("%d", &m);
//	if (m == 0)
//	{
//		scanf("%d", &Cm);
//		printf("0\n");
//	}
//	for (int w = m; w > 0; w--)
//	{
//		scanf("%d", &Cm);
//		if (w == 1)
//		{
//			printf("%d\n", w * Cm);
//		}
//		else
//		{
//			printf("%d ", w * Cm);
//		}
//	}
//	scanf("%d", &Cm);
//	return 0;
//}

//1.5.39
//bool def_7(int num) {
//	int num_10 = num / 10;
//	int num_1 = num % 10;
//	if (num_10 == 7 || num_1 == 7) {
//		return true;
//	}else{
//		return false;
//	}
//}
//int main() {
//	int i, n = 0, ji = 0, sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		if (i % 7 == 0 || def_7(i)) {
//			continue;
//		}else {
//			ji = i*i;
//		}
//		sum += ji;
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.5.40
//int def_1(int num) {
//	int i, num_1 = 0;
//	for (i = 10000; i > 0; i /= 10) {
//		if (num >= i) {
//			if (num / i == 1) {
//				num_1++;
//			}
//			num %= i;  //无论有没有 都要把第一个数字消掉
//		}
//	}
//	return num_1;
//}
//int main() {
//	int i, n = 0,sum=0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum += def_1(i);
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.5.41
//int def_2(int num) {
//	int i,num_2=0;
//	for (i = 1000000000; i > 0; i /= 10) {
//		//printf("%d\n", i);
//		if (num >= i) {
//			if (num / i == 2) {
//				num_2++;
//			}
//			num %= i;
//		}
//	}
//	return num_2;
//}
//int main() {
//	int i, min = 0, max = 0,sum= 0;
//	scanf("%d %d", &min, &max);
//	for (i = min; i <= max; i++) {
//		sum += def_2(i);
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.5.42
//int main() {
//	int s = 0, h_max = 0, w_max = 0;
//	char ch = '0';
//	scanf("%d %d %c %d", &h_max, &w_max, &ch, &s);
//	for (int h = 1; h <= h_max; h++) {
//		for (int w = 1; w <= w_max; w++) {
//			if (h == 1 || h == h_max) printf("%c", ch);
//			else
//				if (w == 1 || w == w_max) printf("%c", ch);
//				else
//					if (s==1) printf("%c", ch);
//					else printf(" ");
//		}
//		printf("\n");
//	}
//}

//1.5.43.01  //超时 因为倒着走 会有很多数浪费 正着走遇见2、3 就break了
//int main() {
//	int i, num = 0;
//	scanf("%d", &num);
//	for (i = num - 1; i > 1; i--) {
//		if (num % i == 0) {
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//1.5.43.02  // https://blog.csdn.net/qq_41264055/article/details/108524649
//int main() {
//	int i, num = 0;
//	scanf("%d", &num);
//	for (i = 2; i < num; i++) {
//		if (num % i == 0) {
//			printf("%d", num / i);
//			break;
//		}
//	}
//	return 0;
//}

//1.5.44.01  //没事品一品
//int main()
//{
//	int n = 0, num, y, n_ = 0;
//	scanf("%d", &n);
//	for (num = 2;; num++)
//	{
//		bool num_su = true;  //1
//		for (y = 2; y * y <= num; y++)  //2
//		{
//			if (num % y == 0)  //不是素数
//			{
//				num_su = !num_su;  //3
//				break;
//			}
//		}
//		if (num_su) {
//			n--;  //4
//			if (n == 0) break;
//		}
//	}
//	printf("%d", num);
//}

//1.5.44.02  // https://blog.csdn.net/weixin_50901683/article/details/108911600
//int main()
//{
//	int n, i;//i需要定义在外面输出用 
//	scanf("%d", &n);
//	for (i = 2; ; i++)	//死循环从2开始试数 
//	{
//		int a = 1;	//判断是否为素数  1是 0不是 
//		for (int j = 2; j * j <= i; j++)//从2开始因子j的平方一直小于数i且i不能被j整除则说明 i是素数 
//		{
//			if (i % j == 0) //当前i能被j整除时 便不是素数 修改判断值a=0 提前结束内层循环 
//			{
//				a = 0;
//				break;
//			}
//		}
//		if (a == 1)	//a=1则是素数 
//		{
//			n--;	//n--  
//			if (n == 0) break;//当n等于0时 当前i便是第n个素数 结束死循环 
//		}
//	}
//	printf("%d", i);
//}

//1.5.45
//int main()
//{
//	int sum = 0,n = 0;
//	scanf("%d", &n);
//	for (int i = 0;; i++)
//	{
//		if (n >= i)
//		{
//			sum += i * i;
//			n -= i;
//		}
//		else
//		{
//			sum += n * i;
//			break;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.6.01
//int main()
//{
//	int N = 0, m = 0, result=0;
//	scanf("%d", &N);
//	int num[100]={0};
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	scanf("%d", &m);
//	for (int i = 0; i < N; i++)
//	{
//		if (num[i] == m)
//		{
//			result++;
//		}
//	}
//	printf("%d", result);
//}

//1.6.02
//int main()
//{
//	int num[10]={0};
//	int result = 0, h = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	scanf("%d", &h);
//	h += 30;
//	for (int i = 0; i < 10; i++)
//	{
//		if (num[i] <= h)
//		{
//			result += 1;
//		}
//	}
//	printf("%d", result);
//}

//1.6.03
//float price(int num_, int i_)
//{
//	float pri_ = 0;
//	switch (i_)
//	{
//	case 0:
//		pri_ = 28.9;
//		break;
//	case 1:
//		pri_ = 32.7;
//		break;
//	case 2:
//		pri_ = 45.6;
//		break;
//	case 3:
//		pri_ = 78;
//		break;
//	case 4:
//		pri_ = 35;
//		break;
//	case 5:
//		pri_ = 86.2;
//		break;
//	case 6:
//		pri_ = 27.8;
//		break;
//	case 7:
//		pri_ = 43;
//		break;
//	case 8:
//		pri_ = 56;
//		break;
//	case 9:
//		pri_ = 65;
//		break;
//	default:
//		break;
//	}
//	return num_ * pri_;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	float sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		sum += price(arr[i], i);
//	}
//	printf("%.1f", sum);
//	return 0;
//}

//1.6.04
//int main()
//{
//	int arr[99] = { 0 };
//	int i, n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i--; i >= 0; i--)
//	{
//		if (i != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//		else
//		{
//			printf("%d", arr[i]);
//		}
//	}
//}

//1.6.05  // 我不明白 为什么一定要用数组
//int main()
//{
//	int arr[4] = { 0,0,0,0 };
//	int max = 0;
//	int year = 0;
//	scanf("%d", &max);
//	for (int i = 0; i < max; i++)
//	{
//		scanf("%d", &year);
//		if (year >= 61) {
//			arr[3]++;
//		}
//		else if (year >= 36 && year <= 60) {
//			arr[2]++;
//		}
//		else if (year >= 19 && year <= 35) {
//			arr[1]++;
//		}
//		else {
//			arr[0]++;
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%.2lf%%\n", (float)arr[i]/max*100);
//	}
//}

//1.6.06
//int arr[10001]={ 0 };
//int main()
//{
//	int L = 0, M = 0, sum = 0;
//	scanf("%d %d", &L, &M);
//	for (int i = 0; i <= L; i++)
//	{
//		arr[i] = 1;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		int start = 0, end = 0;
//		scanf("%d %d", &start, &end);
//		for (int ii = start; ii <= end; ii++)
//		{
//			arr[ii] = 0;
//		}
//	}
//	for (int i = 0; i <= L; i++)
//	{
//		if (arr[i] == 1) sum++;
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.6.07
//int arr[3000] = { 0 };
//int main()
//{
//	int num_1 = 0,  num= 0, len = 0;
//	scanf("%d %d", &len, &num);
//	for (int i = 0; i <= len-2; i++)
//	{
//		num_1 = num;
//		scanf("%d", &num);
//		arr[i] = fabs(num - num_1);
//	}
//	bool jo = true;
//	for (int ii = 1; ii < len; ii++)
//	{
//		for (int i = 0; i <= len-2; i++)
//		{
//			if (arr[i] == ii)
//			{
//				break; 
//			}
//			else if (arr[i] != ii && i == len - 2)
//			{
//				jo = false;
//			}
//		}
//		if (!jo) break;
//	}
//	if (jo) printf("Jolly");
//	else printf("Not jolly");
//}

//1.6.08
//int main()
//{
//	int a_g[100] = { 0 }, b_g[100] = { 0 };
//	int num = 0, a_num = 0, b_num = 0;
//	int a = 0, b = 0;
//	int a_win = 0, b_win = 0;
//	scanf("%d %d %d", &num, &a_num, &b_num);
//	for (int i = 1; i <= a_num; i++)
//	{
//		scanf("%d", &a_g[i]);
//	}
//	a_g[0] = a_g[a_num];
//	for (int i = 1; i <= b_num; i++)
//	{
//		scanf("%d", &b_g[i]);
//	}
//	b_g[0] = b_g[b_num];
//	for (int i = 1; i <= num; i++)
//	{
//		if (i <= a_num)
//		{
//			a = a_g[i];
//		}
//		else
//		{
//			a = a_g[i % a_num];
//		}
//		if (i <= b_num)
//		{
//			b = b_g[i];
//		}
//		else
//		{
//			b = b_g[i % b_num];
//		}
//		if (a==0)
//		{
//			if (b == 2)
//			{
//				a_win++;
//			}
//			else if (b == 5)
//			{
//				b_win++;
//			}
//		}
//		else if (a == 2)
//		{
//			if (b == 5)
//			{
//				a_win++;
//			}
//			else if (b == 0)
//			{
//				b_win++;
//			}
//		}
//		else if (a == 5)
//		{
//			if (b == 0)
//			{
//				a_win++;
//			}
//			else if (b == 2)
//			{
//				b_win++;
//			}
//		}
//	}
//	if (a_win > b_win)
//	{
//		printf("A");
//	}
//	else if (b_win > a_win)
//	{
//		printf("B");
//	}
//	else
//	{
//		printf("draw");
//	}
//	return 0;
//}

//1.6.09
//int main()
//{
//	int arr_a[1000] = { 0 };
//	int arr_b[1000] = { 0 };
//	int n = 0, sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr_a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr_b[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr_a[i] * arr_b[i];
//	}
//	printf("%d", sum);
//}

//1.6.10
//int main()
//{
//	char arr_1[201] = { '0' };
//	char arr_2[201] = { '0' };
//	char arr[202] = "00";
//
//	scanf("%s", arr_1);
//	scanf("%s", arr_2);
//
//	int len_1 = strlen(arr_1), len_2 = strlen(arr_2);
//	int len_max = len_1 > len_2 ? len_1 : len_2;
//	int jin = 0;
//	for (int i = 1; i <= len_max + 1; i++)
//	{
//		int a = 0, b = 0;
//
//		if (len_1 - i >= 0) a = arr_1[len_1 - i] - '0';
//		else a = 0;
//
//		if (len_2 - i >= 0) b = arr_2[len_2 - i] - '0';
//		else b = 0;
//
//		if (a + b + jin >= 10)
//		{
//			arr[len_max - i + 1] = (a + b+ jin - 10) + '0';
//			jin = 1;
//		}
//		else
//		{
//			arr[len_max - i + 1] = (a + b + jin) + '0';
//			jin = 0;
//		}
//	}
//	// 按要求打印
//	bool print = false;
//	for (int i = 0; i < len_max + 1; i++)
//	{
//		if (arr[i] != '0'&&print==false) print = !print;  //满足第一个不是0时开始打印
//		
//		if (print) printf("%c", arr[i]);
//	}
//	if (!print) printf("0");  //莫佬的提示 //if (i==len_max + 1 && arr[len_max + 1] == '0' && print == false)
//	return 0;
//}

//1.6.11
//int main()
//{
//	char a[201] = { '0' };  // 被减数
//	char b[201] = { '0' };  // 减数
//	char c[201] = { '0' };  // 减数
//	scanf("%s", a);  // 写入a
//	scanf("%s", b);  // 写入b
//	int a_len = strlen(a);  // a的长度
//	int b_len = strlen(b);  // b的长度
//	int tui = 0;  // 退位
//	for (int i = 1;i<=a_len;i++)
//	{
//		int a_ = a[a_len-i] - '0';
//		int b_ = 0;
//
//		if (b_len-i>=0) b_ = b[b_len-i] - '0';
//		
//		if (a_>=b_+tui)
//		{
//			c[a_len-i] = a_ - b_ - tui + '0';
//			tui = 0; 
//		}
//		else
//		{
//			c[a_len-i] = 10 + a_ - b_ - tui + '0';
//			tui = 1;
//		}
//	}
//	bool print = false;
//	for (int i = 0; i < a_len; i++)
//	{
//		if (c[i] != '0'&&print==false) print = !print;  //满足第一个不是0时开始打印
//
//		if (print) printf("%c", c[i]);
//	}
//	if (!print) printf("0");  //莫佬的提示 //if (i==len_max + 1 && arr[len_max + 1] == '0' && print == false)
//	return 0;
//}

//1.6.12
//int main()
//{
//	char arr[32] = "0000000000000000000000000000002";
//	int n = 0;
//	scanf("%d", &n);
//	int jin = 0;
//	for (int ii = 1;ii<n;ii++)
//	{
//		for (int i = 30;i>=0;i--)
//		{
//			int num = arr[i]- '0';
//			if (num*2<10)
//			{
//				arr[i] = num*2 + jin + '0';
//				jin = 0;
//			}
//			else
//			{
//				arr[i] = num * 2 + jin - 10+'0';
//				jin = 1;
//			}
//		} 
//	}
//	bool print = false;
//	for (int i = 0; i <= 30; i++)
//	{
//		if (arr[i] != '0' && !print) print = !print;
//		if (print) printf("%c", arr[i]);
//	}
//}

//1.6.13  // 大数取余 https://blog.csdn.net/qq_46527915/article/details/115325491
//#define N 31
//int main()
//{
//	char arr[N] = "0";  // 字符串
//	int num[N] = { 0 };  // 数组
//	scanf("%s", arr);
//	for (int i = 0; i < strlen(arr); i++)  // 把字符串转换成数组
//	{
//		num[i] = arr[i] - '0';
//	}
//	bool key = false;
//	bool first = true;
//	for (int chu = 2; chu <= 9; chu++)
//	{
//		int j = 0;
//		for (int i = 0; i < strlen(arr); i++)
//		{
//			j = (j * 10 + num[i]) % chu;
//		}
//		if (j == 0)
//		{
//			if (first)
//			{
//				printf("%d", chu);
//				first = !first;
//			}
//			else printf(" %d", chu);
//			key = true;
//		}
//	}
//	if (!key) printf("none");
//	return 0;
//}

//1.6.14  //错误的 待修改
//#define MAX 400001
//char arr[MAX];
//int main()
//{
//	arr[MAX-1] = "1";
//	int max = 0;
//	scanf("%d", &max);
//	int jin = 0;
//	for (int i = 1; i <= max; i++)
//	{
//		int num = arr[MAX - i] - '0';
//		arr[MAX - i] = num * i % 10 + jin;
//		jin = (num * i) / 10;
//	}
//	bool print = false;
//	for (int i = 0; i <= max-1; i++)
//	{
//		if (arr[i] != 0) print = !print;
//		if (print) printf("%c",)
//	}
//}

//1.7.01
//int main()
//{
//	char arr[255] = "0";
//	gets(arr);
//	int sum = 0;
//	for (int i = 0; i < strlen(arr); i++)
//	{
//		int c = arr[i];
//		if (c >= 48 && c <= 57) sum++;
//	}
//	printf("%d", sum);
//}

//1.7.02
//#define N 100000
//#define LN 26
//int main()
//{
//	bool letter_bool_list[LN];  // 判断该字母是不是第一次出现
//	memset(letter_bool_list, false, sizeof letter_bool_list);  // 
//
//	char arr[N] = "0";
//	scanf("%s", arr);
//
//	int arr_len = strlen(arr);
//
//	char letter_char_list[LN] = "";
//
//	for (int i = 0; i < arr_len; i++)
//	{
//		char ch = arr[i];
//		bool init = false;
//
//		for (int ii = 0; ii < strlen(letter_char_list); ii++)
//		{
//			if (ch == letter_char_list[ii])
//			{
//				init = !init;
//			}
//			if (init)
//			{
//				letter_bool_list[ii] = true;
//				break;
//			}
//		}
//		if (!init) letter_char_list[strlen(letter_char_list)] = ch;
//	}
//	bool have = false;
//	for (int i = 0; i < strlen(letter_char_list); i++)
//	{
//		if (letter_bool_list[i] == false)
//		{
//			have = !have;
//			printf("%c", letter_char_list[i]);
//			break;
//		}
//	}
//	if (!have) printf("no");
//}

//1.7.03
//int main()
//{
//	double present;
//	char DNA1[501] = "0", DNA2[501] = "0";
//	scanf("%lf", &present);
//	scanf("%s", DNA1);
//	scanf("%s", DNA2);
//	int all = strlen(DNA1);
//	int sum = 0;
//	for (int i = 0; i < all; i++)
//	{
//		if (DNA1[i] == DNA2[i]) sum++;
//	}
//	if ((double)sum / all >= present) printf("yes");
//	else printf("no");
//}

//1.7.04
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		char s1[10] = "0", s2[10] = "0";
//		scanf("%s %s", s1, s2);
//		if (s1[0] == s2[0])
//		{
//			printf("Tie\n");
//		}
//		else if ((s1[0] == 'R' && s2[0] == 'S') || (s1[0] == 'S' && s2[0] == 'P') || (s1[0] == 'P' && s2[0] == 'R'))
//		{
//			printf("Player1\n");
//		}
//		else if ((s2[0] == 'R' && s1[0] == 'S') || (s2[0] == 'S' && s1[0] == 'P') || (s2[0] == 'P' && s1[0] == 'R'))
//		{
//			printf("Player2\n");
//		}
//	}
//}

//1.7.05
//int main()
//{
//	char input[101] = "0";
//	gets(input);
//	int ascll_num_1, ascll_num_2, ascll_num_all;
//	for (int i = 0; i < strlen(input) - 1; i++)
//	{
//		ascll_num_1 = (int)input[i];
//		ascll_num_2 = (int)input[i + 1];
//		ascll_num_all = ascll_num_1 + ascll_num_2;
//		printf("%c", ascll_num_all);
//	}
//	ascll_num_1 = (int)input[0];
//	ascll_num_2 = (int)input[strlen(input) - 1];
//	ascll_num_all = ascll_num_1 + ascll_num_2;
//	printf("%c", ascll_num_all);
//}

//1.7.06
//int main()
//{
//	char key[1000];
//	gets(key);
//	int len = strlen(key);
//	char num_char_list[] = "0123456789";
//	char letter_char_list[] = "0123456789ABCDEFGHIGKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_";
//	for (int i = 0; i < strlen(num_char_list); i++)
//	{
//		if (key[0] == num_char_list[i])
//		{
//			printf("no");
//			return 0;
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		bool bo_2 = false;
//		for (int ii = 0; ii < strlen(letter_char_list); ii++)
//		{
//			if (key[i] == letter_char_list[ii])
//			{
//				bo_2 = !bo_2;
//				break;
//			}
//		}
//		if (!bo_2)
//		{
//			printf("no");
//			return 0;
//		}
//	}
//	printf("yes");
//	return 0;
//}

//1.7.07
//int main()
//{
//	char ssDNA[256] = "0";
//	char ssDNA_2[256] = "0";
//	gets(ssDNA);
//	int ssDNA_len = strlen(ssDNA);
//	for (int i = 0; i < ssDNA_len; i++)
//	{
//		if (ssDNA[i] == 'A')
//		{
//			ssDNA_2[i] = 'T';
//		}	
//		else if (ssDNA[i] == 'T')
//		{
//			ssDNA_2[i] = 'A';
//		}	
//		else if (ssDNA[i] == 'C')
//		{
//			ssDNA_2[i] = 'G';
//		}
//		else if (ssDNA[i] == 'G')
//		{
//			ssDNA_2[i] = 'C';
//		}
//	}
//	printf("%s", ssDNA_2);
//	return 0;
//}

//1.7.08
//int main()
//{
//	char ch[31] = "0";
//	char a, A;
//	scanf("%s %c %c", ch, &a , &A);  //字符需要取地址
//	for (int i = 0; i < strlen(ch); i++)
//	{
//		if (ch[i] == a)
//		{
//			ch[i] = A;
//		}
//	}
//	printf("%s", ch);
//	return 0;
//}

//1.7.09
//int main()
//{
//	char ch[80];
//	gets(ch);
//	int len = strlen(ch);
//	for (int i = 0; i < len; i++)
//	{
//		int num = ch[i];
//		if ((num >= 65 && num < 90) || (num >= 97 && num < 122))
//		{
//			ch[i] += 1;
//		}
//		else if (num == 90)
//			ch[i] = 'A';
//		else if (num == 122)
//			ch[i] = 'a';
//	}
//	printf("%s", ch);
//}

//1.7.10
//int main()
//{
//	char ch[201];
//	gets(ch);
//	int ch_len = strlen(ch);
//	for (int i = 0; i < ch_len; i++)
//	{
//		int ch_num = ch[i];
//		if (ch_num >= 65 && ch_num < 70)
//		{
//			ch[i] += 21;
//		}
//		else if(ch_num >= 70 && ch_num < 91)
//		{
//			ch[i] -= 5;
//		}
//	}
//	printf("%s", ch);
//}

//1.7.11  // XYZ ABA
//int main()
//{
//	char letter_1[27], letter_2[27];  //字母对照表 1: 密文 2: 原文
//
//	memset(letter_1, '0', 26);  //初始化
//	letter_1[26] = '\0';
//
//	memset(letter_2, '0', 26);  //初始化
//	letter_2[26] = '\0';
//	//puts(letter_1);
//	//printf("%d", strlen(letter_1));
//	char secret[101], text[101];  //给定的文段
//	char mubiao[101];  //待翻译的文段
//	//char print[101];
//
//	gets(secret);
//	//printf("%d", strlen(secret));
//	gets(text);
//	gets(mubiao);
//
//	for (int i = 0; i < strlen(secret); i++)
//	{
//		if ('0' == letter_1[secret[i] - 65])
//		{
//			letter_1[secret[i] - 65] = secret[i];
//			letter_2[secret[i] - 65] = text[i];
//		}
//		else
//		{
//			if (letter_2[secret[i] - 65] != text[i])
//			{
//				printf("Failed");
//				return 0;
//			}
//		}
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		if ('0' == letter_1[i])
//		{
//			printf("Failed");
//			return 0;
//		}
//	}
//
//	for (int i = 65; i < 91; i++)
//	{
//		int exist = 0;
//		for (int ii = 0; ii < 26; ii++)
//		{
//			if (i == letter_2[ii])
//			{
//				exist = !exist;
//				break;
//			}
//		}
//		if (!exist)
//		{
//			printf("Failed");
//			return 0;
//		}
//	}
//
//	for (int i = 0; i < strlen(mubiao); i++)
//	{
//		printf("%c", letter_2[mubiao[i] - 65]);
//	}
//
//	/*for (int i = 0; i < strlen(mubiao); i++)
//	{
//		printf("%c", print[i]);
//	}*/
//	return 0;
//}

//1.7.12
//int main()
//{
//	char arr[50];
//	gets(arr);
//	int arr_len = strlen(arr);
//	for (int i = 0; i < arr_len; i++)
//	{
//		if ((arr[i] >= 97 && arr[i] < 120) || (arr[i] >= 65 && arr[i] < 88))
//		{
//			arr[i] += 3;
//		}
//		else if ((arr[i] >= 120 && arr[i] <123) || (arr[i] >= 88 && arr[i] <= 91))
//		{
//			arr[i] -= 23;
//		}
//	}
//
//	for (int i = 0; i < arr_len; i++)
//	{
//		if (arr[i] >= 65 && arr[i] < 91)
//		{
//			arr[i] += 32;
//		}
//		else if (arr[i] >= 97 && arr[i] < 123)
//		{
//			arr[i] -= 32;
//		}
//	}
//
//	for (int i = arr_len - 1; i >= 0; i--)
//	{
//		printf("%c", arr[i]);
//	}
//	
//	return 0;
//}

//1.7.13
//int main()
//{
//	char c_arr[101];
//	gets(c_arr);
//	for (int i = 0; i < strlen(c_arr); i++)
//	{
//		if (c_arr[i] >= 97 && c_arr[i] <= 122)
//		{
//			c_arr[i] = c_arr[i] - 32;
//		}
//	}
//	puts(c_arr);
//	return 0;
//}

//1.7.14
//int main()
//{
//	char c_arr[80];
//	gets(c_arr);
//	for (int i = 0; i < strlen(c_arr); i++)
//	{
//		if (c_arr[i] >= 97 && c_arr[i] <= 122)
//		{
//			c_arr[i] = c_arr[i] - 32;
//		}
//		else if (c_arr[i] >= 65 && c_arr[i] <= 90)
//		{
//			c_arr[i] = c_arr[i] + 32;
//		}
//	}
//	puts(c_arr);
//	return 0;
//}

//1.7.15
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	getchar();
//	for (int i = 0; i < num; i++)
//	{
//		char c_medicine_arr[21];
//		gets(c_medicine_arr);
//		if ((c_medicine_arr[0] >= 97) && (c_medicine_arr[0] <= 122))
//		{
//			c_medicine_arr[0] -= 32;
//		}
//		for (int ii = 1; ii < strlen(c_medicine_arr); ii++)
//		{
//			
//			if (c_medicine_arr[ii] >= 65 && c_medicine_arr[ii] <= 90)
//			{
//				c_medicine_arr[ii] += 32;
//			}
//		}
//		puts(c_medicine_arr);
//	}
//	return 0;
//}

// 1.7.16.01  //有错，待改
//#define N 81
//char* my_strlwr(char* arr)
//{
//	char* re = arr;
//	while (*arr != '\0')
//	{
//		*arr = tolower(*arr);
//		arr++;
//	}
//	return re;
//}
//int main()
//{
//	char arr1[N] = "0";
//	gets(arr1);
//	char arr2[N] = "0";
//	gets(arr2);
//	my_strlwr(arr1);
//	my_strlwr(arr2);
//	if (strcmp(arr1, arr2) == 0)
//	{
//		printf("=");
//	}
//	else if (strcmp(arr1, arr2) > 0)
//	{
//		printf(">");
//	}
//	else if (strcmp(arr1, arr2) < 0)
//	{
//		printf("<");
//	}
//	return 0;
//}

// 1.7.17
//int main()
//{
//	char arr_1[100000] = "0";
//	char arr_2[100000] = "0";
//	gets(arr_1);
//	gets(arr_2);
//	int i = 0, j = 0;
//	for (i = 0, j = 0; i < strlen(arr_1) && j < strlen(arr_2); i++, j++)
//	{
//		while(' ' == arr_1[i] || ' ' == arr_2[j])
//		{
//			if (' ' == arr_1[i])
//			{
//				i++;
//			}
//			if (' ' == arr_2[j])
//			{
//				j++;
//			}
//		}
//
//		if (arr_1[i] != arr_2[j] && arr_1[i]+32!=arr_2[j]&& arr_1[i] - 32 != arr_2[j])
//		{
//			printf("NO");
//			return 0;
//		}
//	}
//	if (i != strlen(arr_1) || j != strlen(arr_2))
//	{
//		printf("NO");
//		return 0;
//	}
//	printf("YES");
//	return 0;
//}

// 1.7.18 写的有点烂 有时间可以优化一下
//#define N 201
//int isinit(char* long_arr, int max_len, char* short_arr, int min_len)
//{
//	for (int i = 0; i < max_len-min_len+1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < min_len; j++)
//		{
//			if (*(long_arr + i) != *(short_arr + j))
//			{
//				i -= j;
//				break;
//			}
//			else  // 相等
//			{
//				i++;
//				continue;
//			}
//		}
//		if (j == min_len)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char s1[N] = "0";
//	scanf("%s", s1);
//	char s2[N] = "0";
//	scanf("%s", s2);
//	int s1_len = strlen(s1);
//	int s2_len = strlen(s2);
//	int len_max = 0;
//	int len_min = 0;
//	if (s1_len > s2_len)
//	{
//		len_max = s1_len;
//		len_min = s2_len;
//	}
//	else
//	{
//		len_max = s2_len;
//		len_min = s1_len;
//	}
//	if (len_max == s1_len)
//	{
//		if (isinit(s1, len_max, s2, len_min))
//		{
//			printf("%s is substring of %s", s2, s1);
//		}
//		else
//		{
//			printf("No substring");
//		}
//	}
//	else
//	{
//		if (isinit(s2, len_max, s1, len_min))
//		{
//			printf("%s is substring of %s", s1, s2);
//		}
//		else
//		{
//			printf("No substring");
//		}
//	}
//	return 0;
//}

// 1.7.19
//#define N 31
//#define INT_64 unsigned long long int
//int def(char*str1, char *str2)
//{
//    INT_64 str1_len = strlen(str1);
//    INT_64 str2_len = strlen(str2);
//    for (int i = 0; i<str1_len+str2_len; i++)
//    {
//        int j = 0;
//        for (j = 0; j<str2_len; j++)
//        {
//            if(( *(str1+ (i % str1_len) ) )!=(*(str2+j)))
//            {
//                i -= j;
//                break;
//            }
//            else
//            {
//                i++;
//                continue;
//            }
//        }
//        if(j==str2_len)
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//int main(void)
//{
//    char arr1[N] = "0";
//    scanf("%s", arr1);
//    char arr2[N] = "0";
//    scanf("%s", arr2);
//    if (strlen(arr1)>strlen(arr2))
//    {
//        if (def(arr1, arr2))
//        {
//            printf("true");
//        }
//        else
//        {
//            printf("false");
//        }
//    }
//    else
//    {
//        if (def(arr2, arr1))
//        {
//            printf("true");
//        }
//        else
//        {
//            printf("false");
//        }
//    }
//	return 0;
//}

// 1.7.20
//#define N 33
//#define uint64_t unsigned long long int
//char * def(char * str)
//{
//     uint64_t len = strlen(str);
//     if (*(str+len-2)=='e' && *(str+len-1)=='r')
//     {
//         *(str+len-2) = '\0';
//     }
//     else if(*(str+len-2)=='l' && *(str+len-1)=='y')
//     {
//         *(str+len-2) = '\0';
//     }
//     else if (*(str+len-3)=='i' && *(str+len-2)=='n' && *(str+len-1)=='g')
//     {
//         *(str+len-3) = '\0';
//     }
//     return str;
//}
//int main(void)
//{
//    char arr[N] = "0";
//    fgets(arr, sizeof arr, stdin);
//    arr[strlen(arr)-1] = '\0';
//    printf("%s", def(arr));
//}

// 1.7.21
int main()
{
    return 0;
}

// 1.8.01
//int main()
//{
//	int arr[5][5];
//	for (int h = 0; h < 5; h++)
//	{
//		for (int l = 0; l < 5; l++)
//		{
//			scanf("%d", &arr[h][l]);
//		}
//	}
//	int m, n;
//	scanf("%d%d", &m, &n);
//	for (int h = 0; h < 5; h++)
//	{
//		for (int l = 0; l < 5; l++)
//		{
//			if (h == m - 1)
//			{
//				printf("%d ", arr[n-1][l]);
//			}
//			else if (h == n - 1)
//			{
//				printf("%d ", arr[m-1][l]);
//			}
//			else
//			{
//				printf("%d ", arr[h][l]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//1.8.02
//int main()
//{
//	int n, i, j;
//	scanf("%d%d%d", &n, &i, &j);
//	for (int z = 1; z <= n; z++)
//	{
//		printf("(%d,%d) ", i, z);
//	}
//	printf("\n");
//	for (int z = 1; z <= n; z++)
//	{
//		printf("(%d,%d) ", z, j);
//	}
//	printf("\n");
//	for (int z = 1; z <= n; z++)
//	{
//		if (1 <= z + j - i && z + j - i<=n)
//			printf("(%d,%d) ", z, z+j-i);
//	}
//	printf("\n");
//	for (int z = 1; z <= n; z++)
//	{
//		if (1<=i + j - z && i + j - z<=n)
//			printf("(%d,%d) ", i+j-z, z);
//	}
//	printf("\n");
//	for (int z = 1; z <= n; z++)
//	return 0;
//}

//1.8.03
//int main()
//{
//	int arr[99][99];
//	int h_max = 0;
//	int l_max = 0;
//	int sum = 0;
//	scanf("%d%d", &h_max, &l_max);
//	for (int h = 0; h < h_max; h++)
//	{
//		for (int l = 0; l < l_max; l++)
//		{
//			scanf("%d", &arr[h][l]);
//			if ((0 == h) || (h_max - 1 == h) || (0 == l) || (l_max - 1 == l))
//			{
//				sum += arr[h][l];
//			}
//			
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//1.8.04
//int arr[99][99] = { 0 };
//int main()
//{
//	int h_arr[99] = { 0 };
//	int l_arr[99] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int h = 0; h < n; h++)
//	{
//		for (int l = 0; l < n; l++)
//		{
//			scanf("%d", &arr[h][l]);
//			if (1 == arr[h][l])
//			{
//				h_arr[h] += 1;
//				l_arr[l] += 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if ((0 == h_arr[i] % 2) && (0 == l_arr[i] % 2))
//		{
//			continue;
//		}
//		else
//		{
//
//		}
//	}
//	return 0;
//}

//1.8.09
//#define N 99
//int main()
//{
//    int a[N][N] = {0};
//    int b[N][N] = {0};
//    int re[N][N] = {0};
//    int n = 0, m = 0, k = 0;
//    scanf("%d%d%d", &n, &m, &k);
//    for (int h = 0; h < n; h++)
//    {
//        for (int l = 0; l < m; l++)
//        {
//            scanf("%d", &a[h][l]);
//        }
//    }
//    for (int h = 0; h < m; h++)
//    {
//        for (int l = 0; l < k; l++)
//        {
//            scanf("%d", &b[h][l]);
//        }
//    }
//    for (int j = 0; j < n; j++)
//    {
//        for (int p = 0; p < k; p++)
//        {
//            for (int i = 0; i < m;i++)
//            {
//                re[j][p] += a[j][i]*b[i][p];
//            }
//            printf("%d ", re[j][p]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


