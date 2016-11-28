#include <iostream>

using namespace std;

void vremya();
void pi();

int main()
{
    cout << "Выберите программу: " << endl;
    cout << "1 - Время" << endl;
    cout << "2 - Число Пи" << endl;

    int choise; // переменная для выбора запускаемой программы
    cin >> choise;

    return 0;
}
