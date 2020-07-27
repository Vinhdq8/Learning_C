#include <iostream>

using namespace std;

// Main
int main(){
    enum color{red = -5, green, blue} c;
    c = red;
    cout << "Size of: " << sizeof(c) << endl;
    return 0;
}
