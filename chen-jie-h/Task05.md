# 科协Task05

结构体作业代码：

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Struct
{
	int id;
	double grades;
}Student;

void struct_sort(Student*stu,int len)
{
	Student*ptr[len];
	Student*temp=NULL;
	for(int i=0;i<len;i++)
	{
		ptr[i]=&stu[i];
	}
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(stu[j].grades<stu[j+1].grades)
			{
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<len;i++)
	{
		printf("%-2d %.2f\n",ptr[i]->id,ptr[i]->grades);
	}
}

int main()
{
	Student stu[]=
	{
		{1,748.00},
		{2,698.45},
		{3,590.50},
		{4,689.50},
		{5,698.60},
		{6,699.54},
		{7,645.87},
		{8,664.84},
		{9,654.65},
		{10,645.88},
		{11,655.99},
		{12,658.95},
		{13,646.46}
	};
	int len=sizeof(stu)/sizeof(stu[0]);
	struct_sort(stu,len);
	return 0;	
}
```



简单了解main函数参数argc,argv:(大概知道了其作用)

argc:是指命令行输入参数的个数(以空格符分隔)

argv:存储了所有的命令行参数

e.g:   hello.exe ha hei

​		那么argc就是3，argv[0]就是"hello.exe"，argv[1]就是"ha"，argv[2]就是"hei"



Learn to use Git Flow:

1. Gitflow使用两个分支来记录项目开发的历史，而不是使用单一的master分支。在Gitflow流程中，master只是用于保存官方的发布历史，而develop分支才是用于集成各种功能开发的分支;

2. 每一个新功能的开发都应该各自使用独立的分支。为了备份或便于团队之间的合作，这种分支也可以被推送到中央仓库。但是，在创建新的功能开发分支时，父分支应该选择develop（而不是master）。当功能开发完成时，改动的代码应该被合并（merge）到develop分支。功能开发永远不应该直接牵扯到master;

3. 一些过程：

   1. 创建分支:

      第一步是给默认的master配备一个develop分支。一种简单的做法是：让一个开发者在本地建立一个空的develop分支，然后把它推送到服务器。

   ```
   git branch develop
   git push -u origin develop
   ```

   ​		develop分支将包含项目的所有历史，而master会是一个缩减版本。现在，其他开发者应		该克隆（clone）中央仓库，并且为develop创建一个追踪分支。

   ```
   git clone ssh://user@host/path/to/repo.git
   git checkout -b develop origin/develop
   ```

   ​		到现在，所有人都把包含有完整历史的分支（develop）在本地配置好了

   ​		注：创建分支时，父分支不能选择master，而要选择develop

   ```
   git checkout -b some-feature develop
   ```

   ​		与远程仓库同步：

   ​		```git pull```

   

   2. 提交分支commit:

   ```
   git status
   git add <some-file>
   git commit
   ```

   

   3. 合并commit



​		  4. 推送到远程仓库：

​			``git push -set-upstream origin <branch's name>``

​		``setupstream是设置上流分支，origin是指远程仓库，后面跟分支的名字``

​			之后可以用git push直接提交



​	  	5. 可以使用`git fetch`获取远程仓库的分支（只是知道了远程仓库有什么分支）：

​		       自己应当以远程仓库的某个分支作为模板在本地创建一样的新分支：

​				`git checkout -b <branch's name>`

​			    如果想设置一个分支名字与远程分支不一样，但模板是来自远程分支：

​				`git checkout -b <要设置的分支名字> origin <远程分支的名字>`



​		  6. 获取最新的远程仓库分支：

​			`git pull`

​			

​		  7. 将分支添加到master：

​			`git rebase`

​			若出现冲突解决后要add到暂存区

​			然后`git rebase --continue`继续下个节点的commit添加



