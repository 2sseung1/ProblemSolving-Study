// ¹æÇÐ ¼÷Á¦ : https://www.acmicpc.net/problem/5532

#include <iostream>
#include <cmath>

int main()
{
	int vacationDay = 0, koreanPage = 0, mathPage = 0, solveKorean = 0, solveMath = 0;
	std::cin >> vacationDay >> koreanPage >> mathPage >> solveKorean >> solveMath;

	int koreanDay = ceil((float)koreanPage / (float)solveKorean);
	int mathDay = ceil((float)mathPage / (float)solveMath);

	if (koreanDay <= mathDay)
	{
		std::cout << vacationDay - mathDay;
	}
	else
	{
		std::cout << vacationDay - koreanDay;
	}
}