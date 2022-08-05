#include <iostream>
#include <cmath>       // Calling libraries.
#include <string>
using namespace std;

int main()
{
    int selection1;
    int selection2;
    int selection3;
    float costMeal;
    float costSize;        // Initializing variables.
    string meal;
    string drink;
    string size;
    float totalCost;
    
    cout << "Welcome to Arby's Express Lane!" << endl << endl;
    cout << "We don't have anything you want," << endl;                // Intro to Express Lane.
    cout << "But what we have is close enough!" << endl << endl;
    
    cout << "Please select one of the meals below:" << endl;
    cout << "1: 5 Chicken Tenders ($6.49)" << endl;
    cout << "2: Reuben ($6.49)" << endl;
    cout << "3: Greek Gyro ($4.99)" << endl;                      // Menu Prompt for Meals.
    cout << "4: Beer Battered Fish ($6.79)" << endl;
    cout << "5: Fire-Roasted Philly ($6.49)" <<endl;
    cout << "Selection: ";
    cin >> selection1;
    
        switch (selection1)
    {
    case 1:
    costMeal = 6.49;
    meal = "5 Chicken Tenders";
	    break;
    case 2:
    costMeal = 6.49;                              // Switch statement that chooses item based on selection.
    meal = "Reuben";
    	break;
    case 3:
    costMeal = 4.99;
    meal = "Greek Gyro";
	    break;
    case 4:
    costMeal = 6.79;
    meal = "Beer Battered Fish";
	    break;
    case 5:
    costMeal = 6.49;
    meal = "Fire-Roasted Philly";
	    break;
    default:
    cout << "Invalid Selection";
    return(0);
        break;
    }
    
    cout << endl <<  "Select your drink:" << endl;
    cout << "1: Sweet Tea" << endl;
    cout << "2: Coke" << endl;
    cout << "3: Root Beer" << endl;            // Menu Prompt for Drink Type.
    cout << "4: Lemonade" << endl;
    cout << "Selection: ";
    cin >> selection2;
    
        switch (selection2)
    {
    case 1:
    drink = "Sweet Tea";
	    break;
    case 2:
    drink = "Coke";
	    break;
    case 3:
    drink = "Root Beer";    // Switch statement that chooses drink type based on selection.
	    break;
    case 4:
    drink = "Lemonade";
	    break;
    default:
    cout << "Invalid Selection";
    return(0);
        break;
    }
    
    cout << endl << "Size of drink: " << endl;
    cout << "1: Small ($1.59)" << endl;
    cout << "2: Medium ($1.79)" << endl;  // Menu prompt for drink size
    cout << "3: Large ($1.99)" << endl;
    cout << "Selection: ";
    cin >> selection3;

        switch (selection3)
    {
    case 1:
    costSize = 1.59;
    size = "Small";
	    break;
    case 2:
    costSize = 1.79;
    size = "Medium";    // Switch statement that chooses drink size based on selection.
	    break;
    case 3:
    costSize = 1.99;
    size = "Large";
	    break;
    default:
    cout << "Invalid Selection";
    return(0);
        break;
    }
    
    totalCost = round(((costMeal + costSize) + ((.05)*(costMeal + costSize)))*100.0)/100.0;
    cout << endl << "I hope this will make due:" << endl;
    cout << meal << " with " << size << " " << drink << endl;  // Final output with cost
    cout << "Your price with 5% tax is: $" << totalCost;
}
