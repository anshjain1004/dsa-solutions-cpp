#include<bits/stdc++.h>
using namespace std;

string revString(string str){
    int n = str.length();
    if(n <= 1){
        return str;
    }
    int i = 0;
    int j = str.length()-1;

    while(i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

int main(){
    string str = "ansh";
    string ans = revString(str);
    cout<<ans;
    return 0;
}