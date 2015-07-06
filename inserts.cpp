// inserts.cpp - copy() and insert iterators
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>

template <typename T>
void output(const T & s) { std::cout << s << " "; }

int main()
{
    using namespace std;

    string s1[4] = {"fine", "fish", "fashion", "fate"};
    string s2[2] = {"busy", "bats"};
    string s3[2] = {"silly", "singers"};
    int mynumbers[10] = {1,2,3,4,5,6,7,8,9,0};
    vector<int> mi(10);
    copy(mynumbers, mynumbers + 10, mi.begin());

    vector<string> words(4);
    copy (s1, s1 + 4, words.begin());
    for_each(words.rbegin(), words.rend(), output<string>);
    cout << endl;
    for_each(mi.rbegin(), mi.rend(), output<int>);
    cout << endl;
    // construct anonymous back_insert_iterator object
    copy (s2, s2 + 2, back_insert_iterator<vector<string> >(words));
    for_each(words.begin(), words.end(), output<string>);
    cout << endl;

    copy (s3, s3  + 2, insert_iterator<vector<string> >(words, words.end()));
    for_each(words.begin(), words.end(), output<string>);
    cout << endl;

    copy(mynumbers, mynumbers + 10, insert_iterator<vector<int> >(mi, mi.end()));
    for_each(mi.begin(), mi.end(), output<int>);
    cout << endl;
    
    vector<int>::reverse_iterator ri;
    for (ri = mi.rbegin(); ri != mi.rend(); ++ri)
        cout << *ri << ' ';
    cout << endl;
    cout << mi.at(3) << std::endl;

    return 0;
}