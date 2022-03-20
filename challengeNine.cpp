#include <iostream>
#include <string>

int findNumber(std::string &input)
{
    int sum = 0;
    for (int i = 0; i < input.length(); i++)
    {
        sum += (input[i] - '0');
    }

    if (sum % 9 == 0)
    {
        return 0;
    }

    for (int i = 1; i < 10; i++)
    {
        if ((sum + i) % 9 == 0)
            return i;
    }

    return -1;
}

int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 1; i <= testCases; i++)
    {
        std::string input;
        std::cin >> input;

        int target = findNumber(input);
 
        std::cout << "Case #" << i << ": ";

        if (target == 0)
        {
            input.insert(1, std::to_string(target));
            std::cout << input << "\n";
        }
        else
        {
            for (int j = 0; j <= input.length(); j++)
            {
                if ((input[j] - '0') > target)
                {
                    input.insert(j, std::to_string(target));
                    break;
                }
                
                if (j == input.length())
                {
                    input.insert(j, std::to_string(target));
                    break;
                }
            }

            std::cout << input << "\n";
        }
    }
}