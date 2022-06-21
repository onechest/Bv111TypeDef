#include <iostream>     //библиотеки
#include <string>

using namespace std;

using si_t = short int;
typedef unsigned long long l_t;

unsigned long long num1 = 10;
l_t num2 = 100;

int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a - b;
}
l_t sum(l_t a, l_t b)
{
    return a + b;
}

void main()
{
    setlocale(LC_ALL, ""); //руссификатор
    cout << "Привет" << endl;
}