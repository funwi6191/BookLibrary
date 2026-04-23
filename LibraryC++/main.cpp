#include <iostream>

using namespace std;





int main()
{
    string borrower, book;
    int days;
    double totalFine = 0;
    cout << "Enter borrower name: ";
    getline(cin, borrower);
    cout << "Enter book title: ";
    getline(cin, book);
    cout << "Enter days overdue: ";
    cin >> days;
    cout << "\n--- FINE NOTICE ---\n";
    cout << "Borrower: " << borrower << endl;
    cout << "Book: " << book << endl;
    cout << "Days Overdue: " << days << endl;
    if (days <= 7) {
            totalFine = days * 2;
            cout << "Fine Breakdown: R" << totalFine << endl;
    }
    else if (days <= 14) {
            totalFine = (7 * 2) + ((days - 7) * 5);
            cout << "Fine Breakdown:\nDays 1-7: R14\nDays 8-" << days << ": R" << (days - 7) * 5 << endl;
    }
     else if (days <= 30) {
            totalFine = (7 * 2) + (7 * 5) + ((days - 14) * 10);
            cout << "Fine Breakdown:\nDays 1-7: R14\nDays 8-14: R35\nDays 15-" << days << ": R" << (days - 14) * 10 << endl;
     }
     else {
        totalFine = (7 * 2) + (7 * 5) + (16 * 10) + ((days - 30) * 15) + 50;
        cout << "Fine Breakdown:\nOver 30 days: R" << (days - 30) * 15 << " + R50 replacement fee" << endl;
        cout << "WARNING: Book considered lost!\n";
     }
        cout << "TOTAL FINE: R" << totalFine << endl;




    return 0;
}
