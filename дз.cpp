#include <iostream>
 
using namespace std;

void array (int n, int *a)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int sum (int n, int* mas, int* mass)
{
    int i;
    for (i = 0; i < n; i++)
    {
        mas[i] = mas[i] + mass[i];
    }
    return mas[i];
}

int division (int n, int* mas, int* mass)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        mas[i] = mas[i] - mass[i];
    }
    return mas[i];
}

int main()
{
    int n;
    char c;
    cout << "Введите размерность массивов: ";
    cin >> n;
    cout << endl;
    int mas[n];
    int mass[n];
    cout << "Введите элементы массива 1: ";
    array(n, mas);
    cout << "Введите знак: ";
    cin >> c;
    cout << "Введите элементы массива 2: ";
    array (n, mass);
    if (c == '+')
    {
        sum(n, mas, mass);
    }
    else
    {
        division(n, mas, mass);
    }
    cout << "Итог вычислений: "; 
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    return 0;
}
