<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1//这句话一定是放在源文件的第一行,用于消除vs觉得的scanf之类的语言不安全发出的警告

#include<stdio.h>//实用库函数要提前说明，#是一种指令形式，#include<stdio.h>则指的是包含一个叫stdio.h的文件
                 //std指标准standard，i指的是input，o表示output
                 //要写输入或输出函数时都要用到这个头文件

#include<stdbool.h>//布尔类型的头文件，用了#include<stdbool.h>才能使用ture和false


//“Hello World”的呈现
//
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
//
//int main()
//{
//	char ch = 'A';//char是字符类型，ch指申请了一个空间（内存）用于储存字符，此时A就是要储存的字符，写作【ch='A'】
//	printf("%c\n", ch);//%c指的是打印字符格式的数据,此时则指使用字符形式打印ch
//	return 0;
//}



//表达一个人的年龄为18岁
//
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
//
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
//
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
//
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
//#include<string.h>//使用strlen时要用到的头文件
// int main()
//{
//    char arr1[] = "ABC";
//    char arr2[] = { 'A','B','C',0 };
//    printf("%d\n", strlen(arr1));//strlen 即string length，用来计算字符串长度，此处arr1计算出来的长度为3
//    printf("%d\n", strlen(arr2));//arr2里面，若没有0或'\0'时计算出来的长度为15（事实上应该是随机值，长度不定，就是计算时直到遇见'\0'才会停止，则停止时的长度就为计算出来的长度）；如果存在0或'\0'时则计算出来的长度为3，与arr1计算出来的一样
//    return 0;
//}
//
// 转义字符，即转变原来字符的意思，例如：
// \0即结束
// \n即换行
// \t即水平制表符，即       （即Tab键，6-8个空格）这一段距离
// \r即回车
// \ddd——ddd表示1-3个八进制的数字
// \xdd——dd表示2个十六进制的数字（注：dd前的x是必打的）
// ……
// 书写代码时应该避开转义字符，否则就会有错误，例如：
//原先写法：
//int main()
//{
//    printf("C:\test\2021\test.c");//此时被误会打印成C:      est?    est.c文段
//    return 0;
//}
// 然而正确写法为：
//int main()
//{
//    printf("C:\\test\\2021\\test.c");//这样才能打印出所需的C:\test\2021\test.c文段
//    return 0;
//}
// 如上所述可知：防止被识别成三字母词，需要使用\在容易误会部分前，以避开误会，例如：
//第一种：
//打印一个字符串，字符串的内容是一个双引号"
//int main()
//{
//    printf("%s\n", "\"");//此处使用\避开"""产生的误会，从而正常打印所需的"
//    return 0;
//}
//第二种：
//打印一个单引号'
//int main()
//{
//    printf("%c\n",'\'');
//    return 0;
//}
// 
// 注释
// C++的注释风格为 //………………
// C语言的注释风格为 /*…………*/，注意：这不能嵌套注释
// 
// 
// 
// 选择语句——if……else……（=如果……就……）
// 例如：
//int main()
//{
//    int input = 0;
//    printf("Are you OK?\n");
//    printf("Please type 1(yes) or 0(no) :>(0/1)\n");
//    scanf("%d", &input);//输入yes或者no
//
//    if (input == 1)
//        printf("You are right!\n");
//    else
//        printf("No problem!\n");//注意：else以下只能有一个代码
//    return 0;
//}
//
// 
// 
// 循环语句：
// 
// while语句 （=当……就……）:
// while(<循环条件>)
// {
//     <循环体语句>
// }
// 
// for语句（=对于……，……）:
// for(<循环条件（初始动作;循环继续的条件;循环每轮要做的动作）>)
// {
//     <循环体语句>
// }
// 例如：
//如何用代码计算n!(n的阶乘)
//int main()
//{
//	int n;//阶乘的层数
//
//	printf("请输入你想计算的阶乘(仅填阶乘的数)：>\n");
//	scanf("%d", &n);
//
//	int a = 1;//阶乘的初始值为1
//	int b = 1;
//	for (a = 1; a <= n; a++)//a=1是初始动作;a<=n是循环继续的条件;a++是驯化按每轮要做的动作
//	{
//		b *= a;//等价于 b = b*a
//	}
//
//
//	printf("%d!=%d\n", n, b);
//	return 0;
//}
// 
// do……while语句：
// do
// {
//     <循环体语句>
// }while(<循环条件>);//do…while语句后面的分号;不能省略！！！
// 
// 例如：
//int main()
//{
//    printf("进入大厂\n");
//    int line = 0;
//    while (line < 20000)
//    {
//        line++;
//        printf("敲多一行代码：%d\n", line);
//
//    }
//    if (line >= 20000)
//        printf("可以得到一份好Offer\n");
//    return 0;
//}
// 
// 
// 
// 函数
// 
// 
// 
// 数组
// 
// 
// 
// 操作符
// 
// 
//
=======
#define _CRT_SECURE_NO_WARNINGS 1//杩欏彞璇濅竴瀹氭槸鏀惧湪婧愭枃浠剁殑绗竴琛岋紝浠ユ帓闄ゅ儚scanf杩欑被鍨嬩笉瀹夊叏瀛楃杩愯鏃跺彂鍑鸿鍛婅?屽鑷寸殑杩愯缁堟

