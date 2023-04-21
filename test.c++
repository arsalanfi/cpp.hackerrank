#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    int b ;
    cin >> a >> b;
    
    if (a<10){
         for (int i = a; i < 10; i++) {
        switch (i) {
        case 1:
            cout << "one \n";
            break;
        case 2:
            cout << "two \n";
            break;
        case 3:
            cout << "three \n";
            break;
        case 4:
            cout << "four \n";
            break;
        case 5:
            cout << "five \n";
            break;
        case 6:
            cout << "six \n";
            break;
        case 7:
            cout << "seven n";
            break;
        case 8:
            cout << "eight \n";
            break;
        case 9:
            cout << "nine \n";
            break;
        }
    }
     if (a % 2 == 0) {
            cout << "even\n";
        }
     else {
              cout << "odd\n";
        }

    }
    if (b<10){
        for (int j = b; j< 10 ; j++){
            switch  (j){
            case 1 :
                cout<<"one \n";
                    break;
            case 2 :
                cout<<"two \n";
                    break;
            case 3 :
                cout<<"three \n";
                    break;
            case 4 :
                cout<<"four \n";
                    break;
            case 5 :
                cout<<"five \n";
                    break;
            case 6 :
                cout<<"six \n";
                    break;
            case 7 :
                cout<<"seven \n";
                    break;
            case 8 :
                cout<<"eight \n";
                    break;
            case 9 :
                cout<<"nine \n ";
                    break;
            }
            if(b % 2 == 0 ){
                cout << "even \n";
            }
            else{
                cout << "odd \n";
            }
        }
        
    }    
    return 0;
}
