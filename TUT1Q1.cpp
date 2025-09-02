 #include <iostream>
 using namespace std;
 int main() {
    int arr, size = 0, choice, value, pos;
    while (true) {
        cout << "\n1.CREATE 2.DISPLAY 3.INSERT 4.DELETE 5.LINEAR SEARCH 6.EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter size: ";
            cin >> size;
            for (int i = 0; i < size; i++) cin >> arr[i];
        } else if (choice == 2) {
            for (int i = 0; i < size; i++) cout << arr[i] << " ";
        } else if (choice == 3) {
            cout << "Value and position: ";
            cin >> value >> pos;
            for (int i = size; i > pos; i--) arr[i] = arr[i-1];
            arr[pos] = value;
            size++;
        } else if (choice == 4) {
            cout << "Position: ";
            cin >> pos;
            for (int i = pos; i < size - 1; i++) arr[i] = arr[i+1];
            size--;
        } else if (choice == 5) {
            cout << "Search value: ";
            cin >> value;
            int found = 0;
            for (int i = 0; i < size; i++)
                if (arr[i] == value) {
                    found = 1;
                    cout << "Found at " << i << endl;
                }
            if (!found) cout << "Not found\n";
        } else if (choice == 6) break;
    }
 do in cpp
 1
 1. Array Operations Menu Driven)
return 0;
 }


