 #include <iostream>
 #include<windows.h>
 using namespace std;

bool cl = true;
void playNote(int fq, int dt)
{
    cl = !cl;
    if(cl) system("color 4f");
    else system("color f4");
    Beep(fq,dt);    
    Sleep(10);

}
void christmas()
{
    playNote(494,300);
    playNote(494,300);
    playNote(494,600);
    playNote(494,300);
    playNote(494,300);
    playNote(494,600);

    playNote(494,300);
    playNote(587,300);
    playNote(392,450);
    playNote(440,150);
    playNote(494,900);
}



 int main (){

    christmas();

   system("pause");
    return 0;
 }
