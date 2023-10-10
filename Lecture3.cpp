
// ------------------------<Prime Number or Not>----------------------------------
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n<=1)
    {
        cout << "Prime Number" << endl;
    }

    bool isPrime=true;

    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime)
    {
        cout << "Prime Number";
    }

    else 
    {
        cout << "Not Prime Number";
    }

    return 0;

}

// ------------------ <1. when no. of rows equal to no of column> -----------------------------------

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;

    while(n>=i)
    {
        int j;
        for(j=1;j<=n;j++)
        {
            cout << "*" ;
        }
        cout << endl;
        i=i+1;
    }
}

// ------------------ <1. when no. of rows equal to no of column with same numbers in row> -----------------------------------

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;

    while(n>=i)
    {
        int j;
        for(j=1;j<=n;j++)
        {
            cout << i ;
        }
        cout << endl;
        i=i+1;
    }
}