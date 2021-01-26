# 第五次Task

​                                                                                                                                    ——电信提高陈芃

[TOC]

#### 一、学习git

##### 1.学习git merge

​    1)**git merge**命令用于将两个及以上的开发历史合并在一起。

​    2)该命令有以下两种主要用途：

​    1.用于**git pull**中，以整合另一仓库中的更新。（即： **git pull** = **git fetch** + **git merge**)

​    2.用于从一个分支合并到另一个分支。

​    3)语法格式：

​    git merge [-n] [--stat] [--no-commit] [--squash] [--[no-]edit] [-s <strategy>] [-X <strategy-option>] [-S[<keyid>]] [--[no-]rerere-autoupdate] [-m <msg>] [<commit>...]

​    git merge <msg> HEAD <commit>...

​    git merge --abort

##### 2.学习pull命令与远程仓库同步。

​    https://www.runoob.com/git/git-pull.html

​    https://www.yiibai.com/git/git_pull.html

​    https://blog.csdn.net/weixin_30699831/article/details/101982286

​    **git pull** 命令用于从远程获取代码并合并本地的版本。

​    格式：git pull <远程主机名> <远程分支名>:<本地分支名>

​	实例：git pull origin next:master（当本地分支如master就是当前分支时，master可以省略）

##### 3.学习Git Flow

​	就像代码需要代码规范一样，代码管理同样需要一个清晰的流程和规范,而Vincent Driessen 为了解决这个问题提出了 [A Successful Git Branching Model](http://nvie.com/posts/a-successful-git-branching-model/)。

​	1）Git Flow常用分支：	

- Production 分支（产品）

也就是我们经常使用的Master分支，这个分支最近发布到生产环境的代码，最近发布的Release， 这个分支只能从其他分支合并，不能在这个分支直接修改

- Develop 分支（开发）

这个分支是我们是我们的主开发分支，包含所有要发布到下一个Release的代码，这个主要合并与其他分支，比如Feature分支

- Feature 分支（特征）

这个分支主要是用来开发一个新的功能，一旦开发完成，我们合并回Develop分支进入下一个Release

- Release分支（发布）

当你需要一个发布一个新Release的时候，我们基于Develop分支创建一个Release分支，完成Release后，我们合并到Master和Develop分支

- Hotfix分支（热修）

当我们在Production发现新的Bug时候，我们需要创建一个Hotfix, 完成Hotfix后，我们合并回Master和Develop分支，所以Hotfix的改动会进入下一个Release

​	2）Git Flow如何工作

初始分支

​	所有在Master分支上的Commit应该Tag

Feature 分支

​	分支名 feature/*

​	Feature分支做完后，必须合并回Develop分支, 合并完分支后一般会删点这个Feature分支，但是我们也可以保留

Release分支

​	分支名 release/*

​	Release分支基于Develop分支创建，打完Release分之后，我们可以在这个Release分支上测试，修改Bug等。同时，其它开发人员可以基于开发新的Feature (记住：一旦打了Release分支之后不要从Develop分支上合并新的改动到Release分支)

​	发布Release分支时，合并Release到Master和Develop， 同时在Master分支上打个Tag记住Release版本号，然后可以删除Release分支了。

维护分支 Hotfix

​	分支名 hotfix/*

​	hotfix分支基于Master分支创建，开发完后需要合并回Master和Develop分支，同时在Master上打一个tag





#### 二.了解main函数的参数

##### 1.main函数的两种规范写法

<<<<<<< HEAD
1)（<u>不在命令行传参数</u>）
=======
1)（不在命令行传参数）
>>>>>>> 712204b (task5 by ChenPeng,tiGao2001)

int main(void){

...

}

2)（<u>需要在命令行传参数</u>）

int main(int argc,char* argv[]){

...

}

##### 2.main函数参数详解

​	在C语言中，我们一般情况下不使用main函数的参数，但是并不代码这main函数没有参数，在当前C语言阶段，main函数可以有两个参数，一个是整数类型的argc，一个是指针数组argv。

​    先认识第二个参数。第二个参数是一个指针数组，数组中每个元素都是char类型的指针，每个指针指向一个字符串。<u>主函数不能被调用，但主函数中第二个参数里的每一个指针所指向的字符串都来自于用户在命令行上的参数</u>。比如说，写好一个程序，编译后生成a.out可执行程序，当在运行的时候，需要在终端命令行上输入：a.out，那么这个argv数组中的第一个元素argv[0]所指向的字符串就是"a.out"。如果运行时输入：a.out 40 100，那么argv数组中第一个元素argv[0]指向字符串"a.out"，第二个元素argv[1]指向字符串"40"，第三个元素指向argv[2]指向字符串"100"。所以当我们在程序中就可以用数组元素进行相关的数据处理了。有些时候我们写好一个程序，要处理数值不同的各种场景， 那么就可以用主函数参数进行数值的传递，每次运行的时候，只要给不同的数值就行，就不需要回头更改代码重新编译了。

​	而第一个参数是个整数类型的参数，它表示命令行参数有多少个，也就是<u>第二个参数argv数组的元素个数</u>。

