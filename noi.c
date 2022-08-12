#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>

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
