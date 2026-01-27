#include <string>
#include <vector>
#include <cmath>

using namespace std;

int countDivisors(int n)
{
    int count = 0;
    
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(i * i == n)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }
    }
    
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i = 1; i <= number; i++)
    {
        int divisorCount = countDivisors(i);
        
        if(divisorCount > limit)
        {
            answer += power;
        }
        else
        {
            answer += divisorCount;
        }
    }
    return answer;
}