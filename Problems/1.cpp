#include <bits/stdc++.h>
using namespace std;

vector<string> Substrings(string &s) {
    vector<string> res;
    for(int i = 0; i < s.length(); i++) {
        for(int j = i; j < s.length(); j++) {
            res.push_back(s.substr(i, j-i+1));
        }
    }
    return res;
}

int binaryToDecimal(string bin) {
    int dec_value = 0;
    int base = 1;
    for (int i = bin.length() - 1; i >= 0; i--) {
        if (bin[i] == '1')
            dec_value += base;
        base *= 2;
    }
    return dec_value;
}

int main() {
    string s;
    string q;
    int n,T;

    cin>>T;
    cin>>n;
    
    vector<string> substr_s = Substrings(s), substr_q = Substrings(q);
    
    int max_profit = 0;

    for (int i = 0; i < substr_s.size(); i++) {
        if (substr_s[i].size() != substr_q[i].size()) continue;

        string X = "";
        for (int j = 0; j < substr_s[i].size(); j++)
            X += ((substr_s[i][j] - '0') ^ (substr_q[i][j] - '0')) + '0';

        int X10 = binaryToDecimal(X);
        int profit = X.size() / pow(2, X10);
        max_profit = max(max_profit, profit);

        cout << substr_s[i] << "  " << substr_q[i] << "  XOR: " << X << "  Decimal: " << X10 << "  Profit: " << profit << endl;
    }

    cout << "Maximum Profit: " << max_profit << endl;
    return 0;
}
