// 과제 안 내신 분..? : https://www.acmicpc.net/problem/5597

#include <iostream>

int main()
{
	int student[30] = { 0 };
	for (int i = 0; i < 28; i++)
	{
		int number = 0;
		std::cin >> number;

		student[number - 1]++;
	}

	for (int i = 0; i < 30; i++)
	{
		if (student[i] != 1)
			std::cout << i + 1 << '\n';
	}
}