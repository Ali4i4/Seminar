#include <iostream> 
 
using namespace std; 
 
void enter (string login) 
{ 
    string correct = "123al";
    if (login != correct)
        throw "Пользователь не найден. ";
    string password = "54321"; 
    string pass;
    int i = 0;
    while (i < 3) 
    { 
        cout << endl << "Введите пароль: "; 
        cin >> pass; 
        if (pass == password)
        {
            cout << "Вход выполнен. ";
            break;
        }
        else
        {
            cout << "Пароль неверный! " << endl;
            if ((pass != password) && (i == 2))
            { 
                throw "Попытка входа не удалась."; 
            } 
        }
        i++; 
    } 
} 
 
int main() 
{ 
    string login; 
    cout << "Введите логин: "; 
    cin >> login; 
    cout << endl; 
    try 
    { 
        enter (login); 
    } 
    catch (const char *ex) 
    { 
        cout << ex; 
    } 
    return 0; 
}
