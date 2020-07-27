#include <iostream>

using namespace std;

// Main
int main(){
    enum color{red, green, blue} c;
    c = red;
    cout << "Size of: " << sizeof(c) << endl;
    return 0;
}
