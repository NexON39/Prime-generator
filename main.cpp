#include <iostream>
using namespace std;

int a,b,tests;

void primegenerator(int one, int two) {
    for(int repeat=one; repeat<=two; repeat++) {
        if(repeat<2) {
            repeat = 1;
        } else {
            for(int i=2; i<=two; i++) {
                if(repeat%i==0) {
                    if(i==repeat) {
                         cout << repeat << endl;
                    } else {
                        break;
                    }
                }
            }
        }
    }
}

int main() {
    cin >> tests;

    for(int i=0; i<tests; i++) {
        cin >> a >> b;
        primegenerator(a,b);
        cout << endl;
    }
}
