#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int n;
    
    cout << "Harap Memasukkan Nilai Antara 0-100" << endl;
    cin >> n;
    while (n <= 100) {
        while (n <= 0) {
            cout << "Ketik Ulang Nilai" << endl;
            cin >> n;
        }
        if (n >= 80) {
            cout << "A" << endl;
        } else {
            if (n >= 60) {
                cout << "B" << endl;
            } else {
                if (n >= 40) {
                    cout << "C" << endl;
                } else {
                    if (n >= 20) {
                        cout << "D" << endl;
                    } else {
                        if (n >= 0) {
                            cout << "E" << endl;
                        }
                    }
                }
            }
        }
        cin >> n;
    }
    cout << "Ketik Ulang Nilai" << endl;
    cin >> n;
    while (n <= 100) {
        while (n <= 0) {
            cout << "Ketik Ulang Nilai" << endl;
            cin >> n;
        }
        if (n >= 80) {
            cout << "A" << endl;
        } else {
            if (n >= 60) {
                cout << "B" << endl;
            } else {
                if (n >= 40) {
                    cout << "C" << endl;
                } else {
                    if (n >= 20) {
                        cout << "D" << endl;
                    } else {
                        if (n >= 0) {
                            cout << "E" << endl;
                        }
                    }
                }
            }
        }
        cin >> n;
    }
    cout << "Ketik Ulang Nilai" << endl;
    cin >> n;
    while (n <= 100) {
        while (n <= 0) {
            cout << "Ketik Ulang Nilai" << endl;
            cin >> n;
        }
        if (n >= 80) {
            cout << "A" << endl;
        } else {
            if (n >= 60) {
                cout << "B" << endl;
            } else {
                if (n >= 40) {
                    cout << "C" << endl;
                } else {
                    if (n >= 20) {
                        cout << "D" << endl;
                    } else {
                        if (n >= 0) {
                            cout << "E" << endl;
                        }
                    }
                }
            }
        }
        cin >> n;
    }
    cout << "GOBLOK LU, UDAH DISURUH MASUKKIN 0-100 JUGA" << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
