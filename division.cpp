#include <iostream>

using namespace std;

int divis (int a, int b)
{
    if (b == 0)
        throw "Деление на ноль невозможно";
    return a / b;
}

int main()
{
    int a;
    int b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    try
    {
        cout << "Результат: " << divis (a, b);
    }
    catch (const char *ex)
    {
        cout << ex;
    }
    return 0;
}
