#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*)" ");

    double x, y, x1, x2, y1, y2, dx, dy, slope;

    cout<<"Enter Starting (x1, y1) Points: ";
    cin>>x1>>y1;

    cout<<"Enter Ending (x2, y2) Points: ";
    cin>>x2>>y2;

    dx = x2-x1, dy = y2-y1;
    slope = dy/dx;
    x = x1;
    y = y1;

    if(abs(slope)<1)
    {
        while(x<=x2)
        {
            putpixel(x, y, BLUE);
            cout<<"Plotted Points: ("<<x<<","<<y<<")"<<endl;
            x += 1;
            y += slope;
            delay(50);
        }
    }
    else
    {
        while(y<=y2)
        {
            putpixel(x, y, CYAN);
            cout<<"Plotted Points: ("<<x<<","<<y<<")"<<endl;
            x += 1/slope;
            y += 1;
            delay(50);
        }
    }

    getch();

    cout<<"Do you want to run again? (1 for Yes, 2 for No)"<<endl;
    int choice;
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

}
