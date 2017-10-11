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
    int average;
    string fileName;
    bool validImage;
    do
    {
         cout<<"What's the file's name? [it must be in BMP format!]"<<endl;
         cin>>fileName;            //saveing the users input in fileName 
         image.open(fileName);     //reading  the file that the user inputed
         validImage = image.isImage();          //cheaking if it is a valid image
         if(validImage == true)  //if it is a valid image go through the if statement
         { 
             cout<<fileName<<" has been loaded. It is "<<endl;
             bmp = image.toPixelMatrix(); //converting it to a pixel matrix
         }
             
         else                      //if it is not a valid image it will output the else statement 
         {
             cout<<"The file must be a 24 bit depth Windows BMP file. Please try again ^.^\n";
         }
    
    }while(validImage == false); //also if the image is invalid it will loop again
     
    for(int r=0; r<bmp.size();r++) //this for loop will go throgh every row
    {
        for(int c=0; c<bmp[0].size();c++) //this for loop will go throgh every coloum in a specifed row
        {
            rgb = bmp[r][c]; //makeing rgb = bmp at row r and coloum c
            average = (rgb.red + rgb.green + rgb.blue)/3; //setting average equal to the average of the red, green and blue so we added them and devided by 3 to optain it
            rgb.red = average;   //setting red equal to the average
            rgb.green = average; //setting green equal to the average
            rgb.blue = average;  //setting blue equal to the average
            bmp[r][c] = rgb; //saveing the changes done in rgb and puting it back in bmp at row r and colum c
        }
    }
    //updates the bitmap and saves it with the name thats stated below 
    image.fromPixelMatrix(bmp);
    image.save("oldTimey.bmp");
    
    return 0;
}

