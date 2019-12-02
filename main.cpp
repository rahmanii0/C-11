#include <iostream>

using namespace std;

int main()
{
    // This program will calculate the area of room in squre feet



    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;

    cout << "Enter th length of the room: ";
    int room_length {0};
    cin >> room_length;

    cout << "the area of the room is" << room_width * room_length << "square feet" <<endl;
    

    //program to calculate the price of cleaning rooms

   
    cout << "welcome to the program" << endl;
    cout <<"\nHow many rooms would you like cleaned ? ";

    int roomNumbers {0};
    cin >> roomNumbers;

    const double pricePerRoom{30};
    const double salesTax{0.06};


    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "\nNumber of rooms :"<< roomNumbers << endl;
    cout <<"\nPrice for room is : $" << pricePerRoom <<endl;
    cout << "\n so the cost is gonig to be : $" << roomNumbers * pricePerRoom << endl;
    cout <<"\nTax : $ " << roomNumbers*pricePerRoom*0.06 << endl;
    cout <<"================================================" << endl;
    cout <<"the total is : $" << (roomNumbers * pricePerRoom) + (roomNumbers*pricePerRoom*0.06) << endl;
    









    return 0;
}
