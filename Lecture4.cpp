// ---------------------------------Here we are taking look on more detailed programs of printing pattern -----------------------------

// 1 2 3
// 1 2 3
// 1 2 3

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// 3 2 1
// 3 2 1
// 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1; // Only change here
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// Triangle Star

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// 1
// 2 2
// 3 3 3

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        int count = i;
        while (j <= i)
        {
            cout << count;
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// A A A
// B B B
// C C C

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// A B C
// A B C
// A B C

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// A B C
// D E F
// G H I

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    char ch = 'A';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// A B C
// B C D
// C D E

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// A
// B B
// C C C

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// A
// B C
// D E F

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    char ch = 'A' + i - 2;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// A
// B C
// C D E

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i + j - 2;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
