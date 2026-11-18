#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Project 3 — Mason Ayala
// CIS 5 Week 12 · Fifty students
// Do not edit the boilerplate. It randomly generates 50 scores.
// Do not type scores or names into this file.

void countGrades(const int scores[], int n,
    int& a, int& b, int& c, int& d, int& failing)
{
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    failing = 0;

    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= 90)
            a++;
        else if (scores[i] >= 80)
            b++;
        else if (scores[i] >= 70)
            c++;
        else if (scores[i] >= 60)
            d++;
        else
            failing++;
    }
}

double average(const int scores[], int n)
{
    if (n == 0)
        return 0;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }

    return sum * 1.0 / n;
}

void officeHours(const int scores[], int n, int* failingCount)
{
    int count = 0;
    int i = 0;

    while (i < n)
    {
        if (scores[i] < 60)
        {
            cout << "Student at index " << i
                 << " needs to come to office hours.\n";

            count++;
        }

        i++;
    }

    if (failingCount != nullptr)
    {
        *failingCount = count;
    }
}
