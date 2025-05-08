#include <iostream>
#include <string>
using namespace std;

void displayBookDetails(int id, const string& name, const string& genre, const string& summary, const string& author, float price, const string& status) {
    cout << "\nBook ID: " << id << endl;
    cout << "Book Name: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Summary: " << summary << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << "/-" << endl;
    cout << "Status: " << status << endl;
    cout << "----------------------------------------\n";
}

float calculateExchangeCost(float price) 
{
    return 0.3 * price;
}

int main() 
{

    start: 
    
    int choice, genreChoice, bookId;
    float amount;
    char abc;

    cout << "\n\n";
    cout << "                       Book Management System              \n";
    cout << "\n\n";
    cout<<"\n             Welcome you today at the Book Managment System!!!\n ";
    cout << "\n What do you want to do?\n 1. Purchase New Book \n 2. Exchange Book\n 3. Exit the Program\n";
    cout << "Enter your choice --> ";
    cin >> choice;
    cin.ignore();

    if(choice==3)
    {
        goto leavesys;
    }

    if (choice == 1 || choice == 2) 
    {
        cout << "\n\n";
        cout << "Select the genre:\n 1. Fiction\n 2. Biographies\n 3. Textbooks\n 4. Reference\n";
        cout << "Enter your choice --> ";
        cin >> genreChoice;
        cin.ignore();

        cout << "\n\n";
        if (genreChoice == 1) 
        {
            cout << "Fiction Books:\n";
            displayBookDetails(1, "The_Whispering_Winds", "Fantasy, Adventure", 
                "A young girl discovers she can communicate with the wind, leading her on a thrilling quest.", 
                "Ria Jain", 250, "Available");
            displayBookDetails(2, "The_Shadow_Weaver", "Mystery, Thriller", 
                "A detective must unravel the secrets of a mysterious weaver who seems to be manipulating reality.", 
                "Kavita Rao", 300, "Unavailable (Will be available in 3-4 days)");
            displayBookDetails(3, "The_Last_Hope", "Science Fiction, Dystopian", 
                "In a post-apocalyptic world, a small group of survivors must band together to find a cure for a deadly virus.", 
                "Rohan Mehta", 400, "Available");
            displayBookDetails(4, "The_Forgotten_Kingdom", "Historical Fiction, Fantasy", 
                "A young prince discovers a hidden kingdom that has been forgotten for centuries, leading him on a journey of discovery.", 
                "Ria Jain", 350, "Discontinued by the Publisher");
        } 
        else if (genreChoice == 2) 
        {
            cout << "Biographies:\n";
            displayBookDetails(1, "Steve_Jobs", "Biography", 
                "A detailed biography of the Apple co-founder, offering insights into his life, career, and legacy.", 
                "Walter Isaacson", 1000, "Available");
            displayBookDetails(2, "Einstein:His_Life", "Biography", 
                "A biography that provides an inside look at the life and career of entrepreneur and business.", 
                "Ashlee Vance", 1500, "Available");
            displayBookDetails(3, "World_War_II", "Biography, History", 
                "The inspiring true story of Olympic athlete and World War II prisoner of war Louis Zamperini.", 
                "Laura Hillenbrand", 1000, "Available");
        } 
        else if (genreChoice == 3) 
        {
            cout << "Textbooks:\n";
            displayBookDetails(1, "Dispute_Resolution", "Law, Dispute Resolution", 
                "Covers negotiation, mediation, and arbitration and their application in legal contexts.", 
                "Stephen Goldberg, Frank Sander, Nancy Rogers", 3000, "Unavailable");
            displayBookDetails(2, "Microeconomics", "Economics", 
                "Covers the fundamentals of microeconomics.", 
                "David C. Colander", 1000, "Available");
            displayBookDetails(3, "Organic_Chemistry", "Chemistry", 
                "Covers the fundamentals of Organic Chemistry.", 
                "Jerry March", 2200, "Available");
            displayBookDetails(4, "Calculus", "Mathematics", 
                "Covers the fundamentals of calculus.", 
                "Michael Spivak", 5000, "Unavailable");
        } 
        else if (genreChoice == 4) 
        {
            cout << "Reference Books:\n";
            displayBookDetails(1, "Python", "Computer Science, Programming", 
                "A comprehensive introduction to Python programming.", 
                "Eric Matthes", 5000, "Unavailable");
            displayBookDetails(2, "Html_CSS", "Computer Science, Web Development", 
                "A guide to building websites with HTML and CSS.", 
                "Jon Duckett", 3500, "Available");
            displayBookDetails(3, "Statistics", "Mathematics, Statistics", 
                "A beginner's guide to statistics.", 
                "Deborah J. Rumsey", 4000, "Available");
            displayBookDetails(4, "Physics", "Physics", 
                "A beginner's guide to physics.", 
                "Steven Holzner", 1500, "Available");
        } 
        else 
        {
            cout << "Invalid genre choice! Please try again.\n";
            return 0;
        }

        cout << "\n\n";
        cout << "Enter the ID of the book: ";
        cin >> bookId;
        cin.ignore();

        if (choice == 1)
         {
            if (genreChoice == 1) 
            {
                if (bookId == 1) 
                {
                    cout << "You have selected: The_Whispering_Winds\n";
                    cout << "Cost Price: 250/-\n";
                } else if (bookId == 2) 
                {
                    cout << "You have selected: The_Shadow_Weaver\n";
                    cout << "Cost Price: 300/-\n";
                } else if (bookId == 3) 
                {
                    cout << "You have selected: The_Last_Hope\n";
                    cout << "Cost Price: 400/-\n";
                } else if (bookId == 4) 
                {
                    cout << "You have selected: The_Forgotten_Kingdom\n";
                    cout << "Cost Price: 350/-\n";
                } else 
                {
                    cout << "Invalid book ID! Please try again.\n";
                }
            } 
            else if (genreChoice == 2) 
            {
                if (bookId == 1) 
                {
                    cout << "You have selected: Steve_Jobs\n";
                    cout << "Cost Price: 1000/-\n";
                } else if (bookId == 2) 
                {
                    cout << "You have selected: Einstein:His_Life\n";
                    cout << "Cost Price: 1500/-\n";
                } else if (bookId == 3) 
                {
                    cout << "You have selected: World_War_II\n";
                    cout << "Cost Price: 1000/-\n";
                } else 
                {
                    cout << "Invalid book ID! Please try again.\n";
                }
            } 
            else if (genreChoice == 3) 
            {
                if (bookId == 1) 
                {
                    cout << "You have selected: Dispute_Resolution\n";
                    cout << "Cost Price: 3000/-\n";
                } else if (bookId == 2) 
                {
                    cout << "You have selected: Microeconomics\n";
                    cout << "Cost Price: 1000/-\n";
                } else if (bookId == 3) 
                {
                    cout << "You have selected: Organic_Chemistry\n";
                    cout << "Cost Price: 2200/-\n";
                } else if (bookId == 4) 
                {
                    cout << "You have selected: Calculus\n";
                    cout << "Cost Price: 5000/-\n";
                } else 
                {
                    cout << "Invalid book ID! Please try again.\n";
                }
            } 
            else if (genreChoice == 4) 
            {
                if (bookId == 1) 
                {
                    cout << "You have selected: Python\n";
                    cout << "Cost Price: 5000/-\n";
                } else if (bookId == 2) 
                {
                    cout << "You have selected: Html_CSS\n";
                    cout << "Cost Price: 3500/-\n";
                } else if (bookId == 3) 
                {
                    cout << "You have selected: Statistics\n";
                    cout << "Cost Price: 4000/-\n";
                } else if (bookId == 4) 
                {
                    cout << "You have selected: Physics\n";
                    cout << "Cost Price: 1500/-\n";
                } else 
                {
                    cout << "Invalid book ID! Please try again.\n";
                }
            }
        } else if (choice == 2) 
        {
            if (genreChoice == 1) 
            {
                if (bookId == 1) 
                {
                    cout << "You have selected: The_Whispering_Winds\n";
                    cout << "Original Price: 250/-\n";
                    amount = calculateExchangeCost(250);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } else if (bookId == 2) 
                {
                    cout << "You have selected: The_Shadow_Weaver\n";
                    cout << "Original Price: 300/-\n";
                    amount = calculateExchangeCost(300);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 3) 
                {
                    cout << "You have selected: The_Last_Hope\n";
                    cout << "Original Price: 400/-\n";
                    amount = calculateExchangeCost(400);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 4) 
                {
                    cout << "You have selected: The_Forgotten_Kingdom\n";
                    cout << "Original Price: 350/-\n";
                    amount = calculateExchangeCost(350);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else 
                {
                    cout << "Invalid book ID! Please try again.\n";
                }
            } 
            else if (genreChoice == 2) 
            {
                if (bookId == 1) 
                {
                    cout << "You have selected: Steve_Jobs\n";
                    cout << "Original Price: 1000/-\n";
                    amount = calculateExchangeCost(1000);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 2) 
                {
                    cout << "You have selected: Einstein:His_Life\n";
                    cout << "Original Price: 1500/-\n";
                    amount = calculateExchangeCost(1500);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 3) 
                {
                    cout << "You have selected: World_War_II\n";
                    cout << "Original Price: 1000/-\n";
                    amount = calculateExchangeCost(1000);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else 
                {
                    cout << "Invalid book ID! Please try again.\n";
                }
            } 
            else if (genreChoice == 3) 
            {
                if (bookId == 1) 
                {
                    cout << "You have selected: Dispute_Resolution\n";
                    cout << "Original Price: 3000/-\n";
                    amount = calculateExchangeCost(3000);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 2) 
                {
                    cout << "You have selected: Microeconomics\n";
                    cout << "Original Price: 1000/-\n";
                    amount = calculateExchangeCost(1000);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 3) {
                    cout << "You have selected: Organic_Chemistry\n";
                    cout << "Original Price: 2200/-\n";
                    amount = calculateExchangeCost(2200);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 4) {
                    cout << "You have selected: Calculus\n";
                    cout << "Original Price: 5000/-\n";
                    amount = calculateExchangeCost(5000);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else {
                    cout << "Invalid book ID! Please try again.\n";
                }
            } 
            else if (genreChoice == 4) {
                if (bookId == 1) {
                    cout << "You have selected: Python\n";
                    cout << "Original Price: 5000/-\n";
                    amount = calculateExchangeCost(5000);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 2) 
                {
                    cout << "You have selected: Html_CSS\n";
                    cout << "Original Price: 3500/-\n";
                    amount = calculateExchangeCost(3500);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 3) 
                {
                    cout << "You have selected: Statistics\n";
                    cout << "Original Price: 4000/-\n";
                    amount = calculateExchangeCost(4000);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else if (bookId == 4) 
                {
                    cout << "You have selected: Physics\n";
                    cout << "Original Price: 1500/-\n";
                    amount = calculateExchangeCost(1500);
                    cout << "Renting Price (30% of original price): " << amount << "/-\n";
                } 
                else 
                {
                    cout << "Invalid book ID! Please try again.\n";
                }
            }
        }
    } 
    else {
        cout << "Invalid choice! Please try again.\n";
    }

   leavesys: 

    cout<<"Do you want to see any alternatives?(Y/N)";
    cin>>abc;
    if(abc=='y'||abc=='Y')
    {

        goto start;
    }
    else
    {
        cout<<"Program ended!";
    }


    cout << "\n\n";
    cout << "                        Thank You, Visit Again!               \n";
    cout << "\n\n";
    
    return 0;
}