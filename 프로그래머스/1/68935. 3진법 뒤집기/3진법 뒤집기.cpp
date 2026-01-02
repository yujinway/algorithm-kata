#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    string ternary = "";
    
    while(n != 0)
    {
        ternary += n % 3;
        n /= 3;
    }
    
    reverse(ternary.begin(), ternary.end());
    
    for(int i = 0; i < ternary.size(); i++)
    {
        answer += ternary[i] * pow(3, i);
    }
    
    return answer;
}