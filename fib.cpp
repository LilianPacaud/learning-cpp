#include <iostream>
#include <list>

using namespace std;

int askUserNumber()
{
    std::cout << "Please input a number: " << std::endl;
    int userNumber;
    std::cin >> userNumber;

    return (userNumber);
}

int getFib(int number)
{
    int fibArray[number + 1];
    fibArray[0] = 0;
    fibArray[1] = 1;

    int i = 2;
    while (i < number + 1)
    {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
        i = i + 1;
    }

    return fibArray[number];
}

int main()
{
    std::cout << getFib(askUserNumber()) << endl;
}