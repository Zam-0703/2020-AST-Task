### 学习笔记

#### 一，结构

使用结构我们就可以定义出自己需要的变量形式，结构可以运用于数组，函数与指针中。

结构采用如下方式定义：

struct   结构名{

​	数据类型   成员名；

​	......

};    //一定要写分号！

在一个结构中就可以有各种各样的数据类型及相关变量，当要使用结构变量时我们就可以这样使用：

struct   结构名   变量名；

而需要对结构中的变量进行赋值时，有以下几种赋值方式：

1，使用{   }进行赋值

struct   student   a  ={1，12}

其中大括号中的值就代表结构中相应顺序对应的变量的值。

2，使用  .  运算符进行赋值

struct   student  a；

a.Id=12345;

a.grades=100;

其中的 .  代表取结构中相应的变量进行赋值。

结构也可以运用在指针，我们可以定义一个结构指针

struct   student  *  p   =......   ;

 对于结构指针则可以使用一种新的运算符 —>

例如：

p—>Id  =  ......

就可以直接给结构指针*p中的Id变量赋值。

#### 二，联合

联合的用法与结构十分类似，联合的定义如下：

union   联合名

{

​	数据类型   成员名 1；

​	......

};

但联合的特点是：联合只占用其变量之中数据长度最大的成员项的内存空间。

#### 三，类型

类型的定义方式：

typedef  <类型说明>   <类型名>

typedef的作用：用新类型名替代原类型名的使用。

例如：

typedef   int   length 

则在之后的使用中，int就被length这个类型名所代替。

之前定义时：

int   number；

现在就变为了：

length   number；

typedef主要用于简化结构变量的说明：

例如：定义结构变量

struct student{

​	......

};

在之后对结构的定义中则都要使用struct   student作为说明。

而在使用了typedef之后，就可以大大简化说明

例如：

typedef   struct student{

​	......

}stu;

typedef将struct   student（即typedef与stu之间的所有内容）用stu代替，则在之后的使用就可以直接用stu。

例如：

stu   a={......}



#### 四，枚举

枚举的定义：

enum   枚举类型名（可省略）   {  枚举元素  1，枚举元素  2，......  }  ;

则枚举元素会按照顺序依次被赋值为0，1，2，3，4，......

故这里面的每一个元素都相当于一个  const  int  并被赋予了值。

枚举也可以跳跃赋值

例如：

enum   color {RED =2，BLUE =5，PURPLE}；

则依次被赋予2，5，6（没有具体赋值的元素会继续接着上一元素的值依次递增赋值）。

#### 五，main函数的参数

main函数可以不带参数，但也可以带参数。main函数的参数有两个，分别是argc与argv。

其中argc是int 型变量，而argv是指向字符串数组的指针。

即一般写为 int main (int argc, char *argv[ ])

main 函数的参数可以用于接受命令行参数。其中argc的值表示命令行中命令名与参数的个数，而argv是下标从0到argc范围内的值。

#### 六，git-2 学习笔记

1，git merge 的使用

我们可以通过 git  branch  dev 的命令建立一个dev的分支，并通过 git  checkout  dev 切换到dev分支。在对dev分支编写完之后，我们通过 git  checkout  master的命令切换到master中，并通过使用 git  merge  dev 将dev分支合并到master中。

2，git  flow

git flow 使用两个分支来记录项目开发的历史，master只是用于保存官方的发布历史，而develop分支才是用于集成各种功能开发的分支。

使用一个专门的分支来为发布做准备有利于在一个团队忙于当前的发布的同时，另一个团队可以继续为接下来的一次发布开发新功能。

具体流程：

在创建好develop的分支之后，可以首先使用 

git  checkout  -b  some-feature  develop 

创建一个新的分支，在分支上开展工作之后，使用：

git  add .

git  commit

进行提交。

再通过同步develop，并进行合并，再push到中央仓库中即可完成：

git  pull  origin  develop

git  checkout  develop

git  merge  some-feature

git  push