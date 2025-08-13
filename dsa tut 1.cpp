#include <iostream>
using namespace std;

int main() {
    // Problem 1: Array operations menu
    int n = 0, arr[100], choice, pos, val, i, found;
    
    while(1) {
        cout << "\n—MENU—\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n";
        cin >> choice;
        
        if(choice == 1) {
            cout << "Enter size: ";
            cin >> n;
            cout << "Enter elements: ";
            for(i=0; i<n; i++) cin >> arr[i];
        }
        else if(choice == 2) {
            for(i=0; i<n; i++) cout << arr[i] << " ";
        }
        else if(choice == 3) {
            cout << "Enter position and value: ";
            cin >> pos >> val;
            for(i=n; i>=pos; i--) arr[i] = arr[i-1];
            arr[pos] = val;
            n++;
        }
        else if(choice == 4) {
            cout << "Enter position: ";
            cin >> pos;
            for(i=pos; i<n; i++) arr[i] = arr[i+1];
            n--;
        }
        else if(choice == 5) {
            cout << "Enter value to search: ";
            cin >> val;
            found = 0;
            for(i=0; i<n; i++) {
                if(arr[i] == val) {
                    cout << "Found at " << i;
                    found = 1;
                    break;
                }
            }
            if(!found) cout << "Not found";
        }
        else if(choice == 6) {
            break;
        }
    }

    // Problem 2: Remove duplicates
    int arr2[100], n2, j, k;
    cout << "\n\nEnter size for duplicate removal: ";
    cin >> n2;
    cout << "Enter elements: ";
    for(i=0; i<n2; i++) cin >> arr2[i];
    
    for(i=0; i<n2; i++) {
        for(j=i+1; j<n2; ) {
            if(arr2[i] == arr2[j]) {
                for(k=j; k<n2; k++) arr2[k] = arr2[k+1];
                n2--;
            } else {
                j++;
            }
        }
    }
    
    cout << "After removing duplicates: ";
    for(i=0; i<n2; i++) cout << arr2[i] << " ";

    // Problem 3: Predict output
    cout << "\n\nProblem 3 output: ";
    int arr3[5] = {1};
    for (i = 0; i < 5; i++)
        cout << arr3[i];
    cout << " (Output is 10000)";

    // Problem 4a: Reverse array
    int arr4[100], n4;
    cout << "\n\nEnter size for array reversal: ";
    cin >> n4;
    cout << "Enter elements: ";
    for(i=0; i<n4; i++) cin >> arr4[i];
    
    for(i=0; i<n4/2; i++) {
        int t = arr4[i];
        arr4[i] = arr4[n4-i-1];
        arr4[n4-i-1] = t;
    }
    
    cout << "Reversed array: ";
    for(i=0; i<n4; i++) cout << arr4[i] << " ";

    // Problem 4b: Matrix multiplication
    int a[10][10], b[10][10], r[10][10], r1, c1, r2, c2;
    cout << "\n\nEnter rows and cols for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter elements: ";
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            cin >> a[i][j];
            
    cout << "Enter rows and cols for second matrix: ";
    cin >> r2 >> c2;
    if(c1 != r2) {
        cout << "Cannot multiply";
    } else {
        cout << "Enter elements: ";
        for(i=0; i<r2; i++)
            for(j=0; j<c2; j++)
                cin >> b[i][j];
                
        for(i=0; i<r1; i++) {
            for(j=0; j<c2; j++) {
                r[i][j] = 0;
                for(k=0; k<c1; k++)
                    r[i][j] += a[i][k] * b[k][j];
            }
        }
        
        cout << "Result:\n";
        for(i=0; i<r1; i++) {
            for(j=0; j<c2; j++)
                cout << r[i][j] << " ";
            cout << endl;
        }
    }

    // Problem 4c: Matrix transpose
    int mat[10][10], trans[10][10], rows, cols;
    cout << "\nEnter rows and cols for transpose: ";
    cin >> rows >> cols;
    cout << "Enter elements: ";
    for(i=0; i<rows; i++)
        for(j=0; j<cols; j++)
            cin >> mat[i][j];
            
    for(i=0; i<rows; i++)
        for(j=0; j<cols; j++)
            trans[j][i] = mat[i][j];
            
    cout << "Transpose:\n";
    for(i=0; i<cols; i++) {
        for(j=0; j<rows; j++)
            cout << trans[i][j] << " ";
        cout << endl;
    }

    // Problem 5: Row and column sums
    int mat2[10][10], r, c, sum;
    cout << "\nEnter rows and cols for row/col sums: ";
    cin >> r >> c;
    cout << "Enter elements: ";
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            cin >> mat2[i][j];
            
    cout << "Row sums:\n";
    for(i=0; i<r; i++) {
        sum = 0;
        for(j=0; j<c; j++)
            sum += mat2[i][j];
        cout << sum << endl;
    }
    
    cout << "Column sums:\n";
    for(j=0; j<c; j++) {
        sum = 0;
        for(i=0; i<r; i++)
            sum += mat2[i][j];
        cout << sum << endl;
    }

    return 0;
}
