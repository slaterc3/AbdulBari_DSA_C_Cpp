// Recursion_008-Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int fib_iter(int n)
{
    int t0 = 0, t1 = 1, s;
    if (n <= 1) return n;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
int fib_rec(int n)
{
    if (n <= 1) return n;

    return fib_rec(n - 2) + fib_rec(n - 1);
}
int F[10];
int fib_mem(int n)
{
    if (n <= 1)
    {
        F[n] = n;

        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fib_mem(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = fib_mem(n - 1);
        return F[n - 2] + F[n - 1];
    }



}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    cout << "Iterative: "<<fib_iter(7) << endl;
    cout << "Recursive: " << fib_rec(7) << endl;
    cout << "Memoization: " << fib_mem(7) << endl;


    //std::cout << "Hello World!\n";
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
