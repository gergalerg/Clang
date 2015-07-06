#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    using namespace std;
    string filename;

    filename = argv[1];
    //cout << "Enter a name for the new file: ";
    //cin >> filename;

    // create output stream object for new file and call it fout
    ofstream fout(filename.c_str());

    fout << "For your eyes only!\n"; // write to file
    cout << "Enter your secret number: "; // write to screen
    float secret;
    cin >> secret;
    fout << "Your secret number is " << secret << endl;
    fout.close(); // close file

    ifstream fin(filename.c_str());
    cout << "Here are the contents of " << filename << ":\n";
    char ch;
    while (fin.get(ch))    // read character from file and
        cout << ch;        // write it to screen
    cout << "Done\n";
    fin.close();

    return 0;
}
