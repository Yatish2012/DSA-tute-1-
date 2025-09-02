 #include <iostream>
 using namespace std;
 int main() {
 int a, n, m;
 cin >> n >> m;
 for (int i = 0; i < n; i++)
 for (int j = 0; j < m; j++)
 cin >> a[i][j];
 for (int i = 0; i < n; i++) {
 int s = 0;
 for (int j = 0; j < m; j++)
 s += a[i][j];
 cout << "Row " << i << " sum " << s << endl;
 }
 for (int j = 0; j < m; j++) {
 int s = 0;
 for (int i = 0; i < n; i++)
 s += a[i][j];
 cout << "Col " << j << " sum " << s << endl;
 }
 return 0;
 }
 i
