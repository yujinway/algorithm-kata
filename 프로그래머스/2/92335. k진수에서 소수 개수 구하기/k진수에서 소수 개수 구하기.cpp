#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

bool isPrime(long long num) {
    
    if (num < 2)
    {
        return false;
    }
    
    for (long long i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    
    string s = "";
    while (n > 0)
    {
        s += to_string(n % k);
        n /= k;
    }
    reverse(s.begin(), s.end());
    
    stringstream ss(s);
    string token;
    
    while (getline(ss, token, '0'))
    {
        if (!token.empty())
        {
            long long num = stoll(token);
            if (isPrime(num))
            {
                answer++;
            }
        }
    }
    
    return answer;
}