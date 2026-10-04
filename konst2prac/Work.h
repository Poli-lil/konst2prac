#pragma once
class Work
{
private:
    char* fullName;
    char* position;

    int startYear;
    double salary;

public:
    Work();
    explicit Work(const char* fullName);

    Work(
        const char* fullName,
        const char* position,
        int startYear,
        double salary
    );

    Work(const Work& other);

    ~Work();

    Work& operator=(const Work& other);

    void setFullName(const char* fullName);
    void setPosition(const char* position);
    void setStartYear(int startYear);
    void setSalary(double salary);

    const char* getFullName() const;
    const char* getPosition() const;
    int getStartYear() const;
    double getSalary() const;

    int getExperience(int currentYear) const;

    void print() const;
};

