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
    system("COLOR 0A");
        cout << "\nPress direction key (l, r, t, d)& press 'q' for exit "<<endl;
        cout << "Your location at this moment: " << x << ", " << y<<endl;
        cout << "here is the hints for the trager(20*3/6,9*10/3)"<<endl;
        if((x==10 && y==30)){
        system("cls");
            cout<<"you found the trager";
            break;
        }
        else if(x>50|| y>50||x<0||y<0){
        system("cls");
        cout<<"end of boundry";
        break;
        }

cout<<"__________________________________________________"<<endl;
 newline(x,'\n');
cout<< setw(y)<<"*"<<endl;
if(x>=49||y>=49||x<=0||y<=0){
        system("COLOR 0C");
        cout<< "\n\n\n\nyou are near the boundry";
        }
    dir = getche();
    if( dir=='l')y--;
    else if( dir=='r' )y++;
    else if( dir=='t' )x--;
    else if( dir=='d' )x++;
            }
            cout<<"\nDo you like to play the game again press 'a'...if not press any key"<<endl;
            dir = getche();
            if(dir=='a'){
                main();
            }else{
            exit(0);
            }

    return 0;
}
