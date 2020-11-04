# GIT

> 1.

```Git
$ git add file1.txt
$ git add file2.txt file3.txt
$ git commit -m "add 3 files."
```

> 2.

- `HEAD`指向的版本就是当前版本，因此，Git允许我们在版本的历史之间穿梭，使用命令`git reset --hard commit_id`。
- 穿梭前，用`git log`可以查看提交历史，以便确定要回退到哪个版本。
- 要重返未来，用`git reflog`查看命令历史，以便确定要回到未来的哪个版本。

> 3.

```GIT
$ git config --global user.name "Your Name"
$ git config --global user.email "email@example.com"
```

> 4.

​     用`git clone`命令克隆
​      Git支持多种协议，包括`https`，但`ssh`协议速度最快。

> 5.

要关联一个远程库，使用命令`git remote add origin git@server-name:path/repo-name.git`；

关联后，使用命令`git push -u origin master`第一次推送master分支的所有内容

cd~
cd learngit
进入版本库

> 6.
>
> * 查看分支：`git branch`
>
> * 创建分支：`git branch <name>`
>
> * 切换分支：`git checkout <name>`或者`git switch <name>`
>
> * 创建+切换分支：`git checkout -b <name>`或者`git switch -c <name>`
>
> * 合并某分支到当前分支：`git merge <name>`
>
> * 删除分支：`git branch -d <name>`
>
> * 合并分支时，加上`--no-ff`参数就可以用普通模式合并，合并后的历史有分支，能看出来曾经做过合并，而`fast forward`合并就看不出来曾经做过合并
>
> 
>
> 7
>
> * 修复bug时，我们会通过创建新的bug分支进行修复，然后合并，最后删除；
>
> * 当手头工作没有完成时，先把工作现场`git stash`一下，然后去修复bug，修复后，再`git stash pop`，回到工作现场；
>
> * 在master分支上修复的bug，想要合并到当前dev分支，可以用`git cherry-pick <commit>`命令，把bug提交的修改“复制”到当前分支，避免重复劳动        

> 8.
> 如果要丢弃一个没有被合并过的分支，可以通过`git branch -D <name>`强行删除
>
> 9.多人协作的工作模式通常是这样：
>
>  首先，可以试图用`git push origin <branch-name>`推送自己的修改；
>
> 如果推送失败，则因为远程分支比你的本地更新，需要先用`git pull`试图合并；
>
> 如果合并有冲突，则解决冲突，并在本地提交；
>
> 没有冲突或者解决掉冲突后，再用`git push origin <branch-name>`推送就能成功！
>
> 如果`git pull`提示`no tracking information`，则说明本地分支和远程分支的链接关系没有创建，用命令`git branch --set-upstream-to <branch-name> origin/<branch-name>`
>
> 10.
>
> - 查看远程库信息，使用`git remote -v`；
>
> - 本地新建的分支如果不推送到远程，对其他人就是不可见的；
>
> - 从本地推送分支，使用`git push origin branch-name`，如果推送失败，先用`git pull`抓取远程的新提交；
>
> - 在本地创建和远程分支对应的分支，使用`git checkout -b branch-name origin/branch-name`，本地和远程分支的名称最好一致；
>
> - 建立本地分支和远程分支的关联，使用`git branch --set-upstream branch-name origin/branch-name`；
>
> - 从远程抓取分支，使用`git pull`，如果有冲突，要先处理冲突
>
>   

11.

- rebase操作可以把本地未push的分叉提交历史整理成直线；
- rebase的目的是使得我们在查看历史提交的变化时更容易，因为分叉的提交需要三方对比

12.

- 命令`git tag <tagname>`用于新建一个标签，默认为`HEAD`，也可以指定一个commit id；
- 命令`git tag -a <tagname> -m "blablabla..."`可以指定标签信息；
- 命令`git tag`可以查看所有标签

13.

- 命令`git push origin <tagname>`可以推送一个本地标签；
- 命令`git push origin --tags`可以推送全部未推送过的本地标签；
- 命令`git tag -d <tagname>`可以删除一个本地标签；
- 命令`git push origin :refs/tags/<tagname>`可以删除一个远程标签

14.

- 在GitHub上，可以任意Fork开源仓库；
- 自己拥有Fork后的仓库的读写权限；
- 可以推送pull request给官方仓库来贡献代码。

15.

我们只需要敲一行命令，告诉Git，以后`st`就表示`status`：

```
$ git config --global alias.st status
```