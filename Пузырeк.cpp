#include <iostream>

using namespace std;

void massiv ( int n, int *a)
{
    int k = 0;
    while (k < n)
    {
        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                c = a[i];
                a[i] = a[i + 1];
                a[i + 1] = c;
            }
        }
        k++;
    }
}

int main()
{
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int* array;
    array = new int[n];
    cout << endl << "Заполните массив: ";
    for (int i = 0; i < n; i++)
        cin >> array[i];
    massiv (n, array);
    cout << "Вывод массива: " << endl;
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    return 0;
}
