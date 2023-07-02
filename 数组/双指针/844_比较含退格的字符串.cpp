#include <string>
#include <iostream>
using namespace std;

class Solution {
    public:
        void getBackspaceStr(string s){
            int ns = s.size();
            int j = 0;
            for(int i = 0;i < ns; i++){
                if (s[i] != '#'){
                    s[j] = s[i];
                    j++;
                }
                else{
                    j--;
                    i++;
                    if(j>0 && i<ns){
                        s[j] = s[i];
                    }
                }
            }
        }
        bool backspaceCompare(string s, string t) {
            getBackspaceStr(s);
            getBackspaceStr(t);
            if (s==t)
                return 'true';
            else
                return 'false';
        }
};


int main(){
    string s = "ab#c";
    string t = "ad#c";
    Solution sl;
    bool a = sl.backspaceCompare(s,t);
    cout << a;
}
