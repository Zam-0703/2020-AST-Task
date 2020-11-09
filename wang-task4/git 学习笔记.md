# git 学习笔记

Git用<<<<<<<，=======，>>>>>>>标记出不同分支的内容

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

## 		others

- 查看远程库信息，使用git     remote -v；
- 本地新建的分支如果不推送到远程，对其他人就是不可见的；
- 从本地推送分支，使用git     push origin branch-name，如果推送失败，先用git     pull抓取远程的新提交；
- 在本地创建和远程分支对应的分支，使用git     checkout -b branch-name origin/branch-name，本地和远程分支的名称最好一致；
- 建立本地分支和远程分支的关联，使用git     branch --set-upstream branch-name origin/branch-name；
- 从远程抓取分支，使用git     pull，如果有冲突，要先处理冲突。