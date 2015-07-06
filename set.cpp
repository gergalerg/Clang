#include <iostream>
#include <set>
#include <string>
#include <map>

using namespace std; int main()
{
    string name = "Greg";
    string herb = "Herb";
    map<string, int> wordmap;
    set<string> wordset;
    wordset.insert(name);
    wordset.insert("Herb");
    wordset.insert("Herb");
    wordmap.insert(pair<string, int> (name, 1));
    wordmap.insert(pair<string, int> (herb, 1));
    wordmap[name] += 1;
    wordmap[herb] += 1;
    //wordmap.insert(pair<string, int> (name, 2));
    cout << wordmap[name] << endl;
    for (auto x: wordset) cout << x << " " << endl;

}