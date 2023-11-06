//wap to take input for an int, if that int value is prime, then throw an exception with a message:
//"Prime input caused an exception", and if the input is non-prime, then nothing should happen

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    cout<<"ENTER A NUMBER:";
    int num;
    cin>>num;

    bool prime=isPrime(num);
    
    try
    {
        if(prime)
            throw prime;
    }
    catch(bool prime)
    {
        cout<<"Prime input caused an exception\n";
    }
    return 0;
}