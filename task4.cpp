#include <iostream>
using namespace std;
string serviceType(char type);
float amount(char type, char time, int minutes);
main()
{
    char type, time;
    int minutes;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> type;
    if (type == 'p' || type == 'P')
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
        cout << "Enter the number of minutes used: ";
        cin >> minutes;
        string Stype = serviceType(type);
        cout << "Service Type: " << Stype << endl;
        cout << "Total Minutes Used: " << minutes << " minutes" << endl;
        float Amount = amount(type, time, minutes);
        cout << "Amount Due: $" << Amount << endl;
    }
    if (type == 'r' || type == 'R')
    {
        cout << "Enter the number of minutes used: ";
        cin >> minutes;
        string Stype = serviceType(type);
        cout << "Service Type: " << Stype << endl;
        cout << "Total Minutes Used: " << minutes << " minutes" << endl;
        float Amount = amount(type, time, minutes);
        cout << "Amount Due: $" << Amount << endl;
    }
}
string serviceType(char type)
{
    if (type == 'p' || type == 'P')
    {
        return "Premium";
    }
    if (type == 'r' || type == 'R')
    {
        return "Regular";
    }
}
float amount(char type, char time, int minutes)
{
    float Amount;
    if (type == 'r' || type == 'R')
    {
        if (minutes > 50)
        {
            minutes = (minutes - 50);
            Amount = 10 + (minutes * 0.20);
            return Amount;
        }
        if (minutes <= 50)
        {
            Amount = 10;
            return Amount;
        }
    }
    if (type == 'p' || type == 'P')
    {
        if (time == 'd' || time == 'D')
        {
            if (minutes > 75)
            {
                minutes = (minutes - 75);
                Amount = 25 + (minutes * 0.10);
                return Amount;
            }
            if (minutes <= 75)
            {
                Amount = 25;
                return Amount;
            }
        }
        if (time == 'n' || time == 'N')
        {
            if (minutes > 100)
            {
                minutes = (minutes - 100);
                Amount = 25 + (minutes * 0.05);
                return Amount;
            }
            if (minutes <= 100)
            {
                Amount = 25;
                return Amount;
            }
        }
    }
}