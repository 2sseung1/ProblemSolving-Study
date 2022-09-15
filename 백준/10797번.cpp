// 10∫Œ¡¶ : https://www.acmicpc.net/problem/10797

#include <iostream>

int main()
{
	int day = 0, licensePlate[5] = { 0 }, violateCar = 0;
	std::cin >> day;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> licensePlate[i];

		if (day == licensePlate[i])
		{
			violateCar++;
		}
	}

	std::cout << violateCar;
}