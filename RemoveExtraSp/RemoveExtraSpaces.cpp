#include "stdafx.h"
#include "RemoveExtraSpaces.h"

std::string RemoveExtraSpaces(const std::string &arg)
{
	bool ignoreSpaces = true;
	bool wasNotSpace = false;
	std::string result = "";
	size_t strLen = arg.length();
	for (size_t i = 0; i < strLen; i++)
	{
		if (arg[i] == ' ')
		{
			ignoreSpaces = true;
		}
		else
		{
			if (wasNotSpace && ignoreSpaces)
			{
				result.push_back(' ');
			}
			result.push_back(arg[i]);
			wasNotSpace = true;
			ignoreSpaces = false;
		}
	}
	return result;
}