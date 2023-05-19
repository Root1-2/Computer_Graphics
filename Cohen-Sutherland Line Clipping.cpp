#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
    system("cls");

    //code for installing the graphics driver
    int graphicsdriver = DETECT, gm;
    initgraph(&graphicsdriver, &gm, (char*) "");

    int rcode_begin[4] = {0,0,0,0}, rcode_end[4] = {0,0,0,0}, region_code[4];
    int xmax, ymax, xmin, ymin, x1,y1,x2,y2, flag=0;

    //for Rectangle
    cout<<"Enter X_Max & Y_Max: ";
    cin>>xmax>>ymax;
    cout<<"Enter X_Min & Y_Min: ";
    cin>>xmin>>ymin;
    rectangle(xmin,ymin,xmax,ymax);

    //for line
    cout<<"Enter Initial point Co-Ordinate (x1,y1) : ";
    cin>>x1>>y1;
    cout<<"Enter End point Co-Ordinate (x2,y2) : ";
    cin>>x2>>y2;
    line(x1,y1,x2,y2);

    getch();

    //finding Region-code of initial point
    if (y1>ymax)
    {
        rcode_begin[0] = 1;
        flag = 1;
    }
    if (y1<ymin)
    {
        rcode_begin[1] = 1;
        flag = 1;
    }
    if (x1>xmax)
    {
        rcode_begin[2] = 1;
        flag = 1;
    }
    if (x1<xmin)
    {
        rcode_begin[3] = 1;
        flag = 1;
    }

    //finding Region-code of end point
    if (y2>ymax)
    {
        rcode_end[0] = 1;
        flag = 1;
    }
    if (y2<ymin)
    {
        rcode_end[1] = 1;
        flag = 1;
    }
    if (x2>xmax)
    {
        rcode_end[2] = 1;
        flag = 1;
    }
    if (x2<xmin)
    {
        rcode_end[3] = 1;
        flag = 1;
    }

    if(flag==0)
    {
        cout<<"Clipping not required as it is already in the viewport";
    }

    else
    {
        for(int i=0; i<4; i++)
        {
            region_code[i] = rcode_begin[i] && rcode_end[i];
            if(region_code[i]==1)
            {
                flag = 0;
            }
        }

        if(flag==0)
        {
            cout<<"Line is completely outside the viewport";
        }

        else
        {
            float slope = (y2-y1) / (x2-x1);
            flag = 1;

            //initial point clip
            if(rcode_begin[0]==1)
            {
                x1 = x1 + (ymax - y1) / slope;
                y1 = ymax;
            }
            if(rcode_begin[1]==1)
            {
                x1 = x1 + (ymin - y1) / slope;
                y1 = ymin;
            }
            if(rcode_begin[2]==1)
            {
                y1 = y1 + (xmax - x1) * slope;
                x1 = xmax;
            }
            if(rcode_begin[3]==1)
            {
                y1 = y1 + (xmin - x1) * slope;
                x1 = xmin;
            }

            //endpoint clip
            if(rcode_end[0]==1)
            {
                x2 = x2 + (ymax - y2) / slope;
                y2 = ymax;
            }
            if(rcode_end[1]==1)
            {
                x2 = x2 + (ymin - y2) / slope;
                y2 = ymin;
            }
            if(rcode_end[2]==1)
            {
                y2 = y2 + (xmax - x2) * slope;
                x2 = xmax;
            }
            if(rcode_end[3]==1)
            {
                y2 = y2 + (xmin - x2) * slope;
                x2 = xmin;
            }
        }
    }

    delay(2000);
    getch();
    if(flag==1)
    {
        setcolor(RED);
        line(x1,y1,x2,y2);
    }

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
