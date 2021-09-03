#define _CRT_SECURE_NO_WARNINGS 1//这句话一定是放在源文件的第一行，以排除像scanf这类型不安全字符运行时发出警告而导致的运行终止

#include<stdio.h>//实用库函数要提前说明，#是一种指令形式，#include<stdio.h>则指的是包含一个叫stdio.h的文件
                 //std指标准standard，i指的是input，o表示output
                 //要写输入或输出函数时都要用到这个头文件



//“Hello World”的呈现

//int main()//主函数-程序的入口，一个工程中main函数有且仅有一个
//{
//	//俩个大括号之间写入要完成/执行的任务
//	printf("Hello World\n");//使用打印函数printf(print function)即可在屏幕上输入所需的文字
//	                        //printf是一个库函数——是C语言本身提供个用户使用的函数
//	return 0;
//}

//int 是整型
//main前面的int表示main函数调用返回一个整型值



//“A”字符形式的使用

//int main()
//{
//	char ch = 'A';//char是字符类型，ch指申请了一个空间（内存）用于储存字符，此时A就是要储存的字符，写作【ch='A'】
//	printf("%c\n", ch);//%c指的是打印字符格式的数据,此时则指使用字符形式打印ch
//	return 0;
//}



//表达一个人的年龄为18岁

//int main()
//{
//    int age = 18;
//    printf("%d\n",age);//%d指的是打印整型十进制数据
//    return 0;
//}



//%d 打印整型
//%c 打印字符
//%f 打印浮点数（小数）
//%p 以地址的形式打印
//%x 打印16进制数字



//整型的用法
//short——是短整型
//int——是整型
//long——是长整型，例如：
//int main()
//{
//    long num = 1420000000;
//    printf("%d\n", num);
//    return 0;
//}
//long long——是更长的整型
//float——是单精度浮点数，例如：
//int main()
//{
//    float f = 5.31;
//    printf("%f\n", f);//%f 是打印单精度浮点数
//    return 0;
// }
//double——是双精度浮点数,例如：
//int main()
//{
//    double d = 3.14;
//    printf("%lf\n", d);//%f 是打印双精度浮点数
//    return 0;
//}



//int main()
//{
//    //sizeof指的是***的大小（单位：字节）
//    printf("%d\n",sizeof(char));//此行表示 char的大小是 1个字节
//    printf("%d\n",sizeof(short));//此行表示 short的大小是 2个字节
//    printf("%d\n",sizeof(int));//此行表示 int的大小是 4个字节
//    printf("%d\n",sizeof(long));//此行表示 long的大小是 4或8个字节，注：C语言标准规定sizeof(long)≥sizeof(int)
//    printf("%d\n",sizeof(long long));//此行表示 long long的大小是 8个字节
//    printf("%d\n",sizeof(float));//此行表示 float的大小是 4个字节
//    printf("%d\n",sizeof(double));//此行表示 double的大小是 8个字节
//    printf("%d\n",sizeof(long double));//此行表示 long double的大小是 8个字节
//    return 0; 
//}

//字节，计算机中的单位
//计算机中的单位:Bit-比特位;Byte-字节;Kb;Mb;Gb;Tb;Pb……

//计算机是一个硬件，是通过 通电 完成运转的
//则计算机能识别的电信号是正电和负电，再转化成数字信号，则正电被转化成1，负电被转化成0
//所以计算机能识别01这种类型的指令，并且可以存起来
//一个比特位Bit只能存放一个1或者0
//1 Byte = 8 Bit
//1 Kb = 1024 Byte
//1 Mb = 1024 Kb
//1 Gb = 1024 Mb
//1 Tb = 1024 Gb
//1 Pb = 1024 Tb

//int main()
//{
//    short time = 15;//此行指 向内存申请 2个字节=16个比特位 用于储存15
//    float weight = 66.6f;//此行指 向内存申请 4个字节=32个比特位 用于储存小数
//                         //数值66.6后的f 是指只希望66.6用于单精度浮点型
//    
//    return 0;
//}



//变量与常量
//生活中不变的量叫常量
//生活中可变的量叫变量
//变量定义的方式：类型+变量名=赋予的值



//变量的分类：局部变量 和 全局变量，例如：
//第一种：
//int global=2021;//全局变量——定义在代码块（{}）外的变量
//int main()
//{
//    int local = 2020;//局部变量
//    //下面定义的global会不会有问题？
//    int global=2022;//局部变量——定义在代码块（{}）内的变量
//                    //局部变量和全局变量的名字建议不要相同——容易误会产生Bug
//                    //当局部变量和全局变量的名字相同时，局部变量优先表达
//    printf("%d\n", global);
//    return 0;
//}
//第二种：
//int num = 666;//全局变量，且此时全局变量可以全局使用（涉及作用域问题）
//int main()
//{
//    printf("%d\n", num);
//    return 0;
//}
//第三种：
//int main()
//{
//    {
//        int num = 666;//局部变量，此时此变量只能在本级代码块中使用，则上一级printf不起作用（涉及作用域问题）
//    }
//    printf("%d\n", num);// Bug：当前代码块无变量
//    return 0;
//}



