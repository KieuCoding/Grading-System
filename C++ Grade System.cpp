
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    int Grade[6][6];
    string letter, letterAve;
    for(int i = 0; i < 5; i++){
        cout << "Enter student id: ";
        cin >> Grade[i][0];
    for(int j = 1; j < 5; j++){
        cout << "Enter Grade: ";
        cin >> Grade[i][j];
    }
}
    for(int i = 0; i < 6; i++){
        Grade[i][5] = Grade[i][1] + Grade[i][2] + Grade[i][3] + Grade[i][4];
    for(int i = 1; i < 5; i++){
        Grade[5][i] =((Grade[0][i]+Grade[1][i] +Grade[2][i]+Grade[3][i] +Grade[4][i])/5);
        if(Grade[5][5] > 359)
        letterAve = "A";
        else if(Grade[5][5] < 360 && Grade[5][5] > 319)
        letterAve = "B";
        else if(Grade[5][5] < 320 && Grade[5][5] > 279)
        letterAve = "C";
        else if(Grade[5][5] < 280 && Grade[5][5] > 239)
        letterAve = "D";
        else if(Grade[5][5] < 240)
        letterAve = "F";
    }
    }
    cout << "ID" << setw(15) << "Exam 1" << setw(15) << "Exam 2" << setw(15) << "Exam 3" << setw(15) 
    << "Exam 4" << setw(15) << "Exam total" << setw(15) << "Letter Grade" << endl;
    
    for(int i = 0; i < 5; i++){
        if(Grade[i][5] > 359)
        letter = "A";
        else if(Grade[i][5] < 360 && Grade[i][5] > 319)
        letter = "B";
        else if(Grade[i][5] < 320 && Grade[i][5] > 279)
        letter = "C";
        else if(Grade[i][5] < 280 && Grade[i][5] > 239)
        letter = "D";
        else if(Grade[i][5] < 240)
        letter = "F";
        cout << Grade[i][0] << setw(15);
    for(int j = 1; j < 6; j++)
        cout << Grade[i][j] << setw(15);
        cout << letter << endl;;
    }
    cout << "Average" << setw(9);
    for(int i = 1; i < 6; i++){
        cout << Grade[5][i] << setw(15);  
    }
    cout << letterAve;
    return 0;
}
