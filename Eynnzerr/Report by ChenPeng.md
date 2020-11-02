#                             **第四次TASK**

​                                                                                                                                ————电信提高2001 陈芃

[TOC]

#### 一.学习使用git和github的笔记

##### 	1.了解git和github:

​	Git是一个开源的<u>分布式版本控制系统</u>，可以有效、高速地处理从很小到非常大的项目版本管理.Git 是 [Linus Torvalds](https://baike.baidu.com/item/Linus Torvalds/9336769) 为了帮助管理 Linux 内核开发而开发的一个开放源码的版本控制软件。

​	分布式相比于集中式的最大区别在于<u>开发者可以提交到本地，每个开发者通过克隆（git clone），在本地机器上拷贝一个完整的Git仓库。</u>

​	GitHub 是一个面向[开源](https://baike.baidu.com/item/开源/20720669)及私有[软件](https://baike.baidu.com/item/软件/12053)项目的托管平台，因为<u>只支持 Git 作为唯一的版本库格式进行托管</u>，故名 GitHub。

##### 	2.github的基本概念：

###### 	仓库（Repository）

​	仓库的意思，即你的项目，你想在GitHub上开源一个项目，那就必须要新建一个Repository，如果你开元的多了，你就拥有多个Repository。
仓库用来存放项目代码，每个项目对应一个仓库，多个开源项目则有多个仓库。

###### 	收藏（Star）

​	仓库主页star按钮，意思为收藏该项目的人数，在GitHub上如果你有一个项目获得100个star都算很不容易了。收藏项目，方便下次查看。

###### 	复制克隆项目（Fork）

​	例如你开源了一个项目，别人想在你这个项目的基础上做些改进，然后应用到自己的项目中，这个时候他就可以Fork你的项目（打开项目主页点击右上角的fork按钮即可），然后他的GitHun主页上就多了一个项目，只不过这个项目是基于你的项目基础（本质上是在原项目的基础上新建了一个分支），他就可以随心所欲的去改进该项目，但是丝毫不会影响原有项目的代码与结构。
注意：该Fork的项目是独立存在的。

###### 	发起请求（Pull Request）

​	发起请求，这个其实是基于Fork的，还是上面那个例子，如果别人在你的项目基础上做了改进，后来觉得改进的很不错，应该要把这些改进让更多的人受益，于是就想把自己的改进合并到原有的项目里，这个时候他就可以发起一个Pull Request（简称PR），原有项目创建人，也就是你，就可以收到这个请求，这个时候你会仔细review他的代码，并且测试觉得ok了，就会接受他的PR，这个时候他做的改进原项目就会拥有啦。

###### 	关注（Watch）

​	这个也好理解就是观察，如果你Watch了某个项目，那么以后只要这个项目有任何更新，你都会第一时间收到关于这个项目的通知提醒。

###### 	事务卡片（Issue)

​	发现代码bug，但是目前没有成形的代码，需要讨论使用。
问题的意思。举个例子，就是你开源了一个项目，别人发现你的项目中有bug，或者哪些地方做的不够好，他可以给你提个Issue，即问题，提的问题多了，也就是Issues，然后你看到了这些问题就可以去逐个修复，修复好了就可以一个个close掉。

###### 	Github主页

​	账号创建成功或点击网址导航栏github图标都可以进入github主页，该页左侧主要显示用户动态以及关注用户或关注仓库的动态，右侧显示所有的git库。

###### 	仓库主页

​	仓库主页主要显示项目的信息，如：项目代码，版本，收藏/关注/fork情况等。

###### 	个人主页

​	个人信息：头像，个人简介，关注我的人，我关注的人，我关注的git库，我的开源项目等信息。

##### 	3.git基本命令

###### 	远程仓库相关命令

​	检出仓库：$ git clone git://github.com/jquery/jquery.git
​	查看远程仓库：$ git remote -v
​	添加远程仓库：$ git remote add [name] [url]
​	删除远程仓库：$ git remote rm [name]
​	修改远程仓库：$ git remote set-url --push [name] [newUrl]
​	拉取远程仓库：$ git pull [remoteName] [localBranchName]
​	推送远程仓库：$ git push [remoteName] [localBranchName]

​	如果想把本地的某个分支test提交到远程仓库，并作为远程仓库的master分支，或者作为另外一个名叫test的分支，如下：

​	$git push origin test:master // 提交本地test分支作为远程的master分支
​	$git push origin test:test // 提交本地test分支作为远程的test分支

###### 	分支(branch)操作相关命令

​	查看本地分支：$ git branch

​	查看远程分支：$ git branch -r

​	创建本地分支：$ git branch [name] ----注意新分支创建后不会自动切换为当前分支

​	切换分支：$ git checkout [name]

​	创建新分支并立即切换到新分支：$ git checkout -b [name]

​	删除分支：$ git branch -d [name] ---- -d选项只能删除已经参与了合并的分支，对于未有合并的分支是无法删除的。如果想强制删除一个分支，可以使用-D选项

​	合并分支：$ git merge [name] ----将名称为[name]的分支与当前分支合并

​	创建远程分支(本地分支push到远程)：$ git push origin [name]

​	删除远程分支：$ git push origin :heads/[name] 或 $ git push origin :[name]

​	创建空的分支：(执行命令之前记得先提交你当前分支的修改，否则会被强制删干净没得后悔)

​	$git symbolic-ref HEAD refs/heads/[name]

​	$rm .git/index

​	$git clean -fdx

###### 	版本(tag)操作相关命令

​	查看版本：$ git tag

​	创建版本：$ git tag [name]

​	删除版本：$ git tag -d [name]

​	查看远程版本：$ git tag -r

​	创建远程版本(本地版本push到远程)：$ git push origin [name]

​	删除远程版本：$ git push origin :refs/tags/[name]

​	合并远程仓库的tag到本地：$ git pull origin --tags

​	上传本地tag到远程仓库：$ git push origin --tags

​	创建带注释的tag：$ git tag -a [name] -m 'yourMessage'

###### 	子模块(submodule)相关操作命令

​	添加子模块：$ git submodule add [url] [path]

​	如：$git submodule add git://github.com/soberh/ui-libs.git src/main/webapp/ui-libs

​	初始化子模块：$ git submodule init ----只在首次检出仓库时运行一次就行

​	更新子模块：$ git submodule update ----每次更新或切换分支后都需要运行一下

​	删除子模块：（分4步走哦）

​	$ git rm --cached [path]

​	编辑“.gitmodules”文件，将子模块的相关配置节点删除掉

​	编辑“ .git/config”文件，将子模块的相关配置节点删除掉

​	手动删除子模块残留的目录

###### 	忽略一些文件、文件夹不提交

​	在仓库根目录下创建名称为“.gitignore”的文件，写入不需要的文件夹名或文件，每个元素占一行即可，如

​	target

​	bin

​	*.db

###### 	附： Git 常用命令速查

​	git branch 查看本地所有分支

​	git status 查看当前状态

​	git commit 提交

​	git branch -a 查看所有的分支

​	git branch -r 查看远程所有分支

​	git commit -am "init" 提交并且加注释

​	git remote add origin git@192.168.1.119:ndshow

​	git push origin master 将文件给推到服务器上

​	git remote show origin 显示远程库origin里的资源

​	git push origin master:develop

​	git push origin master:hb-dev 将本地库与服务器上的库进行关联

​	git checkout --track origin/dev 切换到远程dev分支

​	git branch -D master develop 删除本地库develop

​	git checkout -b dev 建立一个新的本地分支dev

​	git merge origin/dev 将分支dev与当前分支进行合并

​	git checkout dev 切换到本地dev分支

​	git remote show 查看远程库

​	git add .

​	git rm 文件名(包括路径) 从git中删除指定文件

​	git clone git://github.com/schacon/grit.git 从服务器上将代码给拉下来

​	git config --list 看所有用户

​	git ls-files 看已经被提交的

​	git rm [file name] 删除一个文件

​	git commit -a 提交当前repos的所有的改变

​	git add [file name] 添加一个文件到git index

​	git commit -v 当你用－v参数的时候可以看commit的差异

​	git commit -m "This is the message describing the commit" 添加commit信息

​	git commit -a -a是代表add，把所有的change加到git index里然后再commit

​	git commit -a -v 一般提交命令

​	git log 看你commit的日志

​	git diff 查看尚未暂存的更新

​	git rm a.a 移除文件(从暂存区和工作区中删除)

​	git rm --cached a.a 移除文件(只从暂存区中删除)

​	git commit -m "remove" 移除文件(从Git中删除)

​	git rm -f a.a 强行移除修改后文件(从暂存区和工作区中删除)

​	git diff --cached 或 $ git diff --staged 查看尚未提交的更新

​	git stash push 将文件给push到一个临时空间中

​	git stash pop 将文件从临时空间pop下来

​	git remote add origin git@github.com:username/Hello-World.git

​	git push origin master 将本地项目给提交到服务器中

​	git pull 本地与服务器端同步

​	git push (远程仓库名) (分支名) 将本地分支推送到服务器上去。

​	git push origin server fix:awesome branch

​	git fetch 相当于是从远程获取最新版本到本地，不会自动merge

​	git commit -a -m "log_message" (-a是提交所有改动，-m是加入log信息) 本地修改同步至服务器端 ：

​	git branch branch_0.1 master 从主分支master创建branch_0.1分支

​	git branch -m branch_0.1 branch_1.0 将branch_0.1重命名为branch_1.0

​	git checkout branch_1.0/master 切换到branch_1.0/master分支

​	git push origin:branch_remote_name

​	git branch -r -d branch_remote_name

​	初始化版本库，并提交到远程服务器端

​	mkdir WebApp

​	cd WebApp

​	git init本地初始化

​	touch README

​	git add README添加文件

​	git commit -m 'first commit'

​	git remote add origin git@github.com:daixu/WebApp.git增加一个远程服务器端

#### 二.备注

​	随笔记附上第一次TASK中未完成的拓展作业（洛谷P1143进制转换）





​	



