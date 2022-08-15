#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>


//1.1.01
//int main()
//{
//	printf("Hello, World!");
//	return 0;
//}

//1.1.02
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d", b);
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
//	short b = '0';
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
//	long long int A, B;
//	printf("%u", A * B);
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

//1.4.14
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