#include<stdio.h>//瀹炵敤搴撳嚱鏁拌鎻愬墠璇存槑锛?#鏄竴绉嶆寚浠ゅ舰寮忥紝#include<stdio.h>鍒欐寚鐨勬槸鍖呭惈涓?涓彨stdio.h鐨勬枃浠?
                 //std鎸囨爣鍑唖tandard锛宨鎸囩殑鏄痠nput锛宱琛ㄧずoutput
                 //瑕佸啓杈撳叆鎴栬緭鍑哄嚱鏁版椂閮借鐢ㄥ埌杩欎釜澶存枃浠?



//鈥淗ello World鈥濈殑鍛堢幇

//int main()//涓诲嚱鏁?-绋嬪簭鐨勫叆鍙ｏ紝涓?涓伐绋嬩腑main鍑芥暟鏈変笖浠呮湁涓?涓?
//{
//	//淇╀釜澶ф嫭鍙蜂箣闂村啓鍏ヨ瀹屾垚/鎵ц鐨勪换鍔?
//	printf("Hello World\n");//浣跨敤鎵撳嵃鍑芥暟printf(print function)鍗冲彲鍦ㄥ睆骞曚笂杈撳叆鎵?闇?鐨勬枃瀛?
//	                        //printf鏄竴涓簱鍑芥暟鈥斺?旀槸C璇█鏈韩鎻愪緵涓敤鎴蜂娇鐢ㄧ殑鍑芥暟
//	return 0;
//}

//int 鏄暣鍨?
//main鍓嶉潰鐨刬nt琛ㄧずmain鍑芥暟璋冪敤杩斿洖涓?涓暣鍨嬪??



//鈥淎鈥濆瓧绗﹀舰寮忕殑浣跨敤

//int main()
//{
//	char ch = 'A';//char鏄瓧绗︾被鍨嬶紝ch鎸囩敵璇蜂簡涓?涓┖闂达紙鍐呭瓨锛夌敤浜庡偍瀛樺瓧绗︼紝姝ゆ椂A灏辨槸瑕佸偍瀛樼殑瀛楃锛屽啓浣溿?恈h='A'銆?
//	printf("%c\n", ch);//%c鎸囩殑鏄墦鍗板瓧绗︽牸寮忕殑鏁版嵁,姝ゆ椂鍒欐寚浣跨敤瀛楃褰㈠紡鎵撳嵃ch
//	return 0;
//}



//琛ㄨ揪涓?涓汉鐨勫勾榫勪负18宀?

//int main()
//{
//    int age = 18;
//    printf("%d\n",age);//%d鎸囩殑鏄墦鍗版暣鍨嬪崄杩涘埗鏁版嵁
//    return 0;
//}



//%d 鎵撳嵃鏁村瀷
//%c 鎵撳嵃瀛楃
//%f 鎵撳嵃娴偣鏁帮紙灏忔暟锛?
//%p 浠ュ湴鍧?鐨勫舰寮忔墦鍗?
//%x 鎵撳嵃16杩涘埗鏁板瓧



