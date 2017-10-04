#include"bitmap.h"
#include<string>
#include<vector>

using namespace std;

int main()
{   
    Bitmap image;
    vector <vector <Pixel> > bmp;
    Pixel rgb;

    image.open("project2image.bmp");
    bmp = image.toPixelMatrix();


    
 return 0;
}

