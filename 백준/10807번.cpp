// 개수 세기 : https://www.acmicpc.net/problem/10807

#include <iostream>

int main()
{
    int numberOfInteger = 0;
    std::cin >> numberOfInteger;

    int negative[101] = { 0 }, positive[101] = { 0 };
    for (int i = 0; i < numberOfInteger; i++)
    {
        int number = 0;
        std::cin >> number;

        if (0 <= number)
        {
            positive[number]++;
        }
        else
        {
            number *= -1;
            negative[number]++;
        }
    }

    int findNumber = 0;
    std::cin >> findNumber;
    findNumber *= -1;

    if (0 <= findNumber)
    {
        std::cout << positive[findNumber];
    }
    else
    {
        findNumber *= -1;
        std::cout << negative[findNumber];
    }
}