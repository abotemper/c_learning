#define _CRT_SECURE_NO_WARNINGS 1




//写一个代码
//hello world
//运行代码：ctrl+F5
//fn 辅助功能键
//FN + ctrl+ F5

//头文件的包含
//#include <stdio.h>
//
//int main()
//{
//	//打印hello world
//	//打印有打印函数，printf
//	//printf  是一个库函数，库函数的使用得包含一个头文件stdio.h
//
//	printf("hello world\n");
//
//	return 0;
//}
//

//写C语言代码的时候
//首先要知道main函数
//main函数是程序的入口
//程序是从main函数的第一行开始执行的
//按 F10代码从main函数的第一行开始执行
//main函数 - 主函数 有且仅有一个
//


//
//C语言是用来写代码的
//写代码是为了解决问题
//

//int main()
//{
//	//年龄
//	int age = 20;//使用int这种整型类型创建了一个变量叫age，并且赋值为20
//
//	age = age + 1;
//
//	//pai 3.1415
//	double pai = 3.141592653;
//
//	return 0;
//}

//
#include <stdio.h>

int main()
{
	//int age = 20;//age这个变量的创建其实是要在内存中开辟空间的
	////关键字：sizeof C语言中的sizeof是用来计算变量或者使用类型创建的变量的大小，单位是字节

	//printf("hello world\n");//打印字符串
	////printf("%d\n", 100);
	//printf("%d\n", age);//20

	//%d - 打印一个10进制的整数

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}
//

#include <stdio.h>
//
//
//int main()
//{
//	//char ch = 'w';//字符使用单引号引起来的
//	////'a'  'b' 'c'
//	//float weight;
//	//double pai;
//	//类型  变量名;
//
//	//C语言中为了描述变化的值，使用变量
//	//            不变的值，使用常量
//
//	//类型 变量名
//	//int age = 0;
//	////char c;
//	////变量在创建的时候，不初始化是一种不好的代码风格
//	////当一个[局部变量]不初始化的时候，他的值是随机的
//	//age = age + 1;
//	//printf("%d\n", age);
//
//	//char ch = 'w';
//
//
//
//	return 0;
//}


//{} 就是一个代码块
//在代码块内部定义的变量就是局部变量
//在代码块外部定义的变量就是全局变量

//int a = 100;//全局变量
//
//int main()
//{
//	int a = 10;//局部变量
//	//局部变量和全局变量的名字 冲突的情况下，局部优先
//	printf("%d\n", a);//
//
//	return 0;
//}
//

