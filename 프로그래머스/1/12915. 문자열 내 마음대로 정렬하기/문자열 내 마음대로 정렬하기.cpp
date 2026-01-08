#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int index;

bool compare (const string& a, const string& b)
{
    if (a[index] != (b[index]))
    {
        return a[index] < b[index];
    }
    
    return a < b;
}

vector<string> solution(vector<string> strings, int n) {
    index = n;
    sort(strings.begin(), strings.end(), compare);
    
    return strings;
}