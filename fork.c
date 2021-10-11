#include <stdio.h>
#include <unistd.h>

int main(){
    int a = 5;
    int pid = fork();//a partir de aqui se crea el hijo
    if (pid == 0){
        printf("Soy el proceso hijo; pid = %d\n",pid);//el porcentaje d es remplazado por el primer entero (en este caso pid)
    }//si se pone %f espera un flotante
    else{
        printf("Soy el proceso padre; pid = %d\n",pid);
    }
    return 0;
}