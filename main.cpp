/************************************************************
*	TEAM-G	  : Doctor's Info Project	        			*
*	======      =====================						*
*													        *
*	Prepared By:					ID:			        	*
*   1.	Fatema Durdana			:	1812020117				*
*	2. 	Md Sazzadur Rahman		:	2012020183				*
*	3.	Danbir Rashid          	:	2012020189				*
*	4.	Noorjahan Ferdouse  	:	2012020198				*
*	5.  Taiyeb-Ul-Islam Shafat  :	2012020199				*
*	Date of Submission:25/06/2021 			    	        *
************************************************************/

#include <iostream>
#include<string.h>
#include<fstream>
#include<time.h>

using namespace std;

void Menu(string s);
void Info();
void Entertainment();
void Quiz();

void S();
void C();
void M(); /// medicine
void N();
void D();

void QC();
void HL();
void WP();

void Q1();
void Q2();
void Q3();
void Q4();

int main()
{
    cout << "Enter Your Name : ";
    string s; getline(cin , s);
    Menu(s);

    return 0;
}

void Menu(string s)
{
    int c;
    cout << "\t\t\t\t\tDoctor's Info\n";
    cout << "\t\t\t\t\t=============\n\n" << endl;
    cout << "Welcome to join with us, " << s << "!\n\n" << endl;
    while(1)
    {
        cout << "1. Find Information."<< endl;
        cout << "2. Join with our Entertainment side."<< endl;
        cout << "3. Take a part of our Quiz section." << endl;
        cout << "4. Exit.\n" << endl << endl;
        cin >> c;
        switch(c)
        {
        case 1: Info(); break;

        case 2: Entertainment(); break;

        case 3: Quiz(); break;

        case 4: exit(0); break;

        default:
            cout << "Try again!\n\n\n" << endl;
        }
    }

}

void Info()
{
    cout << "\t\t\tInformation\n";
    cout << "\t\t\t===========\n\n" << endl;
    while(1)
    {
        cout << "1. Cardiology" <<endl;
        cout << "2. Surgery" <<endl;
        cout << "3. Medicine" <<endl;
        cout << "4. Dental" <<endl;
        cout << "5. Neurology" <<endl;
        cout << "#. Home Menu\n\n\n\n" << endl;
        char c;
        cin >> c;
        if(c == '#'){break;}
        switch(c)
        {
            case '1': C(); break;
            case '2': S(); break;
            case '3': M(); break;
            case '4': D(); break;
            case '5': N(); break;
            default:
                cout << "Try Again!\n\n\n" << endl;
        }
    }



}
void Entertainment()
{
    cout << "\t\t\tEntertainment\n";
    cout << "\t\t\t=============\n\n" << endl;
    while(1)
    {
        cout << "1. Quick Calculator Game" <<endl;
        cout << "2. High-Low Game" <<endl;
        cout << "3. Word Puzzle" <<endl;
        cout << "#. Home Menu\n\n\n\n" << endl;
        char c;
        cin >> c;
        if(c == '#'){break;}
        switch(c)
        {
            case '1': QC(); break;
            case '2': HL(); break;
            case '3': WP(); break;
            default:
                cout << "Try Again!\n\n\n" << endl;
        }
    }
    cout << endl << endl << endl;
}
void Quiz()
{
    cout << "\t\t\tQuiz\n";
    cout << "\t\t\t====\n\n" << endl;
    while(1)
    {
        cout << "1. General" << endl;
        cout << "2. Sports" << endl;
        cout << "3. Geography" << endl;
        cout << "4. History" << endl;
        cout << "#. Home Menu\n\n" << endl;
        char c; cin >> c;
        if(c == '#'){break;}
        switch(c)
        {
        case '1': Q1(); break;
        case '2': Q2(); break;
        case '3': Q3(); break;
        case '4': Q4(); break;
        default:
            cout << "Try Again!\n\n\n" << endl;
        }
    }
}

