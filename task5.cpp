#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
main()
{
    string fruit, dayOfWeek;
    double quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;
    double amount = calculateFruitPrice(fruit, dayOfWeek, quantity);
    if(amount ==0)
        cout << "error";
    else
        cout << amount;
}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    double price = 0;
    if (dayOfWeek == "Sunday")
    {
        if (fruit == "banana")
        {
            price = 2.70 * quantity;
        }
        else if (fruit == "apple")
        {
            price = 1.25 * quantity;
        }
        else if (fruit == "orange")
        {
            price = 0.90 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            price = 1.60 * quantity;
        }
        else if (fruit == "kiwi")
        {
            price = 3.00 * quantity;
        }
        else if (fruit == "pineapple")
        {
            price = 5.60 * quantity;
        }
        else if (fruit == "grapes")
        {
            price = 4.20 * quantity;
        }
    }
    else if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday" || dayOfWeek == "Saturday")
    {
        if (fruit == "banana")
        {
            price = 2.50 * quantity;
        }
        else if (fruit == "apple")
        {
            price = 1.20 * quantity;
        }
        else if (fruit == "orange")
        {
            price = 0.85 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            price = 1.45 * quantity;
        }
        else if (fruit == "kiwi")
        {
            price = 2.70 * quantity;
        }
        else if (fruit == "pineapple")
        {
            price = 5.50 * quantity;
        }
        else if (fruit == "grapes")
        {
            price = 3.85 * quantity;
        }
    }
    return price;
}