#include "Work.h"
#include <iostream>
#include <cstring>

using namespace std;

Work::Work()
{
    fullName = new char[1];
    fullName[0] = '\0';

    position = new char[1];
    position[0] = '\0';

    startYear = 0;
    salary = 0;
}

Work::Work(const char* fullName)
{
    if (fullName != nullptr)
    {
        this->fullName =
            new char[strlen(fullName) + 1];

        strcpy_s(
            this->fullName,
            strlen(fullName) + 1,
            fullName
        );
    }
    else
    {
        this->fullName = new char[1];
        this->fullName[0] = '\0';
    }

    position = new char[1];
    position[0] = '\0';

    startYear = 0;
    salary = 0;
}

Work::Work(
    const char* fullName,
    const char* position,
    int startYear,
    double salary)
{
    if (fullName != nullptr)
    {
        this->fullName =
            new char[strlen(fullName) + 1];

        strcpy_s(
            this->fullName,
            strlen(fullName) + 1,
            fullName
        );
    }
    else
    {
        this->fullName = new char[1];
        this->fullName[0] = '\0';
    }

    if (position != nullptr)
    {
        this->position =
            new char[strlen(position) + 1];

        strcpy_s(
            this->position,
            strlen(position) + 1,
            position
        );
    }
    else
    {
        this->position = new char[1];
        this->position[0] = '\0';
    }

    this->startYear = startYear;
    this->salary = salary;
}

Work::Work(const Work& other)
{
    fullName =
        new char[strlen(other.fullName) + 1];

    strcpy_s(
        fullName,
        strlen(other.fullName) + 1,
        other.fullName
    );

    position =
        new char[strlen(other.position) + 1];

    strcpy_s(
        position,
        strlen(other.position) + 1,
        other.position
    );

    startYear = other.startYear;
    salary = other.salary;
}

Work::~Work()
{
    delete[] fullName;
    delete[] position;
}

Work& Work::operator=(const Work& other)
{
    if (this != &other)
    {
        delete[] fullName;
        delete[] position;

        fullName =
            new char[strlen(other.fullName) + 1];

        strcpy_s(
            fullName,
            strlen(other.fullName) + 1,
            other.fullName
        );

        position =
            new char[strlen(other.position) + 1];

        strcpy_s(
            position,
            strlen(other.position) + 1,
            other.position
        );

        startYear = other.startYear;
        salary = other.salary;
    }

    return *this;
}

void Work::setFullName(const char* fullName)
{
    delete[] this->fullName;

    this->fullName =
        new char[strlen(fullName) + 1];

    strcpy_s(
        this->fullName,
        strlen(fullName) + 1,
        fullName
    );
}

void Work::setPosition(const char* position)
{
    delete[] this->position;

    this->position =
        new char[strlen(position) + 1];

    strcpy_s(
        this->position,
        strlen(position) + 1,
        position
    );
}

void Work::setStartYear(int startYear)
{
    this->startYear = startYear;
}

void Work::setSalary(double salary)
{
    this->salary = salary;
}

const char* Work::getFullName() const
{
    return fullName;
}

const char* Work::getPosition() const
{
    return position;
}

int Work::getStartYear() const
{
    return startYear;
}

double Work::getSalary() const
{
    return salary;
}

int Work::getExperience(int currentYear) const
{
    return currentYear - startYear;
}

void Work::print() const
{
    cout << "ПІБ: " << fullName << '\n';
    cout << "Посада: " << position << '\n';
    cout << "Рік вступу на роботу: "
        << startYear << '\n';
    cout << "Зарплата: "
        << salary << '\n';
}