//鏁村瀷鐨勭敤娉?
//short鈥斺?旀槸鐭暣鍨?
//int鈥斺?旀槸鏁村瀷
//long鈥斺?旀槸闀挎暣鍨嬶紝渚嬪锛?
//int main()
//{
//    long num = 1420000000;
//    printf("%d\n", num);
//    return 0;
//}
//long long鈥斺?旀槸鏇撮暱鐨勬暣鍨?
//float鈥斺?旀槸鍗曠簿搴︽诞鐐规暟锛屼緥濡傦細
//int main()
//{
//    float f = 5.31;
//    printf("%f\n", f);//%f 鏄墦鍗板崟绮惧害娴偣鏁?
//    return 0;
// }
//double鈥斺?旀槸鍙岀簿搴︽诞鐐规暟,渚嬪锛?
//int main()
//{
//    double d = 3.14;
//    printf("%lf\n", d);//%f 鏄墦鍗板弻绮惧害娴偣鏁?
//    return 0;
//}



//int main()
//{
//    //sizeof鎸囩殑鏄?***鐨勫ぇ灏忥紙鍗曚綅锛氬瓧鑺傦級
//    printf("%d\n",sizeof(char));//姝よ琛ㄧず char鐨勫ぇ灏忔槸 1涓瓧鑺?
//    printf("%d\n",sizeof(short));//姝よ琛ㄧず short鐨勫ぇ灏忔槸 2涓瓧鑺?
//    printf("%d\n",sizeof(int));//姝よ琛ㄧず int鐨勫ぇ灏忔槸 4涓瓧鑺?
//    printf("%d\n",sizeof(long));//姝よ琛ㄧず long鐨勫ぇ灏忔槸 4鎴?8涓瓧鑺傦紝娉細C璇█鏍囧噯瑙勫畾sizeof(long)鈮izeof(int)
//    printf("%d\n",sizeof(long long));//姝よ琛ㄧず long long鐨勫ぇ灏忔槸 8涓瓧鑺?
//    printf("%d\n",sizeof(float));//姝よ琛ㄧず float鐨勫ぇ灏忔槸 4涓瓧鑺?
//    printf("%d\n",sizeof(double));//姝よ琛ㄧず double鐨勫ぇ灏忔槸 8涓瓧鑺?
//    printf("%d\n",sizeof(long double));//姝よ琛ㄧず long double鐨勫ぇ灏忔槸 8涓瓧鑺?
//    return 0; 
//}

//瀛楄妭锛岃绠楁満涓殑鍗曚綅
//璁＄畻鏈轰腑鐨勫崟浣?:Bit-姣旂壒浣?;Byte-瀛楄妭;Kb;Mb;Gb;Tb;Pb鈥︹??

//璁＄畻鏈烘槸涓?涓‖浠讹紝鏄?氳繃 閫氱數 瀹屾垚杩愯浆鐨?
//鍒欒绠楁満鑳借瘑鍒殑鐢典俊鍙锋槸姝ｇ數鍜岃礋鐢碉紝鍐嶈浆鍖栨垚鏁板瓧淇″彿锛屽垯姝ｇ數琚浆鍖栨垚1锛岃礋鐢佃杞寲鎴?0
//鎵?浠ヨ绠楁満鑳借瘑鍒?01杩欑绫诲瀷鐨勬寚浠わ紝骞朵笖鍙互瀛樿捣鏉?
//涓?涓瘮鐗逛綅Bit鍙兘瀛樻斁涓?涓?1鎴栬??0
//1 Byte = 8 Bit
//1 Kb = 1024 Byte
//1 Mb = 1024 Kb
//1 Gb = 1024 Mb
//1 Tb = 1024 Gb
//1 Pb = 1024 Tb

