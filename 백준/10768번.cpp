// 특별한 날 : https://www.acmicpc.net/problem/10768

#include <iostream>

int main()
{
	int month = 0, day = 0;
	std::cin >> month >> day;

	int monthDay = month * 100 + day;
	if (monthDay < 218)
		std::cout << "Before";
	else if (monthDay == 218)
		std::cout << "Special";
	else
		std::cout << "After";
}