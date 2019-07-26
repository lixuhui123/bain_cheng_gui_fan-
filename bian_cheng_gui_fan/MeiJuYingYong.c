//#include<stdio.h>
//#include <stdlib.h>
//enum Months { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
//int main(void)
//{
//	enum Months m;
//	//flag用来标记输出的个数，若为4个，则输出一个换行符
//	int flag = 0;
//	//指针数组，存放的是个字符串的入口地址
//	char *months[] = { "January","February","March","April","May","June",
//		  "July","August","September","October","November","December" };
//	for (m = jan; m <= dec; m++)
//	{
//		printf("%-d月份:%-10s ", m, months[m - 1]);
//		flag++;
//		if (flag % 4 == 0)
//		{
//			putchar('\n');
//		}
//	}
//	system("pause");
//	return 0;
//}