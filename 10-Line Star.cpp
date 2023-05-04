#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    system("cls");

    //code for installing the graphics driver
    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*) "");

    line (120, 280, 150, 200);
    line (150, 200, 50, 170);
    line (50, 170, 150, 140);
    line (150, 140, 180, 70);
    line (180, 70, 210, 140);
    line (210, 140, 300, 170);
    line (300, 170, 200, 200);
    line (200, 200, 230, 280);
    line (230, 280, 180, 215);
    line (180, 215, 120, 280);

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
