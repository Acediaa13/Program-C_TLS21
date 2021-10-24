#include<iostream>

using namespace std;


int main(){

float berat, tinggi, BMI;

cout << ">>> Calculator BMI <<<" << endl;
cout << "Masukkan berat badan anda: " << endl;
cin >> berat;
cout << "Masukkan tinggi badan anda (dalam meter): " << endl;
cin >> tinggi;

BMI = berat / (tinggi * tinggi);

if (BMI < 18.5){
    cout << "Berat badan kurang" << endl;
} else if (BMI >= 18.5 && BMI < 22.9){
    cout << "Berat badan normal" << endl;
} else if (BMI >= 22.9 && BMI < 30){
    cout << "Berat badan berlebih (cenderung obesitas)" << endl;
} else{
    cout << "Obesitas" << endl;
}

return 0;
}