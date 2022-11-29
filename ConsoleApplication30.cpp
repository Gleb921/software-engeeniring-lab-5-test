#include <iostream>

#include <fstream>

using namespace std;

void checkInput()
{
    if (cin.fail())
    {
        throw "Incorrect input";
    }
}

void checkBounds(int a, int b)
{
    if (a >= b)
    {
        throw "Incorrect loop bounds input";
    }
}

void checkUpperBound(int n)
{
    if (n < 4)
    {
        throw "Incorrect upper bound input";
    }
}

void checkStep(int h)
{
    if (h <= 0)

    {
        throw "Incorrect step input";
    }
}

void filePrint(double x, double y, int n)
{
    ofstream fout("test.txt");
    fout << "iteration number  " ", x = " << x << ", y = " << y << "\n";

}

int calculate(double n, double x)

{

    double s = 1;

    double y = 0;

    int j, i;

    if (x < 0)

    {

        for (j = 2;j <= n - 2;j++)

        {

            s *= j * j;

        }

    }


    else if (x >= 0)

    {
        for (i = 0;i <= n - 1;i++)

        {

            for (j = 0;j <= n - 1;j++)

            {

                s *= x + i * i + j;

            }

            y += s;

        }
        return y;
    }

}

int main()
{
    double a = 0;
    double b = 0;
    double h = 0;
    int n = 0;

    double y = 0;
    double x = 0;

    try
    {
        cout << "Enter a < b ";
        cin >> a;
        cout << "Enter b ";
        cin >> b;
        checkInput();
        checkBounds(a, b);
        cout << "Enter h > 0 ";
        cin >> h;
        checkInput();
        checkStep(h);
        cout << "Enter n > 2 ";
        cin >> n;
        checkInput();
        checkUpperBound(n);

        x = a;

        while (x <= b)
        {


            y = calculate(x, n);
            cout << "\'x\' and \'y\' values are: " << x << ", " << y << endl;

            filePrint(x, y, n);

            x += h;
        }
    }
    catch (const char* ex)
    {
        cout << ex << endl;
    }
    catch (...)
    {
        cout << "Unknown error" << endl;
        return -2;
    }

    return 0;

}
