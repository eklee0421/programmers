#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    string answer = "";
    for(int i=0; i < participant.size();i++){
        if(i == participant.size()-1){
            answer = participant[i];
            break;
        }
        if(participant[i] != completion[i]){
            answer = participant[i];
            break;
        }
    }
    return answer;
}
