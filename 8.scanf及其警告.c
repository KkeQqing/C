//#define _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("请输入a：");
//	//scanf("%d", &a);
//	scanf("%d", &a);
//	printf("\na为：%d", a);
//	return 0;
//}
////scanf警告原因及处理方法：
////scanf()在读取数据时不检查边界，所以可能会造成内存泄漏。Microsoft公司觉得这个函数不安全，
////于是自己在VS编译器中提供了scanf_s()这个函数，这个函数提供了边界限制。
////
////方法一：改为scanf_s()
////但，虽然这种方法可行，但并不推荐，因为编写程序要保证其有良好的可移植性，
////scanf_s这个函数是Microsoft自己定义的，在ANSI C中只有scanf()，没有scanf_s()，
////所以如果跨平台移植的话代码很可能会报错，找不到scanf_s这个函数，在移植时需要更改，
////这样的代码就失去了良好的可移植性，所以不做推荐。
////
////方法二：
////在代码的第一行加入这句话：#define _CRT_SECURE_NO_WARNINGS  1
////意即代码不进行SDL安全检查，这样就不会报错了，但代码还是会有警告
////再加入这句话：#pragma warning(disable:6031)
////
////一步到位的方法(修改源文件)：
////打开VS安装路径下的这个文件：newc++file.cpp
////打开文件后我们将这两句话复制进去后并且保存
////#define _CRT_SECURE_NO_WARNINGS  1
////#pragma warning(disable:6031)
////
////方法三：
////关闭SDL安全检查