//int main()
//{
//    short time = 15;//姝よ鎸? 鍚戝唴瀛樼敵璇? 2涓瓧鑺?=16涓瘮鐗逛綅 鐢ㄤ簬鍌ㄥ瓨15
//    float weight = 66.6f;//姝よ鎸? 鍚戝唴瀛樼敵璇? 4涓瓧鑺?=32涓瘮鐗逛綅 鐢ㄤ簬鍌ㄥ瓨灏忔暟
//                         //鏁板??66.6鍚庣殑f 鏄寚鍙笇鏈?66.6鐢ㄤ簬鍗曠簿搴︽诞鐐瑰瀷
//    
//    return 0;
//}



//鍙橀噺涓庡父閲?
//鐢熸椿涓笉鍙樼殑閲忓彨甯搁噺
//鐢熸椿涓彲鍙樼殑閲忓彨鍙橀噺
//鍙橀噺瀹氫箟鐨勬柟寮忥細绫诲瀷+鍙橀噺鍚?=璧嬩簣鐨勫??



//鍙橀噺鐨勫垎绫伙細灞?閮ㄥ彉閲? 鍜? 鍏ㄥ眬鍙橀噺锛屼緥濡傦細
//绗竴绉嶏細
//int global=2021;//鍏ㄥ眬鍙橀噺鈥斺?斿畾涔夊湪浠ｇ爜鍧楋紙{}锛夊鐨勫彉閲?
//int main()
//{
//    int local = 2020;//灞?閮ㄥ彉閲?
//    //涓嬮潰瀹氫箟鐨刧lobal浼氫笉浼氭湁闂锛?
//    int global=2022;//灞?閮ㄥ彉閲忊?斺?斿畾涔夊湪浠ｇ爜鍧楋紙{}锛夊唴鐨勫彉閲?
//                    //灞?閮ㄥ彉閲忓拰鍏ㄥ眬鍙橀噺鐨勫悕瀛楀缓璁笉瑕佺浉鍚屸?斺?斿鏄撹浼氫骇鐢烞ug
//                    //褰撳眬閮ㄥ彉閲忓拰鍏ㄥ眬鍙橀噺鐨勫悕瀛楃浉鍚屾椂锛屽眬閮ㄥ彉閲忎紭鍏堣〃杈?
//    printf("%d\n", global);
//    return 0;
//}
//绗簩绉嶏細
//int num = 666;//鍏ㄥ眬鍙橀噺锛屼笖姝ゆ椂鍏ㄥ眬鍙橀噺鍙互鍏ㄥ眬浣跨敤锛堟秹鍙婁綔鐢ㄥ煙闂锛?
//int main()
//{
//    printf("%d\n", num);
//    return 0;
//}
//绗笁绉嶏細
//int main()
//{
//    {
//        int num = 666;//灞?閮ㄥ彉閲忥紝姝ゆ椂姝ゅ彉閲忓彧鑳藉湪鏈骇浠ｇ爜鍧椾腑浣跨敤锛屽垯涓婁竴绾rintf涓嶈捣浣滅敤锛堟秹鍙婁綔鐢ㄥ煙闂锛?
//    }
//    printf("%d\n", num);// Bug锛氬綋鍓嶄唬鐮佸潡鏃犲彉閲?
//    return 0;
//}



//鍙橀噺鐨勪娇鐢?

//璁＄畻涓や釜鏁扮殑鐩稿姞妯″瀷锛?
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;//璇█璇硶瑙勫畾锛屽彉閲忚瀹氫箟鍦ㄥ綋鍓嶄唬鐮佸潡鐨勬渶鍓嶇
//    printf("杈撳叆涓や釜闇?瑕佺浉鍔犵殑鏁帮細>");
//    scanf("%d+%d", &num1, &num2);//scanf鍙緭鍏ュ嚱鏁?,绗﹀彿&鎸囧彇鍦板潃绗﹀彿
//    sum = num1 + num2;
//    printf("涓や釜鏁扮殑鍜?=%d\n", sum);//鈥滀袱涓暟鐨勫拰=鈥濋儴鍒嗘槸鎵撳嵃杈撳嚭鏃跺彲椤轰究鏄剧ず鐨勬枃瀛?
//    return 0;
//}



//鍙橀噺鐨勪綔鐢ㄥ煙鍜岀敓鍛藉懆鏈?

