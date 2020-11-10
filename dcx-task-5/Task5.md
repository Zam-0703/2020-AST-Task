结构体注意:

如果成员是字符数组，则不可以直接使用赋值运算符直接对变量的成员赋值。eg:stu1.name=“王霞”错误,要strcpy(stu1.name,“王霞”)；

不能整体引用结构体变量

直接用=拷贝结构体变量是浅拷贝,会同时修改

###### 成员对齐

自然对界,未定义变量,默认对齐size最大的变量

指定对界,用伪指令改变缺省的对界条件

使用伪指令#pragma pack (n)，编译器将按照n个字节对齐；若n大于最大zize,则不起作用
使用伪指令#pragma pack ()，取消自定义字节对齐方式。

###### struct和typedef struct:(typedef用来取别名的)

###### [enum的使用](https://blog.csdn.net/lileiyuyanqin/article/details/86149236)

typedef struct Student
{
　int a;
}Stu;(这里的Stu实际上就是struct Student的别名。Stu==struct Student)
声明变量的时候就可：Stu stu1;&struct Student stu1

若无Student:

typedef struct 

{
　int a;

}Stu;

只能Stu stu1;

c中如果没有typedef,必须struct Student stu1

如果没有typedef和student,声明了Stu,但是如果还想要别的同类型变量,要在后面加,也就				是说没有专门用来声明的式子

但在c++中
struct Student
{
　int a;
};　　　　
于是就定义了结构体类型Student，声明变量时直接Student stu1；

而如果:

struct Student

{
　int a;
}stu1;

stu1是一个变量,可以直接stu1.a访问

typedef struct Student

{
　int a;
}stu1;stu1还是别名

###### typedef还可以用来给别的数据类型取别名

###### 联合体:

结构体用途：把不同类型的数据组合成一个整体-------自定义数据类型

联合体用途：使几个不同类型的变量共占一段内存(相互覆盖)

声明一个联合体：

union abc{ 

 int i; 

char m; 

  }; 

在联合体abc中，整型量i和字符m公用同一内存位置。

当一个联合被说明时，编译程序自动地产生一个变量，其长度为联合中最大的变量长度。

结构体变量所占内存长度是各成员占的内存长度的总和。

共同体变量所占内存长度是最长的成员占的内存长度。

共同体每次只能存放其中的一种！！共同体变量中起作用的成员是最后一次存放的成员，在存入新的成员后原有的成员失去了作用！所以不能同时初始化变量:

union data
{
int a;
char ch;
double b;
}u1={5,‘B’,54.3};不能

### argc 与 argv

(1).int argc:即为arguments count(参数数)

运行程序传送给main函数命令行参数的总数，包括可执行程序名。当argc=1时表示只有一个程序名称,此时存储在argv[0]中.
(2)char \**argv:即为arguments value/vector(参数值)
字符串数组,用来存放指向字符串参数的指针数组，每个元素指向一个参数，空格分隔参数，长度为argc。数组下标从0开始，
argv[0] 指向程序运行时的全路径名
argv[1] 指向程序在DOS命令中执行程序名后的第一个字符串
argv[2] 指向执行程序名后的第二个字符串
argv[argc] 为NULL.
确切的说需要我们输入的main函数的参数个数应该是：argc-1；

-----我就没懂它能拿来干什么

###### 四种储存类型

- `auto` 是所有局部变量默认的存储类。

```c
{
    int mount;
    auto int month;
}
```

上述定义了两个带有相同存储类的变量，`auto` 只能用在函数内，即 `auto` 只能修饰局部变量。

- `register` 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。不适用于全局变量

```c
{
    register int miles;
}
```

​      寄存器只用于需要快速访问的变量，比如计数器。还应注意的是，定义了 `register` 它意味着          	  变量**尽可能**存储在寄存器中，这还取决于硬件和实现的限制允不允许。

- `static` 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不是每次它进入作用域时创建和离开作用域时销毁。因此，使用 `static` 修饰局部变量可以在函数调用之间保持局部变量的值。`static` 也可以应用于全局变量。这会**使变量的作用域限制在声明它的文件内**。在 C 编程中，当 `static` 用在类数据成员上时，会导致仅有一个该成员的副本被类的所有对象共享。(在一个类上修改它,别的类的也会变)

  常见的两种用途:
  　　　　1>统计函数被调用的次数;
  　　　　2>减少局部数组建立和赋值的开销.变量的建立和赋值是需要一定的处理器开销的，特别是数组等含有较多元素的存储类型。在一些含有较多的变量并且被经常调用的函数中，可以将一些数组声明为static类型，以减少建立或者初始化这些变量的开销. 
  　　详细说明:
  　　　　1>、变量会被放在程序的全局存储区中，这样可以在下一次调用的时候还可以保持原来的赋值。这一点是它与栈变量和堆变量的区别。
  　　　　2>、变量用static告知编译器，自己仅仅在变量的作用范围内可见。这一点是它与全局变量的区别。
  　　　　3>当static用来修饰全局变量时，它就改变了全局变量的作用域，使其不能被别的程序extern，限制在了当前文件里，但是没有改变其存放位置，还是在全局静态储存区。

  　　使用注意:
  　　　　1>若全局变量仅在单个C文件中访问，则可以将这个变量修改为静态全局变量，以降低模块间的耦合度；
  　　　　2>若全局变量仅由单个函数访问，则可以将这个变量改为该函数的静态局部变量，以降低模块间的耦合度；
  　　　　3>设计和使用访问动态全局变量、静态全局变量、静态局部变量的函数时，需要考虑重入问题(只要输入数据相同就应产生相同的输出)。 

- `extern` 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。使用 `extern` 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。当您有多个文件且**定义了一个可以在其他文件中使用的全局变量或函数时**，可以在其他文件中使用 `extern` 来得到已定义的变量或函数的引用。

- auto register 是用来修饰变量的,static extern 变量函数都可以

- 更多

  [四种类型详细](https://www.cnblogs.com/Lyush/archive/2013/01/09/2852625.html)

  [还有其他类型](https://blog.csdn.net/qq_36562473/article/details/53229358?utm_medium=distribute.pc_relevant.none-task-blog-searchFromBaidu-3.channel_param&depth_1-utm_source=distribute.pc_relevant.none-task-blog-searchFromBaidu-3.channel_param)

- task(试试运用...不一定对)

  #include<iostream>
  using namespace std;
  #include<algorithm>
  struct student
  {
  	int id;
  	double grades;
   } ;
  class mysort
  {
  	public:
  		bool operator()(const student &s1,const student &s2)
  		{
  			return s1.id>s2.id;
  		}
   }; 
  int main()
  {
  	student group[30];
  	sort(group,group+29,mysort());
  	return 0;
  } 