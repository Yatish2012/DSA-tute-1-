 #include <iostream>
 using namespace std;
 int main() {
 int a, n;
 cin >> n;
 for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n-1; i >= 0; i--) cout << a[i] << " ";
    return 0;
 }
 #include <iostream>
 using namespace std;
 int main() {
    int a, b, res, n, m, p, q;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cin >> p >> q;
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> b[i][j];
    if (m == p) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < q; j++) {
                res[i][j] = 0;
                for (int k = 0; k < m; k++)
                    res[i][j] += a[i][k] * b[k][j];
            }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < q; j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
 }
 #include <iostream>
 using namespace std;
 int main() {
    int a, b, n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            b[i][j] = a[j][i];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << endl;
 b. Matrix Multiplication
 c. Transpose of a Matrix
}
 return 0;
 }
