// Recursive_009-Combinations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int fact(int n)
{
    if (n == 0) return 1;

    return fact(n - 1) * n;
}

int nCr(int n, int r)
{
    int num = fact(n);
    int den = fact(r) * fact(n - r);

    return num / den;
}
//recursive function:
int NCR(int n, int r)
{
    //base case
    if (n == r || r == 0) return 1;

    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}

int main()
{
    printf("nCr: %d\n", nCr(4, 2));
    printf("NCR: %d\n", NCR(4, 2));
    cout << 2 % 10 << endl;
    //std::cout << "Hello World!\n";

    return 0;
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
