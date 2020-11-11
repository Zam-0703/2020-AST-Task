# 行动纲领

**将想法用流程图写出来，再用语言编写**（直接写代码会比较困难，嗯！）

“先用自然语言、数据流程图等工具一步步去抽象描述问题，最后，得到用计算机可求解的算法描述后，才用计算机语言去实现。”



# 摘抄

```c
for(i=0;i<=100;i++)

{
	scanf("%d",&a[i]);
	if(a[i]==0){
		break;
	}
}
```

用来输入一组数

***

```c
for(i=0;i<=3;i++)
         	{
         	    n[i]=a%2;
         	    a=a/2;
         	}
		    while(i!=0)
		    {
		    	printf("%d",n[--i]);
			}


```

二进制转换

***

# 错误

```c
#include<stdio.h>
int main()
{
	int k,n=1;
	double S=0.0;

    scanf("%d",&k);

while(S<=(double)k)
{
	S+=(double)(1/n);
	n++;
}

printf("%d",n-1);
}    
```
*数据类型*    1/n中都是整形，n>=2时结果是0，最后得不出结果

***

**=是赋值，==是等于！！！！！！！**

# 函数

## 调用函数

- 函数名（参数值）
- （）起到了表示函数调用的重要作用
- 即使没有参数也需要（）
- 如果有函数，则需要给出正确的数量和顺序
- 这些值会被按照顺序依次用来初始化函数中的参数

## 函数的返回

单个出口

### 从函数中

### 返回值

- 可以赋值给变量
- 可以在传递给函数
- 可以丢弃

## 递归

例子

```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
if(n!=0)
{
	main();
	printf("%d ",n);
}
}
```

# 小数

## 小数点位数控制

小数还有一种更加智能的输出方式，就是使用`%g`。%g 会对比小数的十进制形式和指数形式，以最短的方式来输出小数，让输出结果更加简练。所谓最短，就是输出结果占用最少的字符。

```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a = 0.00001;
    float b = 30000000;
    float c = 12.84;
    float d = 1.229338455;
    printf("a=%g \nb=%g \nc=%g \nd=%g\n", a, b, c, d);
return 0;
}
```

对各个小数的分析：
a 的十进制形式是 0.00001，占用七个字符的位置，a 的指数形式是 1e-05，占用五个字符的位置，指数形式较短，所以以指数的形式输出。
b 的十进制形式是 30000000，占用八个字符的位置，b 的指数形式是 3e+07，占用五个字符的位置，指数形式较短，所以以指数的形式输出。
c 的十进制形式是 12.84，占用五个字符的位置，c 的指数形式是 1.284e+01，占用九个字符的位置，十进制形式较短，所以以十进制的形式输出。
d 的十进制形式是 1.22934，占用七个字符的位置，d 的指数形式是 1.22934e+00，占用十一个字符的位置，十进制形式较短，所以以十进制的形式输出。

需要注意的两点是：
%g 默认最多保留六位有效数字，包括整数部分和小数部分；%f 和 %e 默认保留六位小数，只包括小数部分。
%g 不会在最后强加 0 来凑够有效数字的位数，而 %f 和 %e 会在最后强加 0 来凑够小数部分的位数。

总之，%g 要以最短的方式来输出小数，并且小数部分表现很自然，不会强加零，比 %f 和 %e 更有弹性，这在大部分情况下是符合用户习惯的。

除了 %g，还有 %lg、%G、%lG：
%g 和 %lg 分别用来输出 float 类型和 double 类型，并且当以指数形式输出时，e小写。
%G 和 %lG 也分别用来输出 float 类型和 double 类型，只是当以指数形式输出时，E大写。

# Gitlearn

## Git指令

mkdir 用于创建目录
  git init 初始化
  git add添加文件（修改）
  git commit -m“”提交文件（修改）
  git status查看当前仓库状态
  git diff查看修改
  git log查看提交历史
  git reflog查看命令历史
  git reset --hard +id回到过去或未来的版本
  HEAD指向当前版本，HEAD^代表上个版本，HEAD^^上上个，HEAD~100上100个版本。
  git checkout -- file 丢弃修改
  git rm删除文件
  git remote add origin git@github.com:账号名/本地仓库.git 关联远程
  git push 把当前分支推送到远程
  git push -u 第一次推送
  git clone 克隆远程库
  git switch -c 创建并切换分支
  git switch 切换分支
  git branch 查看分支
  git branch +name 创建分支
  git branch -d 删除分支
  git merge 合并某分支到当前分支
  git merge --no-ff -m"" name 禁用fast forward
  git stash 隐藏工作现场
  git stash apply恢复工作现场
  git stash drop 删除
  git stash pop恢复并删除
  git cherry-pick 复制一个特定的提交到当前分支
  git branch -D强行删除
  git remote 查看远程库
  git tag +name打个标签
  git tag 查看标签
  git tag -d 删除标签
  git push origin tagname推送一个本地标签
  git push origin --tags推送全部未推送过的本地标签
  git push origin :refs/tags/tagname删除一个远程标签

## Git修改

场景1：当你改乱了工作区某个文件的内容，想直接丢弃工作区的修改时，用命令`git checkout -- file`。

场景2：当你不但改乱了工作区某个文件的内容，还添加到了暂存区时，想丢弃修改，分两步，第一步用命令`git reset HEAD <file>`，就回到了场景1，第二步按场景1操作。

场景3：已经提交了不合适的修改到版本库时，想要撤销本次提交，参考[版本回退](https://www.liaoxuefeng.com/wiki/896043488029600/897013573512192)一节，不过前提是没有推送到远程库。