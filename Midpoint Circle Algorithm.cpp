#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void drawCircle(int x, int y, int xc, int yc)
{
    putpixel(xc+x, yc+y, YELLOW);
    cout << "(" << xc+x << ", " << yc+y << ") ";

    putpixel(xc+x, yc-y, BLUE);
    cout << "(" << xc+x << ", " << yc-y << ") ";

    putpixel(xc-x, yc+y, YELLOW);
    cout << "(" << xc-x << ", " << yc+y << ") ";

    putpixel(xc-x, yc-y, BLUE);
    cout << "(" << xc-x << ", " << yc-y << ") ";

    putpixel(xc+y, yc+x, YELLOW);
    cout << "(" << xc+y << ", " << yc+x << ") ";

    putpixel(xc+y, yc-x, BLUE);
    cout << "(" << xc+y << ", " << yc-x << ") ";

    putpixel(xc-y, yc+x, YELLOW);
    cout << "(" << xc-y << ", " << yc+x << ") ";

    putpixel(xc-y, yc-x, BLUE);
    cout << "(" << xc-y << ", " << yc-x << ") ";
}

int main()
{
    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*) "");

    int x, y, xc, yc, r, d;

    cout<<"Enter Central Co-ordinate (xc, yc) & Radius (r): ";
    cin>>xc>>yc>>r;

    x = 0, y = r, d = 1-r;

    //Midpoint Circle Algorithm

    while(x<=y)
    {
        drawCircle(x, y, xc, yc);
        if(d<0)
        {
            x++;
            d = d+2*x+3;
        }
        else
        {
            x++;
            y--;
            d = d+2*(x-y)+5;
        }
        delay(50);

    }
    getch();

    closegraph();

    cout<<"Do you want to run again? (1 for Yes, 2 for No)"<<endl;
    int choice;
    cin>>choice;
    if(choice == 1)
    {
        main();
    }
    else if(choice == 2)
    {
        return 0;
    }

}
