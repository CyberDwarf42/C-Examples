#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

using namespace std;
class Publication {
    private:
        struct author {
            string first_name;
            string last_name;
        };

        author author_list[3];
    protected:
        string NameOfPublication; // protected string for name.
        double PriceOfPublication; // protected double for price.
    public:
        void set_price(double price){ // sets the price
        PriceOfPublication = price;
        }

        double get_price(){ // gets the price
            return PriceOfPublication;
        }

        void setAuthors(string firstName1, string lastName1){ // polymorphic function for setting the authors names
        author_list[0].first_name = firstName1;
        author_list[0].last_name = lastName1;
        }

        void setAuthors(string firstName1, string lastName1, string firstName2, string lastName2){
        author_list[0].first_name = firstName1;
        author_list[0].last_name = lastName1;
        author_list[1].first_name = firstName2;
        author_list[1].last_name = lastName2;
        }

        void setAuthors(string firstName1, string lastName1, string firstName2, string lastName2, string firstName3, string lastName3){
        author_list[0].first_name = firstName1;
        author_list[0].last_name = lastName1;
        author_list[1].first_name = firstName2;
        author_list[1].last_name = lastName2;
        author_list[2].first_name = firstName3;
        author_list[2].last_name = lastName3;
        }

        string listAuthors (){ // creates a list of all the authors for a publication.
            string temp = "";
            for(int i=0; i<3; i++){
                if (author_list[i].first_name != "" && author_list[i].last_name !=""){
                    temp = temp + author_list[i].last_name + ", " + author_list[i].first_name[0] + "., ";
                }
            }
            return temp;
            }
        };

class Book: public Publication{ //Book is a subclass of publication
    public:
        string ISBN;
        int book_length;
        int year_of_publication;

        void set_name(string nameofBook){
            NameOfPublication= nameofBook;
        }

        string get_nameofBook(){
            return NameOfPublication;
        }

        Book(double price){ // constructor to set the price of the book.
        set_price(price);
        }
};

class Journal: public Publication{ // journal is a subclass of publication.
    public:
        string ISSN;
        void set_name(string nameofJournal){
            NameOfPublication= nameofJournal;
        }

        string get_nameofJournal(){
            return NameOfPublication;
        }
};

class Article: public Journal{ // article is a subclass of journal.
    public:
        Article(double price){ // constructor to set the price.
        set_price(price);
        }
        int volume_number;
        int issue_number;
        int publication_year;
        int first_page;
        int last_page;
        string Title_of_Article;
        string citation(){ // This function returns a citation for any article entered using this class.
            string temp = "";
            while (temp == "")
            temp = temp + listAuthors() + " (" + to_string(publication_year) + "). " + Title_of_Article + ". " + get_nameofJournal() +
            ", " + to_string(volume_number) + "(" + to_string(issue_number) + "), " + to_string(first_page) + "-" + to_string(last_page);
            return temp;
        }
};

int main()
{
    Publication pub1; // sets the publication with a price.
    pub1.set_price(24);

    Book pub2(12); // enters price with constructor.
    pub2.setAuthors("Manuel", "Oliveira", "Julia", "Roberts"); // this calls the second of the polymorphic functions.
    pub2.set_name("History of Cinematography");
    pub2.ISBN = "9876543210";
    pub2.book_length = 123;
    pub2.year_of_publication = 1995;

    Article pub3(60); // sets the price with constructor.
    pub3.setAuthors("Joan", "Rider");
    pub3.publication_year = 1996;
    pub3.set_name("International Journal of Computation");
    pub3.volume_number = 4;
    pub3.issue_number = 2;
    pub3.first_page = 45;
    pub3.last_page = 99;
    pub3.Title_of_Article = "A novel C++ program";
    pub3.ISSN = "1234567890"; // included due to assignment instructions calling for it. Not used anywhere else.


    Publication works[20]; // creates array of 20 publications.

    works[0] = pub1; // sets first to the original base publication.
    works[1] = pub3; // sets second to the article.

    for (int i=2; i<20; i=i+2){
        works[i] = pub2; //sets the book to be at all odd locations
        works[i+1] = pub3; // sets the article to be at all even locations
    }

    for (int i=0; i<20; i++){ // prints the price of all the publications.
        cout << works[i].get_price() << endl;
    }

    cout << pub3.citation(); // gives the citation of the article.
}
