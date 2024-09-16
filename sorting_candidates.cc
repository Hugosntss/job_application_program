#include <iostream>
using namespace std;

int main() {
    string citizenship;
    bool bachelor_degree;
    int years_experience;


    cout << "Are you a US citizen? (yes/no): ";
    cin >> citizenship;


    cout << "Do you have a bachelor's degree? (1 for yes, 0 for no): ";
    cin >> bachelor_degree;


    cout << "How many years of experience do you have? ";
    cin >> years_experience;

    bool has_citizenship = (citizenship == "yes");
    bool eligible = has_citizenship && (bachelor_degree || years_experience >= 2);

    if (eligible) {
        cout << "You are eligible for the job." << endl;
    } else {
        cout << "You are not eligible for the job." << endl;
    }

    return 0;
}
