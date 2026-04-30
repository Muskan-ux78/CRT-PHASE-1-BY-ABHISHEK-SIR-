# include <iostream>
using namespace std;

int main(){
    int userid = 1234;
    int userpassword = 0000;

    int inputid;
    int inputpassword;

    cin >> inputid >> inputpassword;

    bool isgranted = (userid == inputid) && (userpassword == inputpassword);
    cout << "access granted" << isgranted << endl;
    cout << "access denied" << !isgranted << endl;

    return 0;
}