#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> phone_book_set(phone_book.begin(), phone_book.end());
    bool answer = true;
    
    for(const string& number : phone_book)
    {
        for(int i = 1; i < number.size(); i++)
        {
            if(phone_book_set.count(number.substr(0, i)))
            {
                answer = false;
            }
        }
    }
    return answer;
}