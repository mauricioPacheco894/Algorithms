#include <bits/stdc++.h>

using namespace std;

int main(){

    string c;
    stack<char> s;

    cin >> c;

    if(c.length() & 1){
        cout << "NO" << endl;
        return 0;
    }
    
    for(int i = 0; i<c.length(); i++){
        if( c[i] == '(' or c[i] == '[' or c[i] == '{'){
            s.push(c[i]);
        }
        else if(s.empty()){
            cout << "NO" << endl;
            return 0;
        }
        else if(c[i] == ')' and s.top() == '('){
            s.pop();
        }
        else if(c[i] == ']' and s.top() == '['){
            s.pop();
            }
        else if(c[i] == '}' and s.top() == '{'){
            s.pop();
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }

    if(s.empty()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}