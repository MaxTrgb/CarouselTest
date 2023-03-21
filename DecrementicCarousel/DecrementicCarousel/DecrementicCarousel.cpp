// DecrementicCarousel

#include <iostream>
using namespace std;

int main()
{
    const int N = 6;
    int arr[N] = { 0,0,0,0,0,0 };
    int option;
    int j, x = 0, l = 0, k = 0, count = 0;
    int temp = arr[0];

    cout << "At the first launch, you need to select 1 and enter the value.\nIn the future, you will have the opportunity to replace them.\n";

    while (true) {
        cout << "\nMake a choice:\n1 - Add new element;\n2 - Delete last element in array;\n3 - Start carrousel.\n4 - Exit program.\n";

        cin >> option;

        if (option == 1) {

            cout << "\nEnter values:\n";

            for (int i = 0; i < N; i++) {

                cin >> j;
                arr[i] = j;
                l++;
            }
            for (int i = 0; i < N; i++) {

                if (arr[i] != 0) {

                    cout << arr[i] << " ";

                }
            }
        }

        if (option == 2) {

            for (int i = 0; i < N; i++) {

                arr[l - 1] = 0;

                if (arr[i] != 0) {

                    cout << arr[i] << " ";
                }
            }
        }
        if (option == 3) {

            int choice = 2;
            while (choice != 1) {

                // decrease the first element and move it to the last position
                --arr[0];
                int temp = arr[0];
                for (int i = 0; i < N - 1; ++i) {

                    arr[i] = arr[i + 1];
                }
                arr[N - 1] = temp;


                // print the updated array
                cout << "Array: ";
                for (int i = 0; i < N; ++i) {

                    if (arr[i] > 0) {

                        cout << arr[i] << " ";
                    }

                }
                cout << endl;

                // ask for user input
                cout << "Press 1 to enter new values or 2 to continue: ";
                cin >> choice;

            }
            if (option == 4) {

                break;
            }
        }
    }
}

