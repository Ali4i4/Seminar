#include <iostream>

using namespace std;

void Output (string p, int i, int n)
{
    for (i; i < n; i++)
    {
        cout << p[i];
    }
}

int main()
{
    string p;
    int n = 0;
    int i = 0;
    int e = 0;
    cout << "Введите строку: (после последнего слова обязательно должен быть введён пробел)" << endl;
    getline (cin, p);
    if (p[0] == 'A') // для первого слова
    {
        i = 0;
        while (p[i] != ' ')
        {
            cout << p[i];
            i++;
        }
        n = i; // дубликат слова
        cout << " ";
        int i = 0;
        Output (p, i, n);
        i = n - 1;
    }
    while (i < p.length())
    {
        if ((p[i] != 'A') || (p[i - 1] != ' '))
        {
            cout << p[i];
        }
        else
        {
            if ((p[i] == 'A') && (p[i - 1] == ' '))
            {
                n = i; //начало слова
                e = n;
                while (p[i] != ' ') // конец слова
                    i++;
                Output (p, n, i);
                cout << " ";
                Output (p, e, i);
                cout << " ";
            }
        }
        i++;
    }
    return 0;
}