/*--------------------------------------------------------------------------- */
/*       *****                       学习笔记                                  */
/*    ***         +        +         学习笔记                                  */
/*   **           +        +         学习笔记                                  */
/*  **         +++++++  +++++++      学习笔记                                  */
/*   **           +        +         学习笔记                                  */
/*    ***         +        +         学习笔记                                  */
/*       *****                       学习笔记                自180304-->       */
/*--------------------------------------------------------------------------- */


#include <iostream>
#include <string>

using namespace std;
int i224 = 999;
int i_224 = 999;
void t221(){
	//变量定义
	//cin >> int a;		//错误,不能使用定义符号
	int a = { 10 };
	int wage;
	double b = wage = 10;//wage必须先定义,未定义则错误
	cout << b << wage << endl;
}
void t222(){
	//变量声明的定义的关系
	//分离式编译机制
	/*声明使得名字为程序所知，一个文件如果想使用别处定义的
	名字则必须包含对那个名字的声明，而定义负责创建于名字关
	联的实体*/
	//extern int i = 10;错误，不允许对外部变量的局部声明
					  //使用初始值设定项
	extern int i;//声明i但是不定义i
	int j;//声明并定义了j
}
void t223(){
	//标识符
	//变量命名规范
}
void t224(){
	//名字的作用域
	cout << i224 << endl;//在代码顶端定义了全局变量i224
	int i224 = 888;//新建局部变量i224,覆盖了全局变量i224
				   //并没有改变全局变量的值
	cout << i224 << endl;
	cout << ::i224 << endl;//显式的访问全局变量
	//输出结果为999 888 999 
	int i_224 = 100; 
	int j = i_224;
	cout << j << endl;
}
void t230(){
	//复合类型
}
void t231(){
	//引用（严格来说是‘左值引用’，C++11中新增了所谓的‘右值引用’）
	//在t1361中可以详细了解‘右值引用’
	int a = 999;
	int &b = a;//b指向a（是a的另一个名字）
	//int &b;//报错：引用必须被初始化
	//程序把引用和他的初始值绑定在一起，如下
	cout << "改变之前：" << b << endl;
	a = 888;
	cout << "改变之后：" << b << endl;
	b = 999;
	cout << "改变引用：" << a << endl;
	int &c = b;//这是在以b绑定的对象作为初始值
	//int &a = 10; 错误：引用类型的初始值必须是一个对象
				   //而且引用的类型也必须一样
	//但是有两个例外,第一种例外是只要该表达式的结果能转化成引用的类型即可
	//第二种是允许为一个常量引用绑定非常量的对象，字面值，甚至是一个一般表达式
	//如下
	int i = 42;
	const int &r1 = i;
	const int &r2 = 42;
	const int &r3 = r1 * 2;
	//int &r4 = r1 * 2;错误,r4是一个普通的非常量引用


}
void t232(){
	//指针
	/*指针与引用类似实现了对其他对象的间接访问，但是有许多的不同点
	 1.指针本身就是一个对象，允许对指针赋值和拷贝，在他的生命周期中可以先后指向开个不同的对象
	 2.指针无需再定义时赋初值，和其他内置类型一样
	 3.即使是有经验的程序员也常常因为调试指针引发的错误而备受折磨（+_+）
	 4.指针不能指向引用
	 5.解引用符（“*”）
	 6.不能把int变量直接赋给指针
	 7.对于任何非0指针对应的条件值都是true
	 8.void* 指针*/
	int a = 999;
	int *p = &a;
	int *p1 = p;//p1和p指向同一个对象a
	cout << "a:" << a << "\t" << "p:" << p << "\tp1:" << p1 << endl;
	cout << "*p:" << *p << "\t*p1:" << *p1 << endl;
	int &r2 = *p1;//&是声明的一部分，*是一个解引用符
	int *p3 = nullptr;
	cout << "p3:" << p3 << endl;//定义空指针
	//cout << "*p3:" << *p3 << endl;此处提示错误
	int *p4 = NULL;
	cout << "*p4:" << p4 << endl;
	//int *p5;
	//cout << "p5:" << p5 << endl;未初始化的指针不能通过编译
	//指向指针的指针
	int q1 = 999;
	int *q2 = &q1;
	int **q3 = &q2;
	cout << "q2:" << q2 << "\tq3:" << q3 << endl;
		//q2,q3 的地址不一样,同样的需要解引的化也要运用两次解引用符
	//指向指针的引用
	int w = 99;
	int *w1 = &w;
	int *&w2 = w1;//W2是对指针w1的引用
	*w2 = 100;// 改变*w2的值w 的值也会随着改变
	cout << "w:" << w << endl;

}
void t233() {
	//理解复合类型的声明
	//变量的定义包括一个基本数据类型和一组声明符
}
void t240() {
	//const限定符
	//const 对对象一旦创建后其值不能再改变。所以const对象必须初始化
	//初始化可以是任意复杂的表达式
	//如果想在多个文件夹之间共享const对象，必须在变量的定义之前添加extern关键字
}
void t241() {
	//const 的引用
	//可以吧引用绑定在const对象上，我们称之为 对常量的引用，同样的也不能修改
	//const int a = 99;
	//int &b = a;错误，不能让一个非常量引用指向一个常量对象,必须同时有const 限定符
	//但是有两个例外,第一种例外是只要该表达式的结果能转化成引用的类型即可
	//第二种是允许为一个常量引用绑定非常量的对象，字面值，甚至是一个一般表达式
	//如下
	int i = 42;
	const int &r1 = i;
	const int &r2 = 42;
	const int &r3 = r1 * 2;
	//int &r4 = r1 * 2;错误,r4是一个普通的非常量引用
}
void t242() {
	//指针和const
	//与引用一样，也可以令指针指向常量或者非常量但不能改变所指对象的值
	const double pi = 3.14;
	//double *ptr = &pi;错误
	const double *cptr = &pi;
	//*cptr = 42;错误
	//和引用差不多，指针的类型必须与其所指的对象的类型一致
	//也有两个例外
	//const指针（常量指针）必须初始化，则指针的地址不能被改变，定义的方法是把
	//“*”放到const限定词的前面(顶层const)，如下：
	int a = 99;
	int *const p = &a;//p将一直指向a
	//但是所指向的那个对象的值可以被改变，取决于所指对象的类型
	*p = 100;
}
	/*综合241和242两个例子来说，所谓指向常量的指针后者引用，不过是指针或引用
	“自以为是”罢了，他们自己觉得自己指向了常量，所以自觉地不去改变所指对象的值
	所谓的指向常量的指针或者引用仅仅要求不能通过该指针改变的对象的值，而没有规定
	那个对象的值不能通过其他的途径改变------------>>>>>>>>>>>>>>>*/
