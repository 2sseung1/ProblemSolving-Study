// ¼¼±Ý : https://www.acmicpc.net/problem/20492

#include <iostream>

int main()
{
	int prizeMoney = 0;
	std::cin >> prizeMoney;

	int case1 = (prizeMoney * 78) / 100;
	int case2 = prizeMoney - (((prizeMoney * 20) / 100) * 22) / 100;

	std::cout << case1 << ' ' << case2;
}