#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
    char choice;
    string bookname;
    string removebook;
    int countnum;
    string authorname;
    string fullbook;
    vector<string> bookarray;

    cout << "**  Welcome to the database **" << endl;

    do
    {
        cout << " a. Add a book" << endl;
        cout << " b. Remove a book" << endl;
        cout << " c. Empty database" << endl;
        cout << " d. Show number of books" << endl;
        cout << " e. Show all of books" << endl;
        cout << " f. Quit" << endl;

        cin >> choice;

        switch (choice)
        {
        case 'a':
            cout << "Please enter name of book: ";
            cin >> bookname;

            cout << "Please enter author name :";
            cin >> authorname;

            fullbook = bookname + " " + authorname;
            bookarray.push_back(fullbook);
            cout << "Book has been added" << endl;
        case 'b':
            cout << "Please enter book number to delete: ";
            cin >> removebook;

            for (int i = 0; i < bookarray.size(); i++)
            {
                if (bookarray[i].find(removebook) != std::string::npos)
                {
                    bookarray.erase(bookarray.begin() + i);
                    break;
                }
            }

            cout << " " << endl;
            cout << "Book has been removed" << endl;
            cout << " " << endl;
        case 'c':
            bookarray.clear();

            cout << "Database cleared" << endl;
            cout << " " << endl;
        case 'd':
            countnum = bookarray.size();
            cout << "Number of books in array:" << countnum << endl;
        case 'e':
            cout << "Name of books in array " << endl;

            for (int i = 0; i < bookarray.size(); i++)
            {
                cout << i << " " << bookarray[i] << " " << endl;
            }

            cout << " " << endl;
        case 'f':
            cout << "Terminating the program..." << endl;
        default:
            cout << "Please enter a valid value" << endl;
        }
    } while (choice != 'f');

    return 0;
}