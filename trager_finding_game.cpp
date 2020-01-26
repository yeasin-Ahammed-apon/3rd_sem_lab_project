 #include <iostream>
using namespace std;
#include <conio.h>
#include<windows.h>
#include<iomanip>
char newline(int,char);
void crocodileBody();
void ghostBody();
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
        }else if((x==10 && y==10)){
        system("cls");
            crocodileBody();
            break;
        }
        else if((x==8 && y==30)){
        system("cls");
                ghostBody();
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
    else if(x==7||x==8||x==9||x==10||x==11||y==31||y==30||y==29||y==10||y==9||y==11){
        system("COLOR 0C");
        cout<< "\n\n\n\nsome thing is near you (crocodile , ghost)"<<endl;
        cout<<"crocodile(10,10)"<<endl;
        cout<<"crocodile(8,30)"<<endl;
        }
    dir = getche();
    if( dir=='l')--y;
    else if( dir=='r' )++y;
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
char newline(int n,char ch){
for(int i=0;i<n;i++){cout<<ch;}
}
void crocodileBody(){
    system("COLOR 0C");
    cout<<"------------------------------------------------------"<<endl;
        cout<<"you lose ,,,a crocodile just eate you"<<endl;
    cout<<"------------------------------------------------------"<<endl;
cout<<"                _ ___                /^^/ /^/  /^^_"<<endl;
cout<<"    _          _@)@) `            ,,/ '` ~ `'~~ ', `."<<endl;
cout<<"  _/o'_ _ _ _/~`.`...'~        ./~~..,'`','',.,' '  ~:"<<endl;
 cout<<"/ `,'.~,~.~  .   , . , ~,   ,/ .,' , ,. .. ,,.   `,  ~_"<<endl;
cout<<"( ' _' _ '_` _  '  .    , `_/ .' ..' '  `  `   `..  `,   _"<<endl;
 cout<<"~V~ V~ V~ V~ ~~ `   ' .  '    , ' .,.,''`.,.''`.,.``. ',   _"<<endl;
  cout<<"_/  /  /  /_/ , . ' ,   `_/~_ .' .,. ,, , _/~_ `. `. '.,  _"<<endl;
 cout<<"< ~ ~ '~`'~'`, .,  .   `_: ::: _ '      `_/ ::: _ `.,' . ',  _"<<endl;
  cout<<"/ ' `_  '`_    _    ',/ _::_::_  _    _/ _::_::_    `.,'.,`., -,-,-,_,_,"<<endl;
   cout<<"`'~~ `'~~ `'~~ `'~~   (_)(_)(_)/  `~~'(_)(_)(_)/ ~'`'_.._,._,'_;_;_;_;_;"<<endl;

}
void ghostBody(){
system("COLOR 0C");
cout<<"------------------------------------------------------"<<endl;
        cout<<"you lose ,,,a ghost just scare  you"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"     .-."<<endl;
   cout<<"   .'   `."<<endl;
   cout<<"   :g g   :"<<endl;
   cout<<"   : o    `."<<endl;
  cout<<"  :         ``."<<endl;
 cout<<" :             `."<<endl;
cout<<":  :         .   `."<<endl;
cout<<":   :          ` . `."<<endl;
 cout<<" `.. :            `. ``;"<<endl;
    cout<<"    `:;             `:'"<<endl;
       cout<<"       :              `."<<endl;
        cout<<"        `.              `."<<endl;
          cout<<"          `'`'`'`---..,___`;.-'"<<endl;
}
