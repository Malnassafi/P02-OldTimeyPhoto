#include"bitmap.h"
#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main()
{   
    Bitmap image;
    vector <vector <Pixel> > bmp;
    Pixel rgb;

    image.open("project2image.bmp");
    bmp = image.toPixelMatrix();
    
    cout<<"project2image.bmp has been loaded. It is "<<bmp[0].size()<<" pixels wide and "<<bmp.size()<<" pixels high."<<endl;


   // cout<<bmp.size()<<" "<<endl;  //high
   // cout<<bmp[0].size()<<" "<<endl;  //wide

/*    for(int r=0; r<bmp.size();r++)
      {
        for(int c=0; c<bmp[r].size();c++)
          {
            cout<<bmp[r][c]<<" "<<endl;
          }
      }
*/ 

    
 return 0;
}

