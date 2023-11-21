#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int min; int max, int num0, num1;
    num0 = 0; num1 = 0;
    cout << "Введите размер массива: " << endl;
    int razmas; cin >> razmas;

    int* X = { new int[razmas] };
    cout << "Введите значения массива: " << endl;
    int znachmas = 1;
    while (znachmas <= razmas) {
        int znach; cin >> znach;
        X[znachmas] = znach;
        znach = 0;
        znachmas++;
    }

    min = 0;
    max = 0;

    while (true) {
        for (int i = 0; i <= razmas; i++) {
            if (i > min) {
                min = X[i];

            }

            i = num0;
        }

        for (int i = 0; i <= razmas; i++) {
            if (max < i) {
                max = X[i];

            }

            i = num1;
        }
    }
    cout << "Минимальное значение: " << endl;
    cout << num0 << " " << min << endl;
    cout << "Максимальное значение: " << endl;
    cout << num1 << " " << max << endl;

}

