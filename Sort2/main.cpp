//
//  main.cpp
//  Sort2
//
//  Created by Diana Ovechkina on 22.03.2022.
//

#include <iostream>
using namespace std;

void selectSort() {
    
    int N;
    int min;
    
    cout << "Введите количество элементов: ";
    cin >> N;
    
    int a[N];
    
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ": ";
        cin >> a[i];
    }
    
    cout << "Исходный массив: ";
    for(int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < N; i++) {
        min = i;
        for (int j = i + 1; j < N; j++) {
            if (a[j] < a[min]) min = j;
            if(i != min) {
                swap(a[i], a[min]);
            }
        }
    }
    
    cout << "Отсортированный массив: ";
    for(int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
}

void shellSort() {
    
    int N;
    cout << "Введите количество элементов: ";
    cin >> N;
    
    int d = N / 2;
    int j;
    int temp;
    int a[N];
    
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ": ";
        cin >> a[i];
    }
    
    cout << "Исходный массив: ";
    for(int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


    while (d > 0) {
        for (int i = d; i < N; i++) {
            temp = a[i];
            for (j = i; j >= d; j -= d) {
                if (temp < a[j - d]) a[j] = a[j - d];
                else break;
            }
            a[j] = temp;
        }
        d = d / 2;
    }
    
    cout << "Отсортированный массив: ";
    for(int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    selectSort();
    shellSort();
}
