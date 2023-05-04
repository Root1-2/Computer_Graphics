#include <iostream>
#include <graphics.h>

using namespace std;

int main ()
{
    system("cls");

    //code for installing the graphics driver
    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*)" ");

    float x1,x2,x3,y1,y2,y3,tx,ty;

    cout<<"Enter Co-Ordinate of a(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter Co-Ordinate of b(x2, y2): ";
    cin>>x2>>y2;
    cout<<"Enter Co-Ordinate of c(x3, y3): ";
    cin>>x3>>y3;

    //plotting the triangle
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    //Translation
    cout<<endl<<"Enter The Translation Factor of a Line (tx, ty): ";
    cin>>tx>>ty;
    //plotting the translated Triangle
    setcolor(GREEN);
    line(x1+tx,y1+ty,x2+tx,y2+ty);
    line(x2+tx,y2+ty,x3+tx,y3+ty);
    line(x3+tx,y3+ty,x1+tx,y1+ty);

    getch();

    cout<<endl<<"Do you want to run again? (1 for Yes, 2 for No)"<<endl;
    int choice;
    do
    {
        cout<<"Please Choose Your Option: ";
        cin>>choice;
        if(choice == 1)
        {
            closegraph();
            main();
        }
        else if(choice == 2)
        {
            return 0;
        }
        else
        {
            cout<<"Please Try Again!!";
            char choose[10];
            cin>>choose;
        }
    }
    while (choice > 2);
}
