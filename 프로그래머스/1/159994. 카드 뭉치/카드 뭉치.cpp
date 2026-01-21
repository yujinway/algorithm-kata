#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int currentCard1 = 0;
    int currentCard2 = 0;
    
    for (int i = 0; i < goal.size(); i++)
    {
        string currentWord = goal[i];
        
        if(currentCard1 < cards1.size() && cards1[currentCard1] == currentWord)
        {
            currentCard1++;
        }
        else if(currentCard2 < cards2.size() && cards2[currentCard2] == currentWord)
        {
            currentCard2++;
        }
        else
        {
            return "No";
        }
    }
    
    return "Yes";
}