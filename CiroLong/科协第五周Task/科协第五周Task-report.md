# 2020届电信科协第五周Task

# 本次 Task DDL：11月11日 20:00

本次Task的主要学习内容：

- Git
- C中的结构体、联合体、枚举数据类型，指针与函数的强化应用

## 完成前四期 Task 中未完成的部分

将前 4 期 Task 中未完成的 Report 随本次学习 Git 的 Report 一同上交至 Github 仓库。

## 学习 Git - 2

### 学习使用 merge 命令来合并分支

在上一次中，所有的 `commit`  都应该在你新建的 `**Github用户名-Task-x**` 的分支中。但是你的本地的 `main` 分支中并没有对应的文件/提交记录。因此你需要将你新建的分支与 `main` 分支合并。

### 学习使用 pull 命令来与远程仓库同步

Git 的本地仓库并不会自动与远程仓库同步，因此你需要使用 `pull` 命令来使得自己的本地仓库与远程仓库保持同步，避免在下一次 `push` / 创建 `Pull Request`  的时候与别人的提交产生冲突。

### 学习Git Flow

参考资料：

- [Gitflow工作流程](https://www.cnblogs.com/jeffery-zou/p/10280167.html)
- [Git 工作流程](http://www.ruanyifeng.com/blog/2015/12/git-workflow.html)
- [Git 使用规范流程](http://www.ruanyifeng.com/blog/2015/08/git-use-process.html)

因此根据 Gitflow，本次 Task 提交应从你的 main 分支提交到 upstream 仓库的 `dev-Task5` 分支，并且你提交的 PR 中， `commit` 应有且仅有一个因 merge 而产生的 `commit` 。

## 学习C中的结构体、联合体、枚举数据类型

编程实现：写一个struct_sort()函数，可以将一个main函数中的结构体数组按某一元素来排序。如下。

```
typedef struct Struct{
    int id;
    double grades;
} Student;

//学生结构体，id为学号，grades为分数，要求struct_sort()函数可以把所有学生按分数从大到小排序。

void struct_sort(Student* students);//可根据自己的需求随意更改原型，怎么方便怎么写。
```

## 指针与函数的强化应用

### argc 与 argv

简单了解main函数参数（argc和argv）的使用。

```
int main(int argc, char *argv[]);
```

>在命令行模式下，命令行参数是命令同一行的附加项，如
>
>```
>$ fuss -r Ginger
>//fuss是一个程序，-r Ginger是附加项
>```
>
>一个C程序可以读取并使用这些附加项，即通过main()的参数读取这些附加项。
>
>C编译器允许main（）没有参数或有两个参数
>
>`int main(int argc,char *argv[])`
>
>第一个参数`argc`表示命令行中的字符串数量（argument count）**（包括程序名）**
>
>第二个参数用于储存**命令行中各个字符串的地址**组成的**数组**的地址，称为`argv`（argument value）
>
>一般而言，把程序本身的名称赋予`argv[0]`，然后把剩余的字符串依次赋予`argv[1]`.....