void t243() {
	//顶层const
	//用名词顶层表示指针本身是个常量，用名词底层表示指针所指的对象是一个常量
	int i = 0;
	int *const p1 = &i;//不能改p1的值，因为这是个顶层const
	const int ci = 42;//不能改变c1的值，只是个顶层const
	const int *p2 = &ci;//允许改变p2的值，这是一个底层const
	const int *const p3 = p2;
	const int &r = ci;//用于声明引用的const都是底层const
}
void t240() {
	//constexpr变量和常量表达式
	//常量表达式是指值不会改变并且在编译过程就能得到计算结果的表达式
	const int a = 20;//这是个常量表达式
	const int b = a + 1;//这是个常量表达式
	//const int c = get();这不是个常量表达式，因为他的具体值直到运行时才能获取到
	int d = 10;//不是常量表达式,因为他的数据类型只是一个普通int并非const int
	/*c++11中规定，未看完<<<<------------>>>>>>他妈的怎么这么复杂，跳过*/
}
void t250() {
	//处理类型
}
/*		|     
		| P
		| A
		| S
		| S
		|
		| 
		| P
		| A
		| S
		| S
		|
		|
		|*/	
void t263() {
	//编写自己的头文件
	/*为了确保各个文件中类的定义一致，类通常被定义在头文件中，
	而且类所在的头文件的名字应于类的名字一样*/
}
int main()
{
	t232();
	system("pause");	
	return 0;
}

