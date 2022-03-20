#include <iostream>
#include <string>
 
int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 1; i <= testCases; i++)
    {
        std::string requestedString, barbruh;
        std::cin >> requestedString >> barbruh;

        int removals = 0;

        for (int j = 0; j < barbruh.length(); j++)
        {
            while(requestedString[j] != barbruh[j])
            {
                barbruh.erase(j, 1);
                removals++;

                if (requestedString.length() >= barbruh.length())
                    break;
            }

            if (requestedString.length() >= barbruh.length())
                break;
        }

        std::cout << "Case #" << i << ": ";

        if (requestedString == barbruh)
        {
            std::cout << removals << "\n";
        } 
        else
        {
            std::cout << "IMPOSSIBLE" << "\n";
        }

    }    
}