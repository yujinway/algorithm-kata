#include <string>
#include <vector>

using namespace std;

int solution(string word) {
    string vowels = "AEIOU";
    int unit[5] = {781, 156, 31, 6, 1};
    
    int answer = 0;
    
    for(int i = 0; i < word.size(); i++)
    {
        answer += (vowels.find(word[i]) * unit[i]) + 1;
    }
    
    return answer;
}