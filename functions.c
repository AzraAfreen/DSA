#include <stdio.h>

int main()
{
    f();
    printf("\nbye\n");
    return 0;
}

void f()
{
    f2();
    printf("\ntwo");
    f3();
}
void f2()
{
    f3();
    printf("\nthree");
    
}
void f3()
{
    printf("\none");
}
