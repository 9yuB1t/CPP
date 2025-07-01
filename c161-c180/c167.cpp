#include <iostream>

using namespace std;

int main() {
    int data[] = { 10, 20, 30, 40 };

    for (int& i : data)  // 요소에 10 더함
        i += 10;

    cout << "== range-based for ==" << endl;

    for (const int i : data)  // 결과 출력
        cout << i << ", ";

    cout << endl;

    return 0;
}