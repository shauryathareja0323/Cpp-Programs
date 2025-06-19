#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string S, Q;
    cin >> S >> Q;
    
    int N = S.length(), max_profit = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            string X = "";
            for (int k = i; k <= j; k++) 
                X += ((S[k] - '0') ^ (Q[k] - '0')) + '0';
            
            int X10 = 0;
            for (char c : X)
                X10 = X10 * 2 + (c - '0');
            
            int profit = X.length() / (X10 == 0 ? 1 : X10);
            cout<<profit<<endl;
            max_profit = max(max_profit, profit);
        }
    }

    cout << max_profit << endl;
    return 0;
}
