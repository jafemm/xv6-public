#include "types.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "x86.h"
#include "proc.h"
#include "spinlock.h"

int main(void){
    printf(1,"El numero de procesos es: %d", getprocs());
    exit();
}
