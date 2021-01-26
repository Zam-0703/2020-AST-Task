1. git remote add upstream追踪主repo

2. git remote -v查看远程仓库

3. git pull upstream main 将本地仓库分支与远程主repo同步

   ```c++
   typedef struct Struct {
   	int id;
   	double grades;
   } Student;
   void struct_sort(Student* students) {
   	int len = 3;
   	for (int i = 0; i < len-1; i++) {
   		for (int j = 0; j < len - i-1; j++) {
   			if (students[j].grades < students [j + 1].grades) {
   				Student temp = students[j];
   				students[j] = students[j + 1];
   				students[j + 1] = temp;
   			}
   		}
   	}
   }
   
   ```

   

