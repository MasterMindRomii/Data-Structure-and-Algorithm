#include <iostream>
using namespace std;
int main()
{
    cout << "Hello User , In this video i'm learning Flowchart , Psuedocode and more Basic Things...!" << endl;
}

// ----------------------Sum of Two Numbers--------------------------------

#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 7;
    cout << "The sum of a and b is:" << a + b << endl;

    return 0;
}

// -------------------------Simple Interest----------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int p = 10000, r = 2, t = 4;
    float Simple_interest;

    Simple_interest = (p * r * t) / 100;

    cout << "Simple interest of given p,r,t is: " << Simple_interest << endl;

    return 0;
}

// -----------------------------------Average of 3 Numbers --------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 12, c = 16;
    float Average;

    Average = (a + b + c) / 3;

    cout << "The average of a, b and c is : " << Average << endl;

    return 0;
}

// -------------------------------------------------Odd or Even Number ------------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "Dude!" << a << "it's an Even Number" << endl;
    }

    else
    {
        cout << "Dude!" << a << "it's an Odd Number" << endl;
    }

    return 0;
}

// ----------------------------------Valid Triangle or Not ---------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b) > c and (a + c) > b and (b + c) > a)
    {
        cout << "Yes! Triangle is Valid :)" << endl;
    }

    else
    {
        cout << "No! Triangle is not Valid! Change it's Lenght and Try again :(" << endl;
    }

    return 0;
}

// --------------------------------------------Print Number 1 to N ---------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    cout << "Number in the range of 1 to" << n << "is " << endl;

    while (n > 0)
    {
        cout << n << endl;
        n = n - 1;
    }

    return 0;
}

// --------------------------------------------Print Number 1 to N include only odd numbers ---------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    cout << "Number in the range of 1 to" << n << "is " << endl;

    while (n > 0)
    {
        if (n % 2 != 0)
        {
            cout << n << endl;
            n = n - 1;
        }
    }

    return 0;
}

// --------------------------------------------Print Number 1 to N include only even numbers ---------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    cout << "Number in the range of 1 to" << n << "is " << endl;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << n << endl;
            n = n - 1;
        }
    }

    return 0;
}

// --------------------------------------------Factorial of a number ----------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    double Factorial = 1;

    if (num == 0)
        cout << "Factorial is 1" << endl;

    cout << "Factorial of " << num << " is: ";

    while (num > 0)
    {
        Factorial = num * Factorial;
        num = num - 1;
    }

    cout << Factorial;

    return 0;
}

// --------------------------Prime Number or Not --------------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << "Not a Prime Number";
    }

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << n << " is a Prime Number!";
    }
    else
    {
        cout << n << " is not a Prime Number :(";
    }

    return 0;
}