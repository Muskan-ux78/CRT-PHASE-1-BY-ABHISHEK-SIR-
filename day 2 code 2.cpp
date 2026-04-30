# include <iostream>
using namespace std;
int globalvariable = 100;
int main(){
    // double celcius ;
    // double fahrenheit ;
    // cin >> celcius ;
    // fahrenheit = (celcius * 9.0/5.0) + 32 ;
    // cout << fahrenheit << endl ;
    // return 0;


    int localvariable ;
    int result;
    cin >> localvariable ;

    result = (globalvariable / localvariable) ;
    cout << result << endl ;
    return 0;       

}
