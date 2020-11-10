# GIT使用规范

* 1: 每次开发新功能,都应该新建一个独立的分支

* 2: 修改后提交commit分支

* 3: 撰写提交信息

* 4: 与主干同步
  git fetch origin
  git rebase origin/master

* 5: 合并commit
  git rebase
  git rebase -i origin/master

  pick：正常选中

  reword：选中，并且修改提交信息；

  edit：选中，rebase时会暂停，允许你修改这个commit（参考[这里](https://schacon.github.io/gitbook/4_interactive_rebasing.html)）

  squash：选中，会将当前commit与上一个commit合并

  fixup：与squash相同，但不会保存当前commit的提交信息

  exec：执行其他shell命令

* 6. 推送
     git push --force origin .....
     因为改变了分支 所以要强行推送

* 发出 Pull Request

# git工作流程

- 功能分支（feature branch）
- 补丁分支（hotfix branch）
- 预发分支（release branch）

- 主分支`master`
- 开发分支`develop`