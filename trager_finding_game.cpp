#include <iostream>
using namespace std;
#include <conio.h>
#include<windows.h>
#include<iomanip>

        char newline(int n,char ch){
        for(int i=0;i<n;i++){cout<<ch;}
        }
int main(){
int x=5, y=20;

char dir;

while( dir != 'q'){
    system("cls");
        cout << "\nPress direction key (l, r, t, d)& press 'q' for exit "<<endl;
        cout << "Your location at this moment: " << x << ", " << y<<endl;
        cout << "here is the hints for the trager(20*3/6,9*10/3)"<<endl;
        if((x==10 && y==30)){
        system("cls");
            cout<<"you found the trager";
            break;
        }else if(x<0||y<0){
            system("cls");
            cout<<"end of boundry";
            break;
        }else if(x>50|| y>50){
        system("cls");;
        cout<<"end of boundry";
        break;
        }
cout<<"__________________________________________________"<<endl;    newline(x,'\n');

cout<< setw(y)<<"a"<<endl;
    dir = getche();
    if( dir=='l')y--;
    else if( dir=='r' )y++;
    else if( dir=='t' )x--;
    else if( dir=='d' )x++;
            }
    return 0;
}
