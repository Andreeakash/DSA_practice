#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LCS(string num, string num2, int m, int n, string &res) {
    if (m == 0 || n == 0) return 0;

    if (num[m - 1] == num2[n - 1]) {
        int len = LCS(num, num2, m - 1, n - 1, res);
        res += num[m - 1];  // Add character after recursive call to maintain correct order
        return 1 + len;
    } else {
        string res1 = "", res2 = "";
        int len1 = LCS(num, num2, m - 1, n, res1);
        int len2 = LCS(num, num2, m, n - 1, res2);

        if (len1 > len2) {
            res = res1;
            return len1;
        } else {
            res = res2;
            return len2;
        }
    }
}

int main() {
    string name1 = "abcd";
    string name2 = "mad";
    int m = name1.length();
    int n = name2.length();
    string ans = "";

    int length = LCS(name1, name2, m, n, ans);
    sort(ans.begin(), ans.end());  // Because we built it backwards

    cout << "Common characters: " << ans << endl;
    cout << "Length of LCS: " << length << endl;
}
