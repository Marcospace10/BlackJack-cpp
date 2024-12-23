#include <iostream>
#include <cstdlib>

using namespace std;

string cards [11] = {"1","2","3","4","5","6","7","8","9","10","ASSO",};

int main(){
    cout << "=========================================" << endl;
    cout << "          - B L A C K J A C K -          " << endl;
    cout << "=========================================" << endl;
    
    srand(time(0));
    int a, b, c, d, z, x, y;
     a = rand() % 11, b = rand() % 11, c = a+b+2, d = rand() % 11;
     z = rand() % 11, x = rand() % 11, y = z+x+2;
    cout << cards[a]  <<" " <<  cards[b] <<endl;

    cout << "1 per pescare 2 per stare" <<endl;


 while (true){
        int choice1;
        cin >> choice1;
        if(choice1 == 1){
            cout<<  d <<endl;
            cout<< "TOT:"<< c+d <<endl;
            c = c + d;
            
           // Draw more cards
            while(true){
                cout << "1 per pescare nuovamente, 2 per stare" << endl;
                int choice2;
                cin >> choice2;
                if(choice2 == 1){
                    d = rand() % 11;  
                    cout << d << endl;
                    c = c + d; 
                    cout << "TOT:" << c << endl;
                    if (c > 21) {
                        cout << "SBALLATO" << endl;
                        break;
                    }
                } else {
                    break;
                }
            }
            
            break;
        }
    }
    // Dealer
    cout << endl << "=========================================" << endl;
    cout << "           - T U R N O   D E A L E R -   " << endl;
    cout << "=========================================" << endl << endl;
     cout << cards[z]  <<" " <<  cards[x] <<endl;
     cout << "TOT:" <<y <<endl;

     if (y>21&&y>c)
     {
        cout<< "-Hai Perso!-"<<endl;
     }else if (y<c){
        cout<< "-Hai Vinto!"<<endl;
        
     }
    else{
        cout<<"VITTORIA DEALER"<<endl;
        
    }


    cout << endl << "=========================================" << endl;
    cout << "             - F I N E   G I O C O -     " << endl;
    cout << "=========================================" << endl;


    return 0;
}
