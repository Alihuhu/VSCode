#include <iostream>
#include <thread>
void hello()
{
    std::cout << "hello concurent world\n";
}
int main()
{
    std::thread t(hello);
    t.join();
}