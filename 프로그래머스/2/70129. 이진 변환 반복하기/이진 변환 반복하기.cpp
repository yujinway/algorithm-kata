#include <string>
#include <vector>

using namespace std;

string ToBinary(int n)
{
    string result = "";
    while (n > 0)
    {
        result = to_string(n % 2) + result;
        n /= 2;
    }
    
    return result;
}

vector<int> solution(string s) {

    int removedZeroCount = 0;
    int binaryConversionCount = 0;
    
    while (s != "1")
    {
        int oneCount = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                oneCount++;
            }
            else if (c == '0')
            {
                removedZeroCount++;
            }
    
        }
        
        s = ToBinary(oneCount);
        binaryConversionCount++;
    }
    
    return {binaryConversionCount, removedZeroCount};
}