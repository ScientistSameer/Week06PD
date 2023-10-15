#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main()
{
    string month;
    int numberOfStays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;
    cout << calculateHotelPrices(month, numberOfStays);
}
string calculateHotelPrices(string month, int numberOfStays)
{
    double priceStudio, priceApartment;
    string result;
    if (month == "May" || month == "October")
    {
        priceStudio = 50.00;
        priceApartment = 65.00;

        if (numberOfStays > 7 && numberOfStays <= 14)
        {
            priceStudio *= 0.95;
        }
        else if (numberOfStays > 14)
        {
            priceStudio *= 0.7;
            priceApartment *= 0.9;
        }
    }
    else if (month == "June" || month == "September")
    {
        priceStudio = 75.20;
        priceApartment = 68.70;
        if (numberOfStays > 14)
        {
            priceStudio *= 0.8;
            priceApartment *= 0.9;
        }
    }
    else if (month == "July" || month == "August")
    {
        priceStudio = 76.00;
        priceApartment = 77.00;
        if (numberOfStays > 14)
        {
            priceApartment *= 0.9;
        }
    }
    float totalApartment = priceApartment * numberOfStays;
    float totalStudio = priceStudio * numberOfStays;
    result = "Apartment: " + to_string(totalApartment) + "$.\nStudio: " + to_string(totalStudio) + "$.";
    return result;
}