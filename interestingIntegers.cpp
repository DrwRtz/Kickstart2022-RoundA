#include <iostream>
#include <string>

void isItInteresting(std::string a, int &ans) 
{
    long long sum = 0, product = 1;

    for (int j = 0; j < a.length(); j++)
    {
        sum += (a[j] - '0');
        product *= (a[j] - '0');
    }
            
    if (product % sum == 0)
    {
        ans++;
    }
}
 
int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 1; i <= testCases; i++)
    {
        std::string a, b;
        std::cin >> a >> b;

        int ans = 0;
        while (a != b) 
        {
            isItInteresting(a, ans);

            if (a[a.length() - 1] == '9')
            {
                int curr = a.length() - 1;

                while (a[curr] == '9')
                {
                    a[curr] = '0';

                    if (curr == 0)
                    {
                        a = '1' + a;
                        break;
                    }

                    curr--;

                    if (a[curr] != '9')
                    {
                        a[curr] = ((a[curr] - '0') + 1) + '0';
                        break;
                    }
                }
            }
            else 
            {
                a[a.length() - 1] = 
                    ((a[a.length() - 1] - '0') + 1)  + '0';
            }
        }
        
        isItInteresting(a, ans);

        std::cout << "Case #" << i << ": " << ans << "\n";
    }
}