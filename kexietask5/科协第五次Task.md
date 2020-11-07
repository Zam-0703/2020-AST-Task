# 科协第五次Task

___

---

***


**argc与argv**
**Ｃ语言规定main函数的参数只能有两个，习惯上这两个参数写为argc和argv。**  

**第一个形参：argc(arguments count参数数)必须是整型变量**  

**第二个形参：argv(arguments value/vector参数值)必须是指向字符串的指针数组。  **

**所以main函数的函数应写为以下两种形式的一种：**

**int main(int argc,char *argv[]){…}**

**int main (int argc,char argv){…}**

**第一个参数argc表示向main函数传递的参数的个数，但是它实际上要比你在命令行里输入的数据多一个，因为第一个参数它保存了该程序的路径名，也就是说，如果你向命令行输入3个数，则argc实际上等于4；
第二个参数argv保存命令行输入的参数值
argv[0]指向程序自身运行目录路径和程序名，
argv[1]指向程序在DOS命令中执行程序名后的第一个字符串
argv[2]指向第二个字符串
.......
argv[argc] 为NULL**