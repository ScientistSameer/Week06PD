#include <iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int homeTownWeekends);

main()
{
    string yearType;
    int homeTownWeekends, holidays;
    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> homeTownWeekends;
    cout << calculateVolleyballGames(yearType, holidays, homeTownWeekends);
}
int calculateVolleyballGames(string yearType, int holidays, int homeTownWeekends)
{
    float freeHolidays, freeWeekends, leapTime, normalTime;
    freeHolidays = (holidays * 2) / 3;
    freeWeekends = 48 - homeTownWeekends;
    freeWeekends = (freeWeekends * 3) / 4;
    normalTime = freeHolidays + freeWeekends + homeTownWeekends;
    leapTime = normalTime + ((normalTime * 15) / 100);

    if (yearType == "normal")
    {
        return normalTime;
    }
    else if (yearType == "leap")
    {
        return leapTime;
    }
}