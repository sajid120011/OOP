// 23k-0077
// Sajid Ali

#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
  string title;
  string author;
  string publisher;
public:
  Book(string title, string author, string publisher)
  {
    this->title = title;
    this->author = author;
    this->publisher = publisher;
  }
  void display()
  {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
  }
};
class FictionBook : public Book
{
private:
  string genre;
  string protagonist;
public:
  FictionBook(string title, string author, string publisher, string genre, string protagonist):Book(title, author, publisher)
  {
    this->genre = genre;
    this->protagonist = protagonist;
  }
  void display()
  {
    Book::display();
    cout << "Genre: " << genre << endl;
    cout << "Protagonist: " << protagonist << endl;
  }
};
int main()
{
  FictionBook book("Game Of Thrones", "G.R.R.Martin", "Bantam Books", "Fantasy", "Jon Snow");
  book.display();
  return 0;
}
