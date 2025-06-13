#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
string armor,heal,gun; // me
string armor1, heal1, gun1; // enemy

int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251), SetConsoleOutputCP(1251);


    cout << "Вы ничего не помня появились внепонятном для себя мире, полностью потеряв память..." << endl;
    cout << "На вас была броня?:" << endl;
    cin >> armor;
    if (armor == "да") { cout << "На вас была легкая кожаная куртка, мотошлем и мотозащита" << endl; }
    else { cout << "На вас была легкая домашняя одежда" << endl; }

    cout << "Вставая вы увидели педмет похожий на нож, он ваш?:" << endl;
    cin >> gun;

    if (gun == "да") { cout << "Вы подобрали нож." << endl; }
    else { cout << "Вы не стали подбирать чьё то оружие"; }

    cout << "Вставая вы почувствовали лёгкое головокружение." << endl;
    cout << "Вы начинаете терять зрение, присесть на пол?" << endl;
    cin >> heal;
    
    if (heal == "Да") {
        cout << "Вы потеряли сознание, но не упали." << endl;
    }
    else { cout << "Вы упали и ударились головой." << endl << "СМЕРТЬ"; }


    return 0;

}
