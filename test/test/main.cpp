#include <iostream>
#include <locale>
#include <Windows.h>
#include <ctime>
using namespace std;


int func(int a)
{   
    if (a > 0)
    {
        cout << a << endl;
        a--;
        return func(a);

    }
    else
    {
        return 0;
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    func(10);
}