#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main(){

    system("cls");
    //code for installing the graphics driver
    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*) "");

    line (200, 400, 250, 200);
    line (250, 200, 300, 400);
    line (300, 400, 150, 250);
    line (150, 250, 350, 250);
    line (350, 250, 200, 400);

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
