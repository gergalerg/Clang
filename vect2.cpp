// vect2.cpp -- methods and iterators
#include <iostream>
#include <string>
#include <vector>

struct Review {
    std::string title;
    int rating;
};

bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main()
{
    using std::cout;
    using std::vector;
    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);
    int num = books.size();
    if (num > 0)
    {
        cout << "Thank you. You entered the following:\n"
        << "Rating\tBook\n";
        for (int i = 0; i < num; i++)
            ShowReview(books[i]);
        cout << "Reprising:\n"
            << "Rating\tBook\n";
        vector<Review>::iterator pr;
        for_each(books.begin(), books.end(), ShowReview);
        vector<Review> oldlist(books); // copy constructor used
        if (num > 3)
        {
            // remove two items
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasure:\n";
            sort(books.begin(), books.end());
            for_each(books.begin(), books.end(), ShowReview);
            // insert 1 item
            books.insert(books.begin() , oldlist.begin() + 1,
                        oldlist.begin() + 2);
            cout << "After insertion:\n";
            sort(books.begin(), books.end());
            for_each(books.begin(), books.end(), ShowReview);
        }
        books.swap(oldlist);
        cout << "Swapping oldlist with books:\n";
        //for (pr = books.begin(); pr != books.end(); pr++)
        //    ShowReview(*pr);
        for_each(books.begin(), books.end(), ShowReview);
    } 
    else
        cout << "Nothing entered...\n";
    return 0;
}

bool FillReview(Review &  rr)
{
    std::cout << "Enter book title(q to quit): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;
    // get rid of last input line
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}

bool operator<(const Review & r1, const Review & r2)
{
    if (r1.title < r2.title)
        return true;
    else if (r1.title == r2.title && r1.rating < r2.rating)
        return true;
    else
        return false;
}