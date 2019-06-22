#include "types.h"
#include "stat.h"
#include "user.h"


int main(void){
    int dirfis = VirtualToPhysical();
    if(dirfis == 0){
        printf("La direccion no es válida");
        exit();
    }
    else{
        printf(1,"La direccion fisica es: %x", dirfis);
        exit();
    }

}