//浣滅敤鍩燂紙scope锛夛紝绋嬪簭璁捐姒傚康锛岄?氬父鏉ヨ锛屼竴娈电▼搴忎唬鐮佷腑鎵?鐢ㄥ埌鐨勫悕瀛楀苟涓嶆?绘槸鏈夋晥/鍙敤鐨勶紝浜岄檺瀹氳繖涓悕瀛楃殑鍙敤鎬х殑浠ｇ爜鑼冨洿灏辨槸杩欎釜鍚嶅瓧鐨勪綔鐢ㄥ煙
//1銆佸眬閮ㄥ彉閲忕殑浣滅敤鍩熸槸鍙橀噺鎵?鍦ㄧ殑灞?閮ㄨ寖鍥?
//2銆佸叏灞?鍙橀噺鐨勪綔鐢ㄦ槸 鏁翠釜宸ョ▼锛屼緥濡傦細
// 绗竴绉嶏細
//int global = 2021;//鍏ㄥ眬鍙橀噺
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
//绗簩绉嶏細
//int main()
//{
//    extern int outside;//鍏抽敭璇峞xtern鐢ㄤ簬澹版槑锛屾澶勫０鏄庡閮ㄧ鍙凤紙婧愭枃浠朵腑鐨? 澶栭儴浠ｇ爜.c 涓殑鍏ㄥ眬鍙橀噺锛?
//    printf("%d\n", outside);
//    return 0;
//}

//鍙橀噺鐨勭敓鍛藉懆鏈熸寚鐨勬槸鍙橀噺鐨勫垱寤哄埌鍙橀噺鐨勯攢姣佷箣闂寸殑涓?娈垫椂闂存
//灞?閮ㄥ彉閲忕殑鐢熷懡鍛ㄦ湡鏄細杩涘叆浣滅敤鍩燂紙{锛夌敓鍛藉懆鏈熷紑濮嬶紝鍑轰綔鐢ㄥ煙锛坿)鐢熷懡鍛ㄦ湡缁撴潫
//鍏ㄥ眬鍙橀噺鐨勭敓鍛藉懆鏈熸槸锛氳繘鍏ユ暣涓▼搴忕殑鐢熷懡鍛ㄦ湡



//甯搁噺

//甯搁噺,鍗充笉鍙樼殑閲?
//C璇█涓殑甯搁噺鍒嗕负浠ヤ笅鍑犵锛?
//1銆佸瓧闈㈠父閲忥紝鐩存帴鍐欏嚭鏉ョ殑涓嶅彲鍙樼殑閲忥紝灏辨槸涓?涓洿鎺ョ殑鍊?
//2銆乧onst淇グ鐨勫父鍙橀噺锛宑onst鎸囩殑鏄父灞炴?э紝濡傦細
//int main()
//{
//    const int num = 2021;//姝ゅnum琚玞onst閿佸畾涓哄父閲忥紝鎵?浠ユ鏃秐um涓篶onst淇グ鐨勫父鍙橀噺,浣嗘敞鎰忥細铏界劧num琚玞onst淇グ鍚庢湁浜嗗父灞炴?э紝浣唍um鐨勬湰璐ㄨ繕鏄彉閲忥紒
//    printf("%d\n", num);
//    return 0;
//}
//鐩稿弽锛?
//int main()
//{
//    int num = 2021;
//    printf("%d\n", num);
//    num = 2022;//姝ゆ椂num娌¤const閿佸畾锛屽彲琚敼鍙?
//    printf("%d\n", num);
//    return 0;
//}
//3銆?#define 瀹氫箟鐨勬爣璇嗙甯搁噺锛屼緥濡傦細
//        璁＄畻鍦嗛潰绉唬鐮侊細
//#define PAI 3.14//姝ゅ#define 瀹氫箟鐨勬爣璇嗙甯搁噺PAI鍗澄犫増3.14
//int main()
//{
//	double fRadius;
//	double fResult=0;
//
//	printf("鍦嗙殑鍗婂緞涓猴細\n");
//	scanf("%lf", &fRadius);
//
//	fResult = fRadius * fRadius * PAI;
//
//	printf("鍦嗙殑闈㈢Н涓猴細%lf\n", fResult);
//	return 0;
//}
//4銆佹灇涓撅紙灏辨槸涓?涓?鍒椾妇鐨勬剰鎬濓級甯搁噺锛屼緥濡傦細
//enum Season//enum鏄灇涓惧叧閿瓧锛屽垯鏀惧湪鏋氫妇绫诲瀷閲岀殑鍊肩О涓烘灇涓惧父閲忥紝骞朵笖鏋氫妇甯搁噺鏄笉鑳借鏀圭殑
//{
//    Spring,
//    Summer,
//    Autumn,
//    Winter
//};//姝ゅ澶ф嫭鍙穧鍚庨潰鐨?;涓嶈兘鐪佺暐
//int main()
//{
//    printf("%d\n", Spring);//0
//    printf("%d\n", Summer);//1
//    printf("%d\n", Autumn);//2
//    printf("%d\n", Winter);//3
//    return 0;
//}



