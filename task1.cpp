#include <iostream>
using namespace std;
string decideActivity(string temperature, string humidity);

main()
{
    string temperature, humidity;
    cout<< "Enter temperature (warm or cold): ";
    cin >> temperature;
    cout<< "Enter humidity (dry or humid): ";
    cin >> humidity;
    string result =decideActivity(temperature, humidity);
    cout << "Recommended activity: " <<result; 
}

string decideActivity(string temperature, string humidity)
{
    if (temperature == "warm" && humidity == "dry")
    {
        return "Play tennis";
    }
    if (temperature == "warm" && humidity == "humid")
    {
        return "Swim";
    }
    if (temperature == "cold" && humidity == "humid")
    {
        return "Watch TV";
    }
    if (temperature == "cold" && humidity == "dry")
    {
        return "Play basketball";
    }
}