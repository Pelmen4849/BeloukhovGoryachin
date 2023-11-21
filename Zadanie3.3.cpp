
#include <iostream> 
using namespace std;

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int arr[3];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Содержимое массива:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int sum = 0;
    int count = 0;
    int k = 3;
    for (int i = 0; i < n; i++) {
        if (arr[i] % k == 0) {
            sum += arr[i];
            count++;
        }
    }
    cout << "Сумма элементов массива кратных " << k << " равна: " << sum << endl;
    cout << "Количество элементов массива кратных " << k << " равно: " << count << endl;

    return 0;
}