/**
 * focaccia.cpp
 *
 * Adria Shines
 * adrias
 *
 * EECS 183: Project 1
 * Fall 2021
 * 
 * Project UID: fde244392017fe65ebcc34f01c226b11f113bb3dc6dae8af4cb6ea11bf76f7c8
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 0.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);



int main() {
    int people;
    cout << "How many people do you need to serve? ";
    cin >> people;
    cout << endl << endl;

    // TODO: add your code below
    
    double flour;
    double yeast;
    double salt;
    double oliveoil;
    const double PEOPLE_PER_LOAF = 4.0;
    int numofLoaves = ceil(people / PEOPLE_PER_LOAF);

    cout << "You need to make: " << numofLoaves << " " << pluralize("loaf", "loaves", numofLoaves)
    << " of focaccia" <<endl;
    cout << endl;
    cout << "Shopping List for Focaccia Bread" <<endl;
    cout << "--------------------------------" <<endl;
    
    // flour ingredient
    double cups_of_flour_needed = 5 * numofLoaves;
    double pounds_of_flour_needed = cups_of_flour_needed / 4;
    int bags_of_flour_needed = ceil(pounds_of_flour_needed / 5);
    cout << bags_of_flour_needed << pluralize(" bag"," bags",bags_of_flour_needed) << " of flour"
    <<endl;
    
    //yeast ingredient
    double teaspoon_of_yeast_needed = 1.75 * numofLoaves;
    double packages_of_yeast_needed = ceil(teaspoon_of_yeast_needed / 2.25);
    cout << packages_of_yeast_needed << pluralize(" package", " packages",packages_of_yeast_needed)
    << " of yeast" << endl;
    
    // salt ingredient
    double teaspoons_of_salt_needed = 1.875 * numofLoaves;
    double grams_of_salt_needed = teaspoons_of_salt_needed * 5;
    double canisters_of_salt_needed = ceil(grams_of_salt_needed / 30);
    cout << canisters_of_salt_needed << pluralize(" canister"," canisters",canisters_of_salt_needed)
    << " of salt" << endl;
    
    // olive oil ingredient
    double tablespoons_of_oliveoil_needed = 2 * numofLoaves;
    double mls_of_oliveoil_needed = tablespoons_of_oliveoil_needed * 14.8;
    double bottles_of_oliveoil_needed = ceil(mls_of_oliveoil_needed / 500);
    cout << bottles_of_oliveoil_needed << pluralize(" bottle", " bottles", bottles_of_oliveoil_needed)
    << " of olive oil" << endl;
    
    // Individual ingredient's prices
    flour = bags_of_flour_needed * 2.69;
    yeast = packages_of_yeast_needed * .40;
    salt = canisters_of_salt_needed * .49;
    oliveoil = bottles_of_oliveoil_needed * 6.39;
    
    // Total cost of all ingredients
    double total_cost = flour + yeast + salt + oliveoil;
    cout << endl;
    cout << "Total expected cost of ingredients: $" << total_cost << endl;
    cout << endl;
    cout << "Have a great party!" << endl;
    
    
    return 0;
}

// ----------------------------------------------
// *** DO NOT CHANGE ANYTHING BELOW THIS LINE ***

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}
