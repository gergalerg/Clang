// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review {
    std::string title;
    int rating;
};

bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main()
{
    using namespace std;

    vector<Review> books;
    Review temp;
    for (int i = 0; i < 10; i++)
    {
        temp.rating = rand() % 100;
        temp.title = "PlaceHolder title";
        books.push_back(temp);
    }

    for_each(books.begin(), books.end(), ShowReview);

    sort(books.begin(), books.end(), worseThan);
    cout << "Sorted by rating:\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);
    //while (FillReview(temp))
    //    books.push_back(temp);
    //if (books.size() > 0)
    //{
    //    cout << "You entered: "
    //        << books.size() << " ratings:\n"
    //        << "Rating\tBook\n";
    //}


    return 0;
}


bool operator<(const Review & r1, const Review & r2)
{
    if (r2.title < r2.title)
        return true;
    else if (r1.title == r2.title && r1.rating < r2.rating)
        return true;
    else 
        return false;
}

bool worseThan(const Review & r1, const Review & r2)
{
    if (r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool FillReview(Review & rr)
{
   return true; 
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t: " << rr.title << std::endl;
}