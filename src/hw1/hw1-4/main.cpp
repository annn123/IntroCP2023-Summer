#include <iostream>
using namespace std;

int main() {
    
    int weidght,height;
    cin >> weidght >> height;
    int a[height][weidght];
    
    for(int i = 0 ; i < height ;i++){
        for(int j = 0 ; j < weidght ; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0 ; i < weidght ; i++){
        int n = 0;
        int d = 0;
        for(int j = 0 ; j < height ; j++){
            if (a[j][i] == 1) {
                n += 1;
            }
            else if (a[j][i] == 0){
                if (n != 0) {cout << n << " ";}
                n = 0;
                d += 1;
            }
        }
        if (n != 0 || d == height) {cout << n << " ";}
        cout << endl;
    }
    
    for(int i = 0 ; i < height ;i++){
        int n = 0;
        int d = 0;
        for(int j=0 ; j < weidght ; j++){
            if (a[i][j] == 1) {
                n += 1;
            }
            else if (a[i][j] == 0){
                if (n != 0) {cout << n << " ";}
                n = 0;
                d += 1;
            }
        }
        if (n != 0 || d == weidght ) {cout << n << " ";}
        cout << endl;
    }
}