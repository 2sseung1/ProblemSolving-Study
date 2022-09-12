// 나는 친구가 적다 (Small) : https://www.acmicpc.net/problem/16171

#include <iostream>

int main()
{
	char string[101] = "", keyword[101] = "";
	std::cin >> string >> keyword;

	char newString[101] = "";
	int newStringIndex = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] < 'A')
			continue;

		newString[newStringIndex] = string[i];
		newStringIndex++;
	}
	newString[newStringIndex] = '\0';

	int keywordSize = 0;
	for (int i = 0; keyword[i] != '\0'; i++)
	{
		keywordSize++;
	}

	int keywordIndex = 0;
	bool includeString = false;
	for (int i = 0; newString[i] != '\0'; i++)
	{
		if (newString[i] == keyword[keywordIndex])
		{
			for (int j = i; newString[j] != '\0'; j++)
			{
				if (newString[j] == keyword[keywordIndex])
				{
					keywordIndex++;
				}
				else
				{
					keywordIndex = 0;
					break;
				}

				if (keywordSize <= keywordIndex)
				{
					includeString = true;
				}
			}
		}
	}

	if (includeString)
	{
		std::cout << '1';
	}
	else
	{
		std::cout << '0';
	}
}