//变量的使用

//计算两个数的相加模型：
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;//语言语法规定，变量要定义在当前代码块的最前端
//    printf("输入两个需要相加的数：>");
//    scanf("%d+%d", &num1, &num2);//scanf叫输入函数,符号&指取地址符号
//    sum = num1 + num2;
//    printf("两个数的和=%d\n", sum);//“两个数的和=”部分是打印输出时可顺便显示的文字
//    return 0;
//}



//变量的作用域和生命周期

//作用域（scope），程序设计概念，通常来说，一段程序代码中所用到的名字并不总是有效/可用的，二限定这个名字的可用性的代码范围就是这个名字的作用域
//1、局部变量的作用域是变量所在的局部范围
//2、全局变量的作用是 整个工程，例如：
// 第一种：
//int global = 2021;//全局变量
//void test()
//{
//    printf("Year=%d\n", global);
//}
//int main()
//{
//    test();
//    printf("%d\n", global);
//    return 0;
//}
//第二种：
//int main()
//{
//    extern int outside;//关键词extern用于声明，此处声明外部符号（源文件中的 外部代码.c 中的全局变量）
//    printf("%d\n", outside);
//    return 0;
//}

//变量的生命周期指的是变量的创建到变量的销毁之间的一段时间段
//局部变量的生命周期是：进入作用域（{）生命周期开始，出作用域（})生命周期结束
//全局变量的生命周期是：进入整个程序的生命周期



//常量

//常量,即不变的量
//C语言中的常量分为以下几种：
//1、字面常量，直接写出来的不可变的量，就是一个直接的值
//2、const修饰的常变量，const指的是常属性，如：
//int main()
//{
//    const int num = 2021;//此处num被const锁定为常量，所以此时num为const修饰的常变量,但注意：虽然num被const修饰后有了常属性，但num的本质还是变量！
//    printf("%d\n", num);
//    return 0;
//}
//相反：
//int main()
//{
//    int num = 2021;
//    printf("%d\n", num);
//    num = 2022;//此时num没被const锁定，可被改变
//    printf("%d\n", num);
//    return 0;
//}
//3、#define 定义的标识符常量，例如：
//        计算圆面积代码：
//#define PAI 3.14//此处#define 定义的标识符常量PAI即Π≈3.14
//int main()
//{
//	double fRadius;
//	double fResult=0;
//
//	printf("圆的半径为：\n");
//	scanf("%lf", &fRadius);
//
//	fResult = fRadius * fRadius * PAI;
//
//	printf("圆的面积为：%lf\n", fResult);
//	return 0;
//}
//4、枚举（就是一一列举的意思）常量，例如：
//enum Season//enum是枚举关键字，则放在枚举类型里的值称为枚举常量，并且枚举常量是不能被改的
//{
//    Spring,
//    Summer,
//    Autumn,
//    Winter
//};//此处大括号}后面的;不能省略
//int main()
//{
//    printf("%d\n", Spring);//0
//    printf("%d\n", Summer);//1
//    printf("%d\n", Autumn);//2
//    printf("%d\n", Winter);//3
//    return 0;
//}



//字符串+转义字符+注释
// 
// 字符串，是由""引起的内容
// 
//int main()
//{
//    char arr1[] = "ABC";//用char的数组（名字叫arr）用于储存字符串"ABC",此处字符串"ABC"放着'A'、'B'、'C'和一个隐藏'\0'（其实是字符串的结束标志）
//    char arr2[] = { 'A','B','C',0 };//用英文半角单引号所引的是字符，此处0就是'\0',如果不加入这种转义字符，打印时ABC后面还会有一些不知道的随机字符
//    printf("%s\n", arr1);//打印字符串用的是%s
//    printf("%s\n", arr2);
//    return 0;
//}
// 注：（ASCII编码，ASCII打印字符所对应的值称为ASCII码值，例子如下）
// '\0'的值是0
// a的值是97
// A的值是65
// ASCII——American Standard Code for Information Interchange 美国标准信息交换代码
//int main()
//{
//    char arr1[] = "ABC";
//    char arr2[] = { 'A','B','C',0 };
//    printf("%d\n", strlen(arr1));//strlen 即string length，用来计算字符串长度，此处arr1计算出来的长度为3
//    printf("%d\n", strlen(arr2));//arr2里面，若没有0或'\0'时计算出来的长度为15（事实上应该是随机值，长度不定，就是计算时直到遇见'\0'才会停止，则停止时的长度就为计算出来的长度）；如果存在0或'\0'时则计算出来的长度为3，与arr1计算出来的一样
//    return 0;
//}
//
// 转义字符
// 
// 
//
