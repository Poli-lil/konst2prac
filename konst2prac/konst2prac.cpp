#include <iostream>
#include <Windows.h>
#include "Work.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Work workers[5] =
    {
        Work(
            "Іваненко Іван Іванович",
            "Програміст",
            2018,
            35000
        ),

        Work(
            "Петренко Петро Петрович",
            "Менеджер",
            2021,
            28000
        ),

        Work(
            "Сидоренко Олена Олександрівна",
            "Програміст",
            2015,
            45000
        ),

        Work(
            "Коваленко Анна Сергіївна",
            "Дизайнер",
            2020,
            32000
        ),

        Work(
            "Мельник Максим Олегович",
            "Менеджер",
            2012,
            40000
        )
    };

    int currentYear = 2026;
    int experience;

    cout << "Введіть стаж: ";
    cin >> experience;

    cout << '\n';
    cout << "Працівники зі стажем більше "
        << experience << " років:" << '\n';

    for (int i = 0; i < 5; i++)
    {
        if (workers[i].getExperience(currentYear)
    > experience)
        {
            workers[i].print();
        }
    }

    double salary;

    cout << '\n';
    cout << "Введіть зарплату: ";
    cin >> salary;

    cout << '\n';
    cout << "Працівники із зарплатою більше "
        << salary << ":" << '\n';

    for (int i = 0; i < 5; i++)
    {
        if (workers[i].getSalary() > salary)
        {
            workers[i].print();
        }
    }
    char position[100];

    cin.ignore();

    cout << '\n';
    cout << "Введіть посаду: ";
    cin.getline(position, 100);

    cout << '\n';
    cout << "Працівники на посаді "
        << position << ":" << '\n';

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(
            workers[i].getPosition(),
            position) == 0)
        {
            workers[i].print();
        }
    }

}
