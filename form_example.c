#include <stdio.h>
#include <unistd.h>

int main(){
pid_t pid = fork();

if (pid = 0){
printf("this is the child  pid= %d\n",getpid());
} else if(pid>0){
printf("iam the parent.pid = %d, child pid = %d\n",getpid(),pid);
}else{
printf("fork failed!\n");
}
return 0;
}
