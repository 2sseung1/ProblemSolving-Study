// Æò±Õ Á¡¼ö : https://www.acmicpc.net/problem/10039

#include <iostream>

int main()
{
	int score[5] = { 0 }, totalScore = 0;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> score[i];

		if (score[i] < 40)
			score[i] = 40;

		totalScore += score[i];
	}

	std::cout << totalScore / 5;
}