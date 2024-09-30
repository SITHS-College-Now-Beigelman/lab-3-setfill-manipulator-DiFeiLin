
//Di Fei Lin
//Lab 3 
//9/30
//comment output in program, comments in program, submitted via github and screenshot of the whole screen


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    cout<<setfill('#'); //creating the line of hastags 
    cout<<setw(79)<<" "<<endl;

    cout<<setfill(' '); // creating the walls + the line skipped
    cout<<'#'<<setw(77)<<"#"<<endl;

    cout<<setfill(' '); //  creating first line of the instructions the entire length of the statement after the hastag is 58 and there is 19 spaces after the statement 
    cout<<"#"<<setw(58)<<"Ways to access the Task Manager on your Windows computer:"<<setw(19)<<'#'<<endl;

    cout<<setfill(' ');// creating the walls + the line skipped
    cout<<'#'<<setw(77)<<"#"<<endl;

    cout<<setfill(' ');//  creating first line of the instructions the entire length of the statement after the hastag is 51 and there is 26 spaces after the statement 
    cout<<'#'<<setw(51)<<"Press the key combination Ctrl + Shift + Escape"<<setw(26)<<"#"<<endl;

    cout<<setfill(' ');// creating the walls + the line skipped
    cout<<'#'<<setw(77)<<"#"<<endl;

    cout<<setfill(' ');//  creating first line of the instructions the entire length of the statement after the hastag is 75 and there is 2 spaces after the statement 
    cout<<'#'<<setw(75)<<"Press the key combination Ctrl + Alt + Delete and select \"Task Manager\""<<setw(2)<<"#"<<endl;

    cout<<setfill(' ');// creating the walls + the line skipped
    cout<<'#'<<setw(77)<<"#"<<endl;

    cout<<setfill(' ');//  creating first line of the instructions the entire length of the statement after the hastag is 56 and there is 21 spaces after the statement 
    cout<<'#'<<setw(56)<<"Type \"Task Manager\" in the Windows Start menu search"<<setw(21)<<"#"<<endl;

    cout<<setfill(' ');// creating the walls + the line skipped
    cout<<'#'<<setw(77)<<"#"<<endl;

    cout<<setfill('#');//creating the line of hastags
    cout<<setw(79)<<" "<<endl;

    return 0;
} 
/*
##############################################################################
#                                                                            #
# Ways to access the Task Manager on your Windows computer:                  #
#                                                                            #
#    Press the key combination Ctrl + Shift + Escape                         #
#                                                                            #
#    Press the key combination Ctrl + Alt + Delete and select "Task Manager" #
#                                                                            #
#    Type "Task Manager" in the Windows Start menu search                    #
#                                                                            #
##############################################################################

*/