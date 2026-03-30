#include <iostream>
using namespace std;

// variabel global
int n;
int pilihan;

// Function untuk cek bilangan prima
bool Prima(int x)
{
    if (x <= 1)
        return false;

    int i = 2;
    while (i < x)
    {
        if (x % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

//
bool Fibonacci(int x){

}