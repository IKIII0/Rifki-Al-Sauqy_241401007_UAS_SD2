#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cctype>
#include <algorithm>
#include <cstring>

using namespace std;


bool palindrom (string kata){
    string rev = kata;


    reverse(rev.begin(), rev.end());

    

    if (kata == rev){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    string nama;
    cout<<"Masukkan kata atau kalimat untuk diperiksa: "; getline(cin, nama);
    cout<<endl;
    cout<<"Hasil untuk "<<" '"<<nama<<"' "<<": ";

    if (palindrom(nama)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    };

}