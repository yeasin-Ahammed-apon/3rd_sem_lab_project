#include <iostream>
using namespace std;
#include <conio.h>//for getche(); //it is use for input character// exit(0) for break
#include<windows.h>//for system(); // it clear the tab and add color to text and back ground
#include<iomanip>//for setw(); // it use for spacing
char newline(int,char);//declaring a function ...........main body is below the main() function
void crocodileBody();//declaring a function ...........main body is below the main() function
void ghostBody();//declaring a function ...........main body is below the main() function
int main(){//main() function start
int x=5, y=20;// taking 2 variable x,y; // x for top and down & y for left and right
char dir;// another variable for character input
while( dir != 'q'){// starting a while  loop;//it will run until  it get the input for the variable dir is 'q'
    system("cls");// clear the tab at the starting of the loop
    system("COLOR 0A");//change the color of text green and the background black
        cout << "\nPress direction key (l, r, t, d)& press 'q' for exit "<<endl;//some instruction
        cout << "Your location at this moment: " << x << ", " << y<<endl;// show the location,,,,// mainly show the current value of x and y
        cout << "here is the hints for the trager(20*3/6,9*10/3)"<<endl;// instruction for the game
        if((x==10 && y==30)){// conditions............ if x=10 and y=30..program will say you find the trager
        system("cls");//clear the tab
            cout<<"you found the trager";//if the condition match it will print this
            break;//while loop will break it the condition match
        }else if((x==10 && y==10)){
        system("cls");// conditions............ if x=10 and y=10..program will show you a body of crocodile
            crocodileBody();// calling for function crocodileBody..........
            break;//while loop will break
        }
        else if((x==8 && y==30)){// conditions............ if x=8 and y=30..program will show you a body of ghost
        system("cls");////clear the tab
                ghostBody();// calling for function ghostBody()..........
            break;//while loop will break
        }
        else if(x>50|| y>50||x<0||y<0){// conditions............ if x or y is at 50 or 0 ..program will say end of boundry
        system("cls");////clear the tab
        cout<<"end of boundry";//if the condition match it will print this
        break;//while loop will break
        }
cout<<"__________________________________________________"<<endl;//some random line  you will figure it out
 newline(x,'\n');// calling for newline() function ;//  two argument will pass on the function  (an int and a char)
cout<< setw(y)<<"*"<<endl;//setw() is using for spacing and
if(x>=49||y>=49||x<=0||y<=0){//condition......if x and y is near 50 and 0 ...the program will say you are near the boundry
        system("COLOR 0C");// for color (text will be red and background will be black )
        cout<< "\n\n\n\nyou are near the boundry";// if condition match this massage will print out
        }
    else if(x==7||x==8||x==9||x==10||x==11||y==31||y==30||y==29||y==10||y==9||y==11){//condition.... one of this condition match ,,it show the the text below
        system("COLOR 0C");// for color (text will be red and background will be black )
        cout<< "\n\n\n\nsome thing is near you (crocodile , ghost)"<<endl;//play  the game and go to the point (9,10)
        cout<<"crocodile(10,10)"<<endl;//warning
        cout<<"crocodile(8,30)"<<endl;//waring
        }
    dir = getche();// gating input for dir with help of the getche() function
    if( dir=='l')--y;// condition ...... if dir is press l ....the value of y will dicress// l for left
    else if( dir=='r' )++y;// condition ...... if dir is press r ....the value of y will incress// r for right
    else if( dir=='t' )x--;// condition ...... if dir is press t ....the value of x will dicress//t for top
    else if( dir=='d' )x++;// condition ...... if dir is press d ....the value of x will incress// d for down
            }// end of the while loop
            cout<<"\nDo you like to play the game again press 'a'...if not press any key"<<endl;// random text
            dir = getche();// after the loop break it will show upper text and take a  input for dir
            if(dir=='a'){//if dir input match with a .... the game will start again
        main();//main() function will start and the game will start too
            }else{
            exit(0);// if dir input is another thing the loop will break
            }
    return 0;
}// end of main() function
char newline(int n,char ch){// a  function that will take a argument ....one is int and another is a charecter
for(int i=0;i<n;i++){cout<<ch;}// a loop will start and use two argument
}
void crocodileBody(){// function for for crocodile body
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
void ghostBody(){// function for ghost body
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
