# Git学习笔记

1. 用`mkdir` 创建一个空目录并用`git init`将空目录转变为git本地库
2. 用给`git add`指令将文件添加到暂存区，之后用`git commit`将暂存区文件提交到本地库
3. `git log`查看提交日志，`git reset`则用来恢复之前版本。上一个版本就是`HEAD^`，上上一个版本就是`HEAD^^` 。`git reflog`则用来记录的每一次命令
4. `git status`用来查看文件当前的状态
5. `git checkout`用来撤销工作区的修改，让文件回到最近一次的`git add`或`git commit`时的状态，`git reset HEAD <file>`则可以把暂存区的修改撤销掉，重新放回工作区
6. `rm` 用于删除工作区文件`git rm`则用于删除版本库中文件
7. `git clone`可用于克隆远程库