#include <iostream>
#include <set>
#include <cmath>
#include <string>
#include <vector>

using std::string;
using std::vector;

bool areDistinct(string _string, int i, int j)
{
    vector<bool> visited(256);

    for (int k = i; k <= j; k++) {
        if (visited[_string[k] - 'a'] == true)
            return false;
        visited[_string[k] - 'a'] = true;
    }
    return true;
}

int FindLongestSubString(string _string)
{
    int n = _string.size();
    int res = 0; 
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (areDistinct(_string, i, j))
                res = std::max(res, j - i + 1);
    return res;
}
int main(){
    string str = "mrinalini";
    int len = FindLongestSubString(str);
    std::cout<< len<<std::endl;
    return 0;   
}
