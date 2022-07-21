#include <iostream>
#include <string>

std::string Convert(const std::string&);

int main()
{
	std::string inputStr;
	std::cin >> inputStr;
	std::cout << Convert(inputStr) << std::endl;
}

std::string Convert(const std::string& str)
{
	int repeating[255]{0};
	std::string result(str);
	for(size_t i = 0; i < str.length(); ++i)
	{
		repeating[std::toupper(str[i])] += 1;
	}

	for(size_t i = 0; i < str.length(); ++i)
	{
		result[i] = repeating[std::toupper(str[i])] > 1 ? ')' : '(';
	}

	return result;
}