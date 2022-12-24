#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct vz {
  int oldA, newA;
};

void input(int* arr, int n) {
  for (int i = 0; i < n; i++) cin >> arr[i];
}

void output(int* arr, int n) {
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int n, n1;
  cin >> n;
  int* a = new int[n];
  input(a, n);
  cin >> n1;
  vz* dop = new vz[n1];
  //ввод 2го массива
  for (int i = 0; i < n1; ++i) {
    int temp, b_temp;
    cin >> temp >> b_temp;
    vz struct_temp;
    struct_temp.oldA = temp;
    struct_temp.newA = b_temp;
    dop[i] = struct_temp;
  }

  //мейн условие:
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n1; ++j) {
      if (a[i] == dop[j].oldA) {
        a[i] = dop[j].newA;
      }
    }
  }

  output(a, n);

  delete[] a;
  delete[] dop;
  return 0;
}
//Дана последовательность целых чисел.На этот раз к этой последовательности необходимо применить несколько изменений подряд.
//Каждое изменение задается парой чисел - старое значение, 
//которое необходимо заменить, и новое значение, на которое необходимо заменить старое значение.
//
//Формат входных данных
//В первой строке входных данных вводится натуральное число N, не превосходящее 100 - количество элементов последовательности.
//
//Во второй строке вводятся N целых чисел, по модулю не превосходящих 109 - элементы последовательности.
//
//В следующей строке вводится натуральное число M, не превосходящее 100 - количество замен, которые необходимо применить к массиву.
//
//В следующих M строках вводятся пары целых чисел, по модулю не превосходящие 109 - старое и новое значение.

