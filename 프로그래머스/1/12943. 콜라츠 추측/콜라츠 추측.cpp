#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int count = 0;
    long long num = n;
    
    while (num != 1 && count < 500)
    {
        if(num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = num * 3 + 1;
        }
        count++;
    }
    
    return count == 500 ? -1 : count;
}