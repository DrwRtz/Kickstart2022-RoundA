#include <iostream>
#include <string>
 
int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 1; i <= testCases; i++)
    {
        std::string a, b;
        std::cin >> a >> b;

        int diff = (std::stoi(b) - std::stoi(a)) + 1; 

        int ans = 0;
        for (int j = 0; j < diff; j++)
        {
            std::string temp = a;
            
            int sum = 0, product = 1;

            for (int k = 0; k < temp.length(); k++)
            {
                sum += (temp[k] - '0');
                product *= (temp[k] - '0');
            } 
            
            if (product % sum == 0)
            {
                ans++;
            }

            a[a.length() - 1] = 
                ((a[a.length() - 1] - '0') + 1)  + '0';
        }

        std::cout << "Case #" << i << ": " << ans << "\n";
    }
}