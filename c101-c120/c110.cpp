#include <iostream>

using namespace std;

class Info {
public:
    Info() {
        data = new int;
        data_ arr = new int[3];
    }
    ~Info() {
        delete data;
        delete[] data_ arr;
    }

    void Dispose() {
        delete data;
        delete[] data_ arr;
    }

private:
    int* data;
    int* data_ arr;
};

int main() {
    Info* info = new Info();

    info->Dispose();
    delete info;

    return 0;
}