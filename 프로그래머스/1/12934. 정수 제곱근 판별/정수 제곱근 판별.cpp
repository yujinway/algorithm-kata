#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long root = sqrt(n); 
    return root * root == n ? pow(root + 1, 2) : -1;
}