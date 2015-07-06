#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
const int LIM = 20;
struct planet 
{
    std::string name; // name of planet
    double population;   
    double g;    // its acceleration of gravity
};
int main()
{
    using namespace std;
    planet pl;
    const string file_name = "planets.dat";
    ifstream fin;
    fin.open(file_name);
    if (!fin.is_open())
    {
        cerr << "Not open";
        exit(EXIT_FAILURE);
    } 
    fin.close();

    ofstream fout("planets.dat", ios_base::out | ios_base::app);


    pl.name = "Earth";
    pl.population = 3.7e8;
    pl.g = 9.8;
    fout << pl.name << " " << pl.population << " " << pl.g << "\n";

    fout.close();
    return 0;

}