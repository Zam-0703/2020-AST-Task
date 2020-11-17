# **git flow**

### 具体流程

1.新建分支——提交分支commit——撰写提交信息——与主干同步——合并commit——推送到远程仓库——pull request  

### git pull

*git pull*：相当于是从远程获取最新版本并`merge`到本地

```shell
$ git pull <远程主机名> <远程分支名>:<本地分支名>
```

比如，要取回`origin`主机的`next`分支，与本地的`master`分支合并，需要写成下面这样 -

```shell
$ git pull origin next:master
```



git remote add upstream 追踪主仓库

git pull upstream main 本地仓库分支与远程仓库主仓库同步