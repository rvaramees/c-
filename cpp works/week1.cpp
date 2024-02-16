#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool comp(string i, string j) {  
     if(i.compare(j)>0)
        return true;
    else
        return false;
}
int main() {
    std::string words[5], word;
    for(int i = 0; i < 5; i++){
        cin >> word;
        words[i] = word;
    }
    sort(words, words+5, comp);
    for (int i = 0; i < 5; i++)
        cout << words[i] << " ";
    return 0;
}