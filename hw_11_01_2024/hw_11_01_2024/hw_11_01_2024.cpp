#include <iostream>
#include <ctime>
using namespace std;

#include "Student.h"

class Date {
    unsigned short day;
    unsigned short month;
    long long year;
public:
    Date() :Date(25, 12, 2023) {}

    Date(unsigned short day, unsigned short month, long long year)
    {
        SetDay(day);
        SetMonth(month);
        SetYear(year);
    }

    Date(unsigned short day, unsigned short month) :Date(day, month, 2005) {}

    void PrintDate() const
    {
        cout << day << "." << month << "." << year << "\n";
    }

    void SetDay(unsigned short day)
    {
        if (day == 0 || day > 31) throw "ERROR! The day must be from 0 to 31!";
        this->day = day;
    }

    void SetMonth(unsigned short month)
    {
        if (month == 0 || month > 12) throw "ERROR! The day must be from 0 to 12!";
        this->month = month;
    }

    void SetYear(long long year)
    {
        this->year = year;
    }

    unsigned short GetDay() const
    {
        return day;
    }

    unsigned short GetMonth() const
    {
        return month;
    }

    long long GetYear() const
    {
        return year;
    }
};

int main()
{
    srand(time(NULL));

    Student student;
    Date date;

    Date d(11, 8);

    student.PrintStudent();
    cout << "Birthday: ";
    d.PrintDate();
    cout << "Start study: ";
    date.PrintDate();
    cout << "\n";

    cout << "Practic: ";
    student.AddPractic(12);
    student.AddPractic(10);
    student.AddPractic(8);
    student.PrintPractic();
    cout << "\n\n";

    cout << "Home Work: ";
    student.AddHW(10);
    student.AddHW(12);
    student.PrintHW();
    cout << "\n\n";

    cout << "Exam: ";
    student.AddExam(7);
    student.AddExam(7);
    student.AddExam(10);
    student.PrintExam();
    cout << "\n";
}

