#include <iostream>

using namespace std;

int main()
{
    /* Task 1 

    int num;
    int array[3][4];

    cout << "Enter number: \n";
    cin >> num;

    array[0][0] = num;
    int lastnum = num;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            lastnum *= 2;
            array[i][j] = lastnum;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    */

    /* Task 2 

    int num;
    int array[3][4];

    cout << "Enter number: \n";
    cin >> num;

    array[0][0] = num;
    int lastnum = num;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            lastnum += 1;
            array[i][j] = lastnum;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    */

    /* Tassk 3 */

    int direction, step;
    int array[4][4] = {
        {5,0,1,8},
        {9,2,4,0},
        {8,7,4,3},
        {0,6,2,1}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter number of step, which will change direction: \n";
    cin >> step;

    cout << "Choose direction and enter number: \n";
    cout << "1. Top.\n";
    cout << "2. Bottom.\n";
    cout << "3. Left.\n";
    cout << "4. Right.\n";
    cin >> direction;


    switch (direction) {

    case 1:
        for (int x = 0; x < step; ++x) {

            int temp[4];

            for (int j = 0; j < 4; ++j) {
                temp[j] = array[0][j];
            }

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 4; j++) {
                    array[i][j] = array[i + 1][j];
                }
            }

            for (int j = 0; j < 4; j++) {
                array[3][j] = temp[j];
            }
        }
        break;

    case 2:
        for (int x = 0; x < step; ++x) {

            int temp[4];

            for (int j = 0; j < 4; ++j) {
                temp[j] = array[3][j];
            }

            for (int i = 3; i > 0; i--) {
                for (int j = 0; j < 4; j++) {
                    array[i][j] = array[i - 1][j];
                }
            }

            for (int j = 0; j < 4; j++) {
                array[0][j] = temp[j];
            }
        }
        break;

    case 3:
        for (int x = 0; x < step; ++x) {

            for (int i = 0; i < 4; ++i) {

                int temp = array[i][0];

                for (int j = 0; j < 3; j++) {
                    array[i][j] = array[i][j + 1];
                }

                array[i][3] = temp;
            }
        }
        break;

    case 4:
        for (int x = 0; x < step; ++x) {

            for (int i = 0; i < 4; ++i) {

                int temp = array[i][3];

                for (int j = 3; j > 0; j--) {
                    array[i][j] = array[i][j - 1];
                }

                array[i][0] = temp;
            }
        }
        break;

    default:
        cout << "Incorrect number.\n";
    }

    cout << "Array after shift:\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }







}
