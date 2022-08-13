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
//	unsigned int A, B;  //https://blog.csdn.net/weixin_43877387/article/details/118394375 https://baike.baidu.com/item/unsigned/8604216
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
