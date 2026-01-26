#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> numbers;
    stringstream ss(s);
    
    int num;
    while(ss >> num)
    {
        numbers.push_back(num);
    }
        
    int minNum = *min_element(numbers.begin(), numbers.end());
    int maxNum = *max_element(numbers.begin(), numbers.end());
    
    answer = to_string(minNum) + " " + to_string(maxNum);
    
    return answer;
}