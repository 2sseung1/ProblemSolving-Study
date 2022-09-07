// ¾ËÆÄºª °³¼ö : https://www.acmicpc.net/problem/10808

#include <iostream>

int main()
{
	char string[101] = "";
	std::cin >> string;

	int number[26] = { 0 };
	for (int i = 0; string[i] != '\0'; i++)
	{
		int index = (int)(string[i] - 'a');
		number[index]++;
	}

	for (int i = 0; i < 26; i++)
	{
		std::cout << number[i] << ' ';
	}
}