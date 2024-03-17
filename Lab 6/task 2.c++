23k-0077
  Sajid Ali


#include<iostream>
#include<string>
using namespace std;
class Image
{
private:
  float width;
  float height;
  int* imageData;
public:
  Image(float w, float h)
  {
    width = w;
    height = h;
    imageData = new int[width*height];
    for(int i=0; i<width*height; i++)
    {
      imageData[i] = imageData[i];    
    }
  }
  Image(const Image& other)
  {
    width = other.width;
    height = other.height;
    imageData = new int[width*height];
    for(int i=0; i<width*height; i++)
    {
      imageData[i] = other.imageData[i];    
    }
  }
  ~Image()  
  {
    delete[] imageData;
  }
  void display()
  {
    cout<<"Width: "<<width<<endl;
    cout<<"Height: "<<height<<endl;
    for(int i=0; i<width*height; i++)
    {
      cout << imageData[i] << " ";
    }
  }
  void updateData(int index, double value)
  {
    imageData[index] = value;
    for(int i = 0; i < width*height; i++)
    {
        if(imageData[i] <= 0)
        {
          imageData[i]  = rand() % 255;
        }
    }
  }
};
int main()
{
  Image img1(10,10);
  cout<<"Image 1: "<<endl;
  img1.display();
  img1.updateData(0,0);
  cout<<"Updated data: "<<endl;
  img1.display();
  Image img2(img1);
  cout<<"Image 2: "<<endl;
  img2.display();
  return 0;
}
