#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void print(student* s)
{
	//结构体传参，打印结构体内的信息
	printf("%s\n", s->name);
}
struct Student
{
	char name[20];
	long long  id;
	int math;
};
typedef struct Student student;
int main()
{
	
	student s = { "lixuhui", 17040413109, 100 };
	print(&s);
	system("pause");
	return 0;
}



#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {

	//定义结构体类型
	struct Person
	{
		char *name;
		int age;
		double heigth;
	};

	//初始化的4种方式

	//1.定义的同时初始化
	struct Person p1 = { "zhangsan",20,170 };

	//2.先定义再逐个初始化
	struct Person p2;
	p2.name = "ykd";
	p2.age = 18;
	p2.heigth = 180;

	//3.先定义再一次性初始化
	struct Person p3;
	p3 = (struct Person) { "lisi", 18, 180 };

	//注意：结构体和数组在这里的区别，数组不能先定义再进行一次性初始化
	//结构体要明确的告诉系统{}中是一个结构体

	//4.指定将数据赋值给指定的属性
	struct Person p4 = { .heigth = 1.77,.name = "wangwu",.age = 33 };


	//如何从结构体中取数据？
	printf("name=%s,age=%i,heigth=%f\n", p4.name, p4.age, p4.heigth); //name=wangwu,age=33,heigth=1.770000

	system("pause");
	return 0;
}
