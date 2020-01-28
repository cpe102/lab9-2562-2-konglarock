//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0, sumtwo = 0;
    string textline;
    ifstream source("E:\\labcom\\lab9\\lab9-2562-2-konglarock\\score.txt");
    while (getline(source,textline))
    {
        
        sum+=atof(textline.c_str());
        sumtwo+=pow(atof(textline.c_str()),2);
        count++;
    }

    cout << "Number of data = "<< count << "\n";
    cout <<  "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt(sumtwo/count-pow(sum/count,2));
    source.close();
    return 0;


 







}