void C(){
    string s;
    cout << "\t\t\t\tDepartment Of Cardiology" << endl;
    cout << "\t\t\t\t========================\n\n" << endl;
    ifstream file("f1.txt");
    while(getline(file, s))
    {
        cout << s << endl;
    }
    file.close();
    cout << endl << endl << endl;
    system("pause");
}
void S(){
    string s;
    cout << "\t\t\t\tDepartment Of Surgery" << endl;
    cout << "\t\t\t\t=====================\n\n" << endl;
    ifstream file("f2.txt");
    while(getline(file, s))
    {
        cout << s << endl;
    }
    file.close();
    cout << endl << endl << endl;
    system("pause");
}
void M(){
    string s;
    cout << "\t\t\t\tDepartment Of Medicine" << endl;
    cout << "\t\t\t\t======================\n\n" << endl;
    ifstream file("f3.txt");
    while(getline(file, s))
    {
        cout << s << endl;
    }
    file.close();
    cout << endl << endl << endl;
    system("pause");
}
void N(){
    string s;
    cout << "\t\t\t\tDepartment Of Neurology" << endl;
    cout << "\t\t\t\t======================\n\n" << endl;
    ifstream file("f4.txt");
    while(getline(file, s))
    {
        cout << s << endl;
    }
    file.close();
    cout << endl << endl << endl;
    system("pause");
}
void D(){
    string s;
    cout << "\t\t\t\tDepartment Of Dental" << endl;
    cout << "\t\t\t\t====================\n\n" << endl;
    ifstream file("f5.txt");
    while(getline(file, s))
    {
        cout << s << endl;
    }
    file.close();
    cout << endl << endl << endl;
    system("pause");
}
void QC()
{
    int val1 , val2;
    cout << "\t\t\tWelcome to Quick calculate Game" << endl;
    cout << "\t\t\t===============================" << endl;
    int i = 0 , P ;
    while(1)
    {
        i = i + 1;
        ///cout << i << endl;
        srand(time(NULL));
        val1 = rand()%100 - 10, val2 = rand()%100 - 15;
        if( (i%4) == 0 ){
            cout << endl << val1 << " * " << val2 << " = ";
            cin >> P;
            if(val1*val2 == P){cout << "Correct!\n";}
            else{cout << "You Loss!\n";}

        }
        else if( (i%2) == 0 && (i%4) ){
            cout << endl << val1 << " / " << val2 << " = ";
            cin >> P;
            if(val1/val2 == P){cout << "Correct!\n" ;}
            else{ cout << "You Loss!\n";}

        }
        else if( (i%2) && (i%3) == 0 ){
            cout << endl << val1 << " + " << val2 << " = ";
            cin >> P;
            if(val1+val2 == P){cout << "Correct!\n";}
            else{cout << "You Loss!\n";}

        }
        else{
            cout << endl << val1 << " - " << val2 << " = ";
            cin >> P;
            if(val1-val2 == P){cout << "Correct!\n";}
            else{cout << "You Loss!\n";}

        }

        cout << "\n\n\nPress Any Key to Play Again." << endl;
        cout << "Press # to exit the Game." << endl;
        char c ; cin >> c;
        if(c == '#'){break;}

    }
    cout << endl << endl << endl;
}
void HL()
{
    bool k = true;
    int gues , value , chance(0);
    cout << "\t\t\tWelcome to High-Low Game." << endl;
    cout << "\t\t\t=========================\n\n\n" << endl;
    while(k)
    {
        srand(time(0));
        value = rand()%100 + 1;
        cout << "\tGuess\t\tHint\n";
        cout << "\t=====\t\t====\n\n\t";
        for(int i(0) ; i <= 6 ; i++)
        {
            chance++;
            cin >> gues;
            if(gues == value){
                cout << "\t\t\tHigh-Low\n\n\n\t";
                cout << "\t\tYou are Won \n\t\t\tin " << chance << " chance";
                chance = 0;
                break;
            }
            else if(gues < value && i != 6)
            {
                cout << "\t\t\tLow\n\t";
            }
            else if(gues > value && i != 6)
            {
                cout << "\t\t\tHigh\n\t";
            }
            else if(i == 6)
            {
                cout << "\t\t\tYou Loss the Game.\n";
                cout << "\t\t\tCorrect Number : " << value << endl;
                chance = 0;
            }
        }
        cout << "\n\n\nPress Any key to play again." << endl;
        cout << "Press # to exit the Game.\n" << endl;
        char q ; cin >> q ;
        if(q == '#'){
            k = false;
        }
        else{
            k = true;
        }
    }
    cout << endl << endl << endl;

}
void WP()
{
    cout << "\t\t\tWelcome to Word-Puzzle!" << endl;
    cout << "\t\t\t=======================\n\n" << endl;
    ifstream file1("p1.txt");
    ifstream file2("p2.txt");
    string s , s1 , s2;
    int i(0);

    while(getline(file2 , s2) && getline(file1, s1))
    {
       cout << "Incorrect : " << s2 << endl << "Correct : ";
       cin >> s;
       if(s1 == s)
       {
           i = i + 1;
           cout << "\n\n\nCorrect!\n\n" << endl;
       }
       else{
        cout << "\n\n\nIncorrect!\n\n" << endl;
       }

        cout << "\n\n\nPress Any key to play again." << endl;
        cout << "Press # to exit the Game.\n" << endl;
        char q ; cin >> q ;
        if(q == '#'){break;}
    }
    cout << "\n\nYour Score : " << i << endl << endl << endl;


}

