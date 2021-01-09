#include <iostream>

using namespace std;

int main(){




int num = 60;

int* bob =  &num;

char*Sir_Henry_The_Third = reinterpret_cast <char *>(bob);

cout << *bob<< endl;
cout << *Sir_Henry_The_Third<< endl; //this takes a char character and makes  it an 'A'  which is
//in accordance to the value of Bob which is 60







}

