# TASK-4

****

***

​																									————信卓2001曾仕磊

#### 仓库（ **Repository** ）

> > > 啥是仓库？想开源就需要创建一个仓库用于存放项目代码

* 创建仓库相关指令
  * `mkdir `+名字

    `cd `+名字

    `pwd `查看位置

  * `git init`变成git管理仓库     

####  **复制克隆项目（Fork）** 

> > >  什么是`fork`？？？

* 相当于一个独立存在的复制项目。如果看上了那个项目，就在项目主页右上角FORK这个项目，然后自己的主页上就多了一个项目，类似于copy，在这个copy项目上做的改的不会影响到本来的项目

####  **发起请求（Pull Request）** 

> > >  那么问题来了，之前fork的项目如果改得很好，就连开源的人也想要怎么办？？

* 有一个配合fork的操作：pull。将fork改进之后的东西PR，开源者就会看到，并且考虑是否将这个改进之后的项目加到原有的项目上

#### 提交添加文件

> > >

* 要把文件放到这个仓库下

  git add

* git commit -m“文件说明”   提交文件

#### 时光机

> > > git hub 可以回到改之前的文件状态，这又是如何操作的？

* 两个区

  * 工作区：就是咱们看到的目录了
  * 暂存区：第一步`git add`添加的文件还没有添加到项目之中，而是存在一个叫做暂存区的地方，第二步的指令`git commit` 可以把暂存区的文件一次性提交到当前分支

* 跟踪修改：每一次修改 如果不用`git add`到暂存区，那就不会加入到`commit`中。 

* 撤销修改

  * 在工作区：命令`git checkout -- <file>`意思就是，把文件在工作区的修改全部撤销,就是让这个文件回到最近一次`git commit`或`git add`时的状态。

  *  在暂存区：用命令`git reset HEAD <file> `可以把暂存区的修改撤销掉 .回到了暂存区再用checkout

  * 在版本库：`git reset --hard HEAD^`（回到上一个版本）

    ​					`HEAD~100`（回到上100个版本）

    ​					再往前修改 `git reset --hard 版本号` 

* `git status` 查看仓库状态

* `git diff `查看修改的地方

* `git log` 历史记录

* `git reflog `记录每一次命令

*  `git branch -r `查看远程所有分支 

#### 远程仓库（remote Repository）

> > > 如之前所说， `GitHub`告诉我们，可以从这个仓库克隆出新的仓库，也可以把一个已有的本地仓库与之关联，然后，把本地仓库的内容推送到`GitHub`仓库。 

* 关联远程库 

  ````
  git remote add origin git@github.com:michaelliao/learngit.git
  ````

   `michaelliao`替换成`GitHub`账户名 

*  把本地库的内容推送到远程，用`git push`命令，实际上是把当前分支`master`推送到远程。 `git push -u <name of remote Repository> <branch>`
* 关联后，使用命令`git push -u origin master`第一次推送master分支的所有内容

> > >如果现有远程库，那么，如何clone？

*  要克隆一个仓库，首先必须知道仓库的地址，然后使用`git clone`命令克隆。 

#### 分支（Branch）

> > >  如何在偷偷变强的同时不影响别人或者被别人发现呢？

* 创建分支
  * `git checkout -b dev`
  *  `git branch`命令会列出所有分支，当前分支前面会标一个`*`号。 

* 合并分支
  *  `git merge <name of the branch> `命令用于合并指定分支到当前分支 

* 切换分支
  *  创建并切换到新的`dev`分支，可以使用 `git switch -c dev`
  *  直接切换到已有的`master`分支，可以使用： `git switch master`

*  删除分支：`git branch -d ` 

> > > 小伙伴们也在偷偷变强，他们也想合并自己的分支，这会造成了冲突，怎么搞？

* 分支冲突
  *   当多个分支之间的文件各自有更新时直接合并会出现冲突，用`$ git status`可以查看冲突的文件。
  * 此时直接`cat`文件会看到`git`用`<<<<<<<`，`=======`，`>>>>>>>`标记出不同分支的内容。 
  *  用`git log --graph`命令可以看到分支合并图。 
  *  合并分支时，如果可能，Git会用`Fast forward`模式，但这种模式下，删除分支后，会丢掉分支信息 
  *  准备合并`dev`分支，请注意`--no-ff`参数，表示禁用`Fast forward` 
  *  `--no-ff`参数就可以用普通模式合并，合并后的历史
  * `fast forward`合并就看不出来曾经做过合并 

  ````c
  git merge --no-ff -m "merge with no-ff" dev
  ````

> > >  然而实际的开发之中，分支管理不可能这么混乱

*  实际工作中的分支策略
  *  首先，`master`分支应该是非常稳定的，平时不能在上面干活 
  *  干活都在`dev`分支上，也就是说，`dev`分支是不稳定的 
  *  再把`dev`分支合并到`master`上 

> > > 想把当前分支的工作储存，转到另外一个分支

*  `git stash`功能，可以把当前工作现场“储藏”起来 

   用`git stash list`命令查看被藏起来的东西

   用`git stash pop`，恢复的同时把stash内容也删了 

* 多次stash， 然后恢复指定的stash  `git stash apply stash@{0}`

#### 标签

*  命令`git tag `用于新建一个标签，默认为`HEAD`，也可以指定一个commit id 
*  命令`git tag -a  -m "blablabla..."`可以指定标签信息 
*  命令`git tag`可以查看所有标签 
*  命令`git push origin `可以推送一个本地标签 
*  命令`git push origin --tags`可以推送全部未推送过的本地标签 
* 命令`git tag -d `可以删除一个本地标签；
*  命令`git push origin :refs/tags/`可以删除一个远程标签 

