#include <iostream>
#include <list>

using namespace std;

int main()
{
    int number = 2;
    list<int> arrayPrimary{2};
    while (number < 200)
    {
        bool is_primay = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                is_primay = false;
            }
            if (i == number - 1 && is_primay == true)
            {
                arrayPrimary.push_back(number);
            }
        }
        number++;
    }

    for (auto const &i : arrayPrimary)
    {
        std::cout << i << std::endl;
    }
}