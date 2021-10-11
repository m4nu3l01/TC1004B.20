#include <unistd.h>
#include <stdio.h>

int main(){
    int fd[2];
    int pid;
    pipe(fd);
    pid = fork();
    if(pid == 0){
        close(0);//entrada
        dup(fd[0]);//entrada
        close(fd[1]);//salida
        execlp("wc","wc","-l",NULL);

    }else {
        close(1);//salida
        dup(fd[1]);//salida
        close(fd[0]);//entrada
        execlp("ls","ls",NULL);

    }
    return 0;
}