void Q1()
{
    cout << "\t\t\tQuiz on General\n";
    cout << "\t\t\t===============\n\n" << endl;

    ifstream f1("q1.txt");
    string s;
    char c ;
    int i = 0 , j = 0, A[] = {3 , 4 , 3 , 2 , 3 , 3 , 1 , 2 , 4 , 2 } , t = 0;
    while(getline(f1 , s))
    {
        if( (i%5)==0 && i != 0 )
        {
            cin >> c;
            if((c - 96) == A[j++]){
                t++;
                cout << "\nCorrect!" << endl;
            }
            else{
                cout << "\nIncorrect!" << endl;
            }
        }
        i++;
        cout << s << endl;
    }
    cin >> c;
    if((c - 96) == A[j++]){
        t++;
        cout << "\nCorrect!" << endl;
    }
    else{
        cout << "\nIncorrect!" << endl;
    }
    cout << "\n\nYour score : " << t << endl;


    cout << endl << endl << endl;
    system("pause");

}
void Q2()
{
    cout << "\t\t\tQuiz on Sports\n";
    cout << "\t\t\t==============\n\n" << endl;

    ifstream f1("q2.txt");
    string s;
    char c ;
    int i = 0 , j = 0, A[] = {4 , 2 , 3 , 1 ,1 , 2 , 2, 1 , 1 , 4 } , t = 0;
    while(getline(f1 , s))
    {
        if( (i%5)==0 && i != 0 )
        {
            cin >> c;
            if((c - 96) == A[j++]){
                t++;
                cout << "\nCorrect!" << endl;
            }
            else{
                cout << "\nIncorrect!" << endl;
            }
        }
        i++;
        cout << s << endl;
    }
    cin >> c;
    if((c - 96) == A[j++]){
        t++;
        cout << "\nCorrect!" << endl;
    }
    else{
        cout << "\nIncorrect!" << endl;
    }
    cout << "\n\nYour score : " << t << endl << endl;


    cout << endl << endl << endl;
    system("pause");

}
void Q3()
{
    cout << "\t\t\tQuiz on Geography\n";
    cout << "\t\t\t=================\n\n" << endl;

    ifstream f1("q3.txt");
    string s;
    char c ;
    int i = 0 , j = 0, A[] = {3 , 1, 4 , 4 ,2 , 3 , 2, 1 , 3 , 2 } , t = 0;
    while(getline(f1 , s))
    {
        if( (i%5)==0 && i != 0 )
        {
            cin >> c;
            if((c - 96) == A[j++]){
                t++;
                cout << "\nCorrect!" << endl;
            }
            else{
                cout << "\nIncorrect!" << endl;
            }
        }
        i++;
        cout << s << endl;
    }
    cin >> c;
    if((c - 96) == A[j++]){
        t++;
        cout << "\nCorrect!" << endl;
    }
    else{
        cout << "\nIncorrect!" << endl;
    }
    cout << "\n\nYour score : " << t << endl;


    cout << endl << endl << endl;
    system("pause");
}
void Q4()
{
    cout << "\t\t\tQuiz on History\n";
    cout << "\t\t\t===============\n\n" << endl;

    ifstream f1("q4.txt");
    string s;
    char c ;
    int i = 0 , j = 0, A[] = {1 , 3 , 3 , 1 ,1 , 2 , 4, 2 , 4 , 2 } , t = 0;
    while(getline(f1 , s))
    {
        if( (i%5)==0 && i != 0 )
        {
            cin >> c;
            if((c - 96) == A[j++]){
                t++;
                cout << "\nCorrect!" << endl;
            }
            else{
                cout << "\nIncorrect!" << endl;
            }
        }
        i++;
        cout << s << endl;
    }
    cin >> c;
    if((c - 96) == A[j++]){
        t++;
        cout << "\nCorrect!" << endl;
    }
    else{
        cout << "\nIncorrect!" << endl;
    }
    cout << "\n\nYour score : " << t << endl;

    cout << endl << endl << endl;
    system("pause");
}

///End of the Project ):(

