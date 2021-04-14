#include<stdio.h>

void func(float a){
    printf("%f\n",a);
}

main(){
    func(10.0);
    void (*fun_ptr_arr[])(float) = {func};
    (*fun_ptr_arr[0])(12.34);
}