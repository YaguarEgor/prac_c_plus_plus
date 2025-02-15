#include <iostream>

struct smartstr {
    int a;
    private:
        void* operator new[](size_t);
};

int main() {
    return 0;
}