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
    int Average;
    string fileName;
   
   // image.open("project2image.bmp");
   // bmp = image.toPixelMatrix();
    
    // cout<<"project2image.bmp has been loaded. It is "<<bmp[0].size()<<" pixels wide and "<<bmp.size()<<" pixels high."<<endl;
    // cout<<bmp.size()<<" "<<endl; 
    // cout<<bmp[0].size()<<" "<<endl; 
    
    cout<<"What's the file's name? [it must be in BMP format!]"<<endl;
    cin>>fileName;/*
    if(//file does not exist)
    {   
        cout<<*/





    image.open(fileName);
    cout<<fileName<<" has been loaded"<<endl;
    bmp = image.toPixelMatrix();

    // do a for loop to add rgb.red + rgb.blue + rgb.green = average/3
    //then make the average = rgb.red and rgb.blue and rgb.green
    for(int r=0; r<bmp.size();r++)
    {
        for(int c=0; c<bmp[0].size();c++)
        {
            rgb = bmp[r][c];
            Average = (rgb.red + rgb.green + rgb.blue)/3;
            rgb.red = Average;
            rgb.green = Average;
            rgb.blue = Average;
            bmp[r][c] = rgb;
        }
    }
     
    image.fromPixelMatrix(bmp);
    image.save("oldtimey.bmp");

    return 0;
}

