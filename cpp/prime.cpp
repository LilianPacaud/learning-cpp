#include <iostream>
#include <list>

using namespace std;
list<int> getPrimeNumbers()
{
    int number = 2;
    list<int> arrayPrime{2};
    while (number < 200)
    {
        bool is_prime = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                is_prime = false;
            }
            if (i == number - 1 && is_prime == true)
            {
                arrayPrime.push_back(number);
            }
        }
        number++;
    }

    return arrayPrime;
}
int main()
{
    list<int> arrayPrime = getPrimeNumbers();
    for (auto const &i : arrayPrime)
    {
        std::cout << i << std::endl;
    }
}