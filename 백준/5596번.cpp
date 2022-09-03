// 시험 점수 : https://www.acmicpc.net/problem/5596

#include <iostream>

int main()
{
	int mingukScore[4] = { 0 }, manseScore[4] = { 0 }, mingukTotalScore = 0, manseTotalScore = 0;
	for (int i = 0; i < 4; i++)
	{
		std::cin >> mingukScore[i];
		mingukTotalScore += mingukScore[i];
	}
	for (int i = 0; i < 4; i++)
	{
		std::cin >> manseScore[i];
		manseTotalScore += manseScore[i];
	}

	if (manseTotalScore <= mingukTotalScore)
		std::cout << mingukTotalScore;
	else
		std::cout << manseTotalScore;
}