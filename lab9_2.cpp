//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream dest("E:\\labcom\\lab9\\lab9-2562-2-konglarock\\cheerbook_copy.txt");

    ifstream source;
    source.open("E:\\labcom\\lab9\\lab9-2562-2-konglarock\\cheerbook.txt");
    string textline;
    

    dest << "-------------------- SOTUS ---------------------"<<"\n";
    
    while (getline(source,textline)){
        dest << textline << "\n";
    }

    dest << "-------------------- SOTUS ---------------------";



    dest.close();
    source.close();

    return 0;

}

















