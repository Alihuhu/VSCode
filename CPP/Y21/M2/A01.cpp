#include <cstdio>
#include <iostream>

int count = 11;

class A{
    public:
        static int count;
};

int A::count = 21;

void fun()
{
    int count = 31;
    count = 32;
    printf("%d\n",count);
}

int main()
{
    ::count = 12;
    int a,b,c;
    
    A::count = 22;
    printf("%d\n",count);
    printf("%d\n",A::count);
    fun();
    printf("你好"); 
    return 0;
}
