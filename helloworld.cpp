#include <iostream>

void print5(int i);
int main()
{
    std::cout << "Hello World!" << std::endl;
    print5(5);
}

void print5(int i)
{
    for (int j=0; j < i; j++)
    {
        std::cout << j << std::endl;
    }
}