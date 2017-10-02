// Emily Lukshin
// Lab 3

#include <iostream>

using namespace std;

int short sumShort(int short n)
{
    int short sum = 0;
    for(int short i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int long sumLong(int long n)
{
    int long sum = 0;
    for(int long i = 0; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

float factorial(long int n)
{
    float product = 1;
    for(int long i = 1; i <= n; i++) {
        product = product * i;
    }
    return product;
}

float floatR(int n)
{
    float ratio = 0;
    for(int i = 1; i <= n; i++)
    {
        ratio = ratio + (1/i);
    }
    return (ratio - 1.0);
}

double doubleR(int n)
{
    double ratio = 0;
    for(int i = 1; i <= n; i++)
    {
        ratio = ratio + (1/i);
    }
    return (ratio - 1.0);
}

int main()
{
    //There is an overflow for sum when n is equal to or greater than 256
    //You know that there is an error because the sum is reported as negative,
    //which does not make sense
    int n = 256;
    cout << "n = " << n << endl;
    cout << "sum (short) = " << sumShort(n) << endl << endl;

    n = 256;
    cout << "n = " << n << endl;
    cout << "sum (long) = " << sumLong(n) << endl;

    //There is an overflow for sum when n is equal to or greater than 1000364
    n = 1000364;
    cout << "n = " << n << endl;
    cout << "sum (long) = " << sumLong(n) << endl << endl;

    //There is an overflow for the factorial of n when n is equal to or greater than 35
    //The value of the factorial is reported as infinity
    n = 35;
    cout << "n = " << n << endl;
    cout << "factorial of n = " << factorial(n) << endl << endl;

    //At some point between n = 100 and n = 20 billion, there is an overflow and ratio equals -1
    n = 100;
    cout << "n = " << n << endl;
    cout << "ratio sums (float) = " << floatR(n) << endl;
    cout << "ratio sums (double) = " << doubleR(n) << endl;

    n = 20000000000;
    cout << "n = " << n << endl;
    cout << "ratio sums (float) = " << floatR(n) << endl;
    cout << "ratio sums (double) = " << doubleR(n) << endl;

    //The values being printed out should stop before 4.4,
    //but when floats are used, it prints out 4.4
    //When doubles are used it stops before 4.4
    for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
    cout << endl;
    for (double  i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

    return 0;

}
