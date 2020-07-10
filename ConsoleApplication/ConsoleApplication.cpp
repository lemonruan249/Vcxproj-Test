// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<int> vec;

void func(int i)
{
    std::cout << i << std::endl;  // CONDITIONAL BREAKPOINT
    if (i == 20)
    {
        std::cout << "foo" << std::endl;  // BREAKPOINT
        std::cout << "bar" << std::endl;
        std::cout << "baz" << std::endl;
        std::cout << "qux" << std::endl;
        std::cout << "zap" << std::endl;
    }
    if (i == 90)
    {
        throw std::runtime_error("ninety");
    }
    vec.push_back(i);
}

int main(int argc, char** argv)
{
    try
    {
        for (int i = 0; i < 100; i++)
        {
            func(i);
        }
    }
    catch (const std::exception &)
    {
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
