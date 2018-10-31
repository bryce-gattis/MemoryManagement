#include <minix/callnr.h>
#include <signal.h>
#include <sys/svrctl.h>
#include <sys/resource.h>
#include <sys/utsname.h>
#include <minix/com.h>
#include <minix/config.h>
#include <minix/type.h>
#include <minix/vm.h>
#include <string.h>
#include <lib.h>
#include <assert.h>
#include <stdio.h>
#include <../servers/pm/misc.c>

int isPrime(int x)
{
    printf("%d \n", x);
    return 1;
 }


PUBLIC int main() {
    while(1){
        printf("%d \n", do_getsysinfo());
        sleep(1);
    }
    
}