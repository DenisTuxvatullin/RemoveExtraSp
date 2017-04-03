// RemoveExtraSp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RemoveExtraSpaces.h"
int main()
{
	std::string str;
	std::vector<std::string> resultList;
	std::cout << "Enter line: ";
	while (std::getline(std::cin, str))
	{
		str = RemoveExtraSpaces(str);
		if (str != " ")
		{
			resultList.push_back(str);
		}
		std::cout << "Enter line: ";
	}
	for (auto curS : resultList)
	{
		std::cout << curS << std::endl;
	}
	resultList.clear();
	system("pause"); // Команда задержки экрана
	return 0;
}

