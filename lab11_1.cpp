#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    int x = rand()%9;
    string grade;
    switch (x)
    {
    case 0:
        grade = "A";
        break;
    case 1:
        grade = "B+";
        break;
    case 2:
        grade = "B";
        break;
    case 3:
        grade = "C+";
        break;
    case 4:
        grade = "C";
        break;
    case 5:
        grade = "D+";
        break;
    case 6:
        grade = "D";
        break;
    case 7:
        grade = "F";
        break;
    default:
        grade = "W";
        break;
    }
    cout << "You will get " << grade << " in this 261102." ;
}

