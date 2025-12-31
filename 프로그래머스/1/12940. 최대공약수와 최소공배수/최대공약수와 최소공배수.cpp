#include <string>
#include <vector>

using namespace std;


int getGCD(int a, int b)
{
	int r = a % b;
	if (r == 0)
	{
		return b;
	}
	else
	{
		return getGCD(b, r);
	}
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int GCD;
    int LCM;
    
    if(n >= m)
    {
        GCD = getGCD(n, m);
    }
    else
    {
        GCD = getGCD(m, n);
    }
    
    LCM = n * m / GCD;
    
    answer.push_back(GCD);
    answer.push_back(LCM);
    
    return answer;
}