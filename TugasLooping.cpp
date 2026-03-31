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

// Function untuk cek bilangan Fibonacci
bool Fibonacci(int x){
    int a = 0, b = 1, c;

    while (a <= x)
    {
        if (a == x)
        {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// Prosedur input
void input()
{
    cout << "Masukkan bilangan: ";
    cin >> n;
}

//output prima
void outputPrima(){
    if (Prima(n))
    {
        cout << n << " adalah bilangan prima" << endl;
    }
}
