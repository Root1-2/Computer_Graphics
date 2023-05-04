#include <graphics.h>
#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*)" ");

    //Drawing X-Axis & Y-Axis in the console window
    int width = getmaxx();
    int height = getmaxy();
    int center_x = width / 2;
    int center_y = height / 2;
    line(0, center_y, width, center_y);
    line(center_x, 0, center_x, height);

    int x1, y1, x2, y2, x3, y3;
    cout<<"Enter Co-Ordinate of a(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter Co-Ordinate of b(x2, y2): ";
    cin>>x2>>y2;
    cout<<"Enter Co-Ordinate of c(x3, y3): ";
    cin>>x3>>y3;

    // Plotting the original triangle
    line(center_x + x1, center_y - y1, center_x + x2, center_y - y2);
    line(center_x + x2, center_y - y2, center_x + x3, center_y - y3);
    line(center_x + x3, center_y - y3, center_x + x1, center_y - y1);

    // Plotting the mirrored triangle
    setcolor(RED);
    int option;
    cout<<"1. Mirrored Along with X-Axis"<<endl;
    cout<<"2. Mirrored Along with Y-Axis"<<endl;
    cout<<"Choose Your Option: ";
    cin>>option;
    if(option == 1)
    {
        y1 = -y1;
        y2 = -y2;
        y3 = -y3;
    }
    if(option == 2)
    {
        x1 = -x1;
        x2 = -x2;
        x3 = -x3;
    }
    else
    {
        main();
    }

    line(center_x + x1, center_y - y1, center_x + x2, center_y - y2);
    line(center_x + x2, center_y - y2, center_x + x3, center_y - y3);
    line(center_x + x3, center_y - y3, center_x + x1, center_y - y1);

    getch();

    cout<<"Do you want to run again? (1 for Yes, 2 for No)"<<endl;
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
    } while (choice > 2);
}
