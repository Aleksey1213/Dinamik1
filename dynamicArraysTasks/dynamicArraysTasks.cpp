#include <iostream>
using namespace std;

// Funcs
void print(int* mas, int n) {
    for (int i = 0; i < n; i++) cout << mas[i] << "\t";
    cout << endl;
}

void printF(float* mas, int n) {
    for (int i = 0; i < n; i++) cout << mas[i] << "\t";
}

float getSumF(float* mas, int n) {
    float sum = 0;

    for (int i = 0; i < n; i++) sum+=mas[i];

    return sum;
}

int getAmount() {
    int a;

    cout << "Введите кол-во элементов:\t";
    cin >> a;

    return a;
}


// Tasks
int Task1() {
    int k, i;

    k = getAmount();

    while (true) {
        if (k == 0) {
            cout << "Кол-во элементов не может быть равно 0!" << endl;
            k = getAmount();
        }
        else if (k > 20) {
            cout << "Кол-во элементов не может быть больше 20!" << endl;
            k = getAmount();
        }
        else {
            break;
        }
    }

    int* array = new int[k];

    //cout << k;
    for (i = 0; i < k; i++) {
        cout << "Введите значение элемента массива:\t";
        cin >> array[i];
    }

    print(array, k);
    cout << endl;

    for (i = 0; i < k; i++) {
        if (array[i] < 0) array[i] = 0;
    }

    print(array, k);
    cout << endl;

    return 0;
}

int Task2() {
    int k, i;

    k = getAmount();

    while (true) {
        if (k == 0) {
            cout << "Кол-во элементов не может быть равно 0!" << endl;
            k = getAmount();
        }
        else if (k > 100) {
            cout << "Кол-во элементов не может быть больше 100!" << endl;
            k = getAmount();
        }
        else {
            break;
        }
    }

    float* array = new float[k];

    for (i = 0; i < k; i++) {
        /*cout << "Введите значение элемента массива:\t";
        cin >> array[i];*/
        array[i] = (float)rand() / (float)RAND_MAX;
    }

    printF(array, k);
    cout << endl;

    cout << "Сумма элементов массива:\t" << getSumF(array, k) << endl;
    return 0;
}

int Task3() {
    int k, i;

    k = getAmount();

    while (true) {
        if (k == 0) {
            cout << "Кол-во элементов не может быть равно 0!" << endl;
            k = getAmount();
        }
        else if (k > 50) {
            cout << "Кол-во элементов не может быть больше 50!" << endl;
            k = getAmount();
        }
        else {
            break;
        }
    }

    int* array = new int[k];

    for (i = 0; i < k; i++) {
        array[i] = rand();
    }

    int sum = 0,
        km2 = 0;

    for (i = 0; i < k; i++) {
        if (array[i] % 2 == 0) {
            sum += array[i];
            km2 += 1;
        }
    }

    float average = (float)sum/km2;

    if (k <= 10) print(array, k);

    cout << "Среднее арифметическое чётных значений массива: \t" << average << endl;

    return 0;
}

int main()
{
    setlocale(0, "");

    //Task1();
    //Task2();
    Task3();
    return 0;
}

