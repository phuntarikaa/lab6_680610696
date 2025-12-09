#include<iostream>
using namespace std;

int main(){
    int x;
    int Even=0;
    int Odd=0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x!=0){
        if(x%2==0){
            Even++;
        }
        else{
            Odd++;
        }
        cout << "Enter an integer: ";
        cin >> x;

    }
    cout << "#Even numbers = " << Even<<"\n" ;
    cout << "#Odd numbers = " << Odd ;
    return 0;
}
