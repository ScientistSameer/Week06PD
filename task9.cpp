#include <iostream>
using namespace std;

string checkPointPosition(int h, int x, int y);

main()
{
    int height, x, y;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    cout << checkPointPosition(height, x, y);
}
string checkPointPosition(int h, int x, int y)
{
    if (x == 0 && y == 0)
    {
        cout << "Border";
    }
    else if (x == 0 && y == h)
    {
        cout << "Border";
    }
    else if (x == h && y == 0)
    {
        cout << "Border";
    }
    else if (x == h && y == h)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == 0)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == h)
    {
        cout << "Border";
    }
    else if (x == 3 * h && y == 0)
    {
        cout << "Border";
    }
    else if (x == 3 * h && y == h)
    {
        cout << "Border";
    }
    else if (x == h && y == 2 * h)
    {
        cout << "Border";
    }
    else if (x == h && y == 3 * h)
    {
        cout << "Border";
    }

    else if (x == h && y == 4 * h)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == 2 * h)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == 3 * h)
    {
        cout << "Border";
    }
    else if (x == 2 * h && y == 4 * h)
    {
        cout << "Border";
    }
    else if ((x < 3 * h && x > 2 * h) && y < h)
    {
        cout << "Inside";
    }
    else if ((x < 2 * h && x > h) && y < h)
    {
        cout << "Inside";
    }
    else if ((x < 2 * h && x > h) && (y < 2 * h && y > h))
    {
        cout << "Inside";
    }
    else if ((x < 2 * h && x > h) && (y < 3 * h && y > 2 * h))
    {
        cout << "Inside";
    }
    else if ((x < 2 * h && x > h) && (y < 4 * h && y > 3 * h))
    {
        cout << "Inside";
    }
    else if (x < h  && y < h)
    {
        cout << "Inside";
    }
    else
    {
        cout << "Outside";
    }
}