#include <string>
#include <iostream>
using namespace std;

class Solution {
    public:
        int getBackspaceStr(string& str){
            cout<<str<<endl;
            int n = str.size();
            int i=0, j = 0;
            cout<<"i:"<<i<<" j:"<<j<<endl;
            while (i<n){
                if(str[i]!='#'){
                    str[j] = str[i];
                    i++;
                    j++;
                }
                //Óöµ½#¾ÍÍË
                else{
                    j--;
                    if (j<0)
                        j = 0;
                    i++;
                }
            }
            cout<<j<<endl;
            for(int k=0;k<j;k++)
                cout<<str[k];
            cout<<endl;
            return j;
        }
        bool backspaceCompare(string s, string t) {
            int ns = getBackspaceStr(s);
            int nt = getBackspaceStr(t);
            if(ns!=nt)
                return false;
            else{
                for(int i=0;i<ns;i++){
                    if (s[i]!=t[i])
                        return false;
                }
            }
            return true;
        }
};


int main(){
    string s = "addd#c";
    string t = "ab#c";
    Solution sl;
    bool a = sl.backspaceCompare(s,t);
    cout << a;
}