//瀛楃涓?+杞箟瀛楃+娉ㄩ噴
// 
// 瀛楃涓诧紝鏄敱""寮曡捣鐨勫唴瀹?
// 
//int main()
//{
//    char arr1[] = "ABC";//鐢╟har鐨勬暟缁勶紙鍚嶅瓧鍙玜rr锛夌敤浜庡偍瀛樺瓧绗︿覆"ABC",姝ゅ瀛楃涓?"ABC"鏀剧潃'A'銆?'B'銆?'C'鍜屼竴涓殣钘?'\0'锛堝叾瀹炴槸瀛楃涓茬殑缁撴潫鏍囧織锛?
//    char arr2[] = { 'A','B','C',0 };//鐢ㄨ嫳鏂囧崐瑙掑崟寮曞彿鎵?寮曠殑鏄瓧绗︼紝姝ゅ0灏辨槸'\0',濡傛灉涓嶅姞鍏ヨ繖绉嶈浆涔夊瓧绗︼紝鎵撳嵃鏃禔BC鍚庨潰杩樹細鏈変竴浜涗笉鐭ラ亾鐨勯殢鏈哄瓧绗?
//    printf("%s\n", arr1);//鎵撳嵃瀛楃涓茬敤鐨勬槸%s
//    printf("%s\n", arr2);
//    return 0;
//}
// 娉細锛圓SCII缂栫爜锛孉SCII鎵撳嵃瀛楃鎵?瀵瑰簲鐨勫?肩О涓篈SCII鐮佸?硷紝渚嬪瓙濡備笅锛?
// '\0'鐨勫?兼槸0
// a鐨勫?兼槸97
// A鐨勫?兼槸65
// ASCII鈥斺?擜merican Standard Code for Information Interchange 缇庡浗鏍囧噯淇℃伅浜ゆ崲浠ｇ爜
//int main()
//{
//    char arr1[] = "ABC";
//    char arr2[] = { 'A','B','C',0 };
//    printf("%d\n", strlen(arr1));//strlen 鍗硈tring length锛岀敤鏉ヨ绠楀瓧绗︿覆闀垮害锛屾澶刟rr1璁＄畻鍑烘潵鐨勯暱搴︿负3
//    printf("%d\n", strlen(arr2));//arr2閲岄潰锛岃嫢娌℃湁0鎴?'\0'鏃惰绠楀嚭鏉ョ殑闀垮害涓?15锛堜簨瀹炰笂搴旇鏄殢鏈哄?硷紝闀垮害涓嶅畾锛屽氨鏄绠楁椂鐩村埌閬囪'\0'鎵嶄細鍋滄锛屽垯鍋滄鏃剁殑闀垮害灏变负璁＄畻鍑烘潵鐨勯暱搴︼級锛涘鏋滃瓨鍦?0鎴?'\0'鏃跺垯璁＄畻鍑烘潵鐨勯暱搴︿负3锛屼笌arr1璁＄畻鍑烘潵鐨勪竴鏍?
//    return 0;
//}
//
// 杞箟瀛楃
// 
// 
//
>>>>>>> program
