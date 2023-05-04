#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main ()
{
    system("cls");

    //code for installing the graphics driver
    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*)" ");

    float x1,x2,x3,y1,y2,y3,rx1,rx2,rx3,ry1,ry2,ry3,angle;

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

    //Rotation
    cout<<endl<<"Enter Rotation Angle: ";
    cin>>angle;
    float radian = (angle*3.1416)/180;
    rx1 = floor (abs(x1*cos(radian) - y1*sin(radian)));
    ry1 = floor (abs(y1*cos(radian) + x1*sin(radian)));
    rx2 = floor (abs(x2*cos(radian) - y2*sin(radian)));
    ry2 = floor (abs(y2*cos(radian) + x2*sin(radian)));
    rx3 = floor (abs(x3*cos(radian) - y3*sin(radian)));
    ry3 = floor (abs(y3*cos(radian) + x3*sin(radian)));

    setcolor(GREEN);
    line(200+rx1,200+ry1,200+rx2,200+ry2);
    line(200+rx2,200+ry2,200+rx3,200+ry3);
    line(200+rx3,200+ry3,200+rx1,200+ry1);

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
