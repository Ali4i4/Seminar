#include <iostream>

using namespace std;

struct number
{
    int up;
    int down;
};

int nod (struct number foo)
{
    int change = 0;
    int division = 0;
    int x = abs(foo.up);
    int y = abs(foo.down);
    while (y > 0)
    {
        if (y > x)
        {
            y = y % x;
            division = x;
        }
        else
        {
            change = x;
            x = y;
            y = change;
            y = y % x;
            division = x;
        }
    }
    return division;
}

int main()
{
    number fraction;
    cout << "Введите числитель дроби: ";
    cin >> fraction.up;
    cout << endl << "Введите знаменатель дроби: ";
    cin >> fraction.down;
    if (fraction.up == 0 || fraction.down == 0)
        cout << endl << "Сокращение данной дроби невозможно. Повторите попытку позже. ";
    else
    {
        if (fraction.up < 0 && fraction.down > 0 ||  fraction.up > 0 && fraction.down < 0)
        {
            cout << endl << "Сокращение дроби -" << abs(fraction.up) << "/" << abs(fraction.down) << " -- > -" << abs(fraction.up)/nod(fraction) << "/" << abs(fraction.down)/nod(fraction);
        }
        else
            cout << endl << "Сокращение дроби " << abs(fraction.up) << "/" << abs(fraction.down) << " -- > " << abs(fraction.up)/nod(fraction) << "/" << abs(fraction.down)/nod(fraction);
    }
}
