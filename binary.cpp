// binary.cpp 
#include <iostream> // not required by most sytsems
#include <fstream>
#include <iomanip>
#include <cstdlib> // for exit()

inline void eatline() { while (std::cin.get() != '\n') continue; }

struct planet 
{
    char name[20]; // name of planet
    double population; // population
    double g;
};

const char * file = "planets.dat";

int main()
{
    using namespace std;
    planet pl;
    cout << fixed << right;

    // show initial contents
    ifstream fin;
    fin.open(file, ios_base::in | ios_base::binary);  // binary file
    if (fin.is_open())
    {
        cout << "Here are the current contents of " << file <<
            " file:\n";
        while (fin.read((char * ) &pl, sizeof pl))
        {
            cout << setw(20) << pl.name << ": "
                    << setprecision(0) << setw(12) << pl.population
                    << setprecision(2) << setw(6) << pl.g << endl;
        }
        fin.close();
    }

    // add new data
    ofstream fout(file, 
            ios_base::out | ios_base::app | ios_base::binary);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter planet name (Blank line to quit) :\n";
    cin.get(pl.name, 20);
    while (pl.name[0] != '\0')
    {
        eatline();
        cout << "Enter population: ";
        cin >> pl.population;
        cout << "Enter planets acc. of gravity: ";
        cin >> pl.g;
        eatline();
        fout.write((char *) &pl, sizeof pl);
        cout << "Enter planet name (Enter blank line to quit: \n";
        cin.get(pl.name, 20);
    }
    fout.close();

    // show revised file
    fin.clear(); 
    fin.open(file, ios_base::in | ios_base::binary);
    if (fin.is_open())
    {
        cout << "HEre are the new contents of the " << file << " file;\n";
        while (fin.read((char *) &pl, sizeof pl))
        {
            cout << setw(20) << pl.name << ": "
                    << setprecision(0) << setw(12) << pl.population
                    << setprecision(2) << setw(6) << pl.g << endl;
        }
        fin.close();
    }
    cout << "Done.\n";
    return 0;
}
