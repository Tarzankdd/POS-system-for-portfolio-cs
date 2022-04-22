#include <iostream>
using namespace std;
int main() {
    struct {
        string brand;
        string model;
        int years;
    } car1,car2,car3,car4,car5;
    car1.brand = " Mercedes\n ";
    car1.model = " Benz SClass  \n";
    car1.years = 2016;
    car2.brand = " Nissan \n";
    car2.model = "GTR\n";
    car2.years = 2008;
    car3.brand=  " Nissan \n";
    car3.model=  "SKYLINE \n";
    car3.years=  2015;
    car4.brand="Mercedes \n";
    car4.model="AMG\n";
    car4.years=2018;
    car5.brand="Mercedes\n";
    car5.model="S6000\n";
    car5.years=2019;
    int numberproduct, amount, checkout;
    double total;
    char ask;
    string menu, reviewcheckout1, reviewcheckout2,reviewcheckout3;

    float price[5] = {230.50, 500.99, 620, 1000, 2000.99,};
    menu:
    cout << "=============WELCOME TO THE ANGKOR CITY AUTO CAR================" << endl;
    cout << "=============HERE IS THE LIST ==================================\n";
    cout << "__________________________________________________________________" << endl;
    cout << "=======NAME OF PRODUCT \t||PRICE =========\n";
    cout << "1. \t| |Mercedes Benz SClass  230.50Riel " << endl;
    cout << "2. \t| |Nissan GTR 500.99riel" << endl;
    cout << "3. \t| |SKYLINE 620riel" << endl;
    cout << "4. \t| |AMG 1000 riel" << endl;
    cout << "5. \t| |S6000 2000.99 riel " << endl;
    cout << "what do car do u want to purchase   : ";
    cin >> numberproduct;
    if(!cin)
        cout<<"Please put the right number of product! Thank you "<<endl;
    switch (numberproduct) {
        case '1' :
            cout << "how many product do u want to buy ? : ";
            cin >> amount;
            cout << "review before check out " << endl;
            cout << "The product u choose is " << "brand:" << car1.brand << " " << "model:" << car1.model
                 << "Year product:" << car1.years << endl;
            cout << "that is correct ?(y/n)";
            cin >> ask;
        reviewcheckout1:
            total = amount *price[0];
            cout << " So The Total is " << total << endl;
            cout << "Thank you for shopping with us." << endl;
            if (ask == 'n') {
                system("cls");
                goto menu;
            } else
                system("cls");
            goto reviewcheckout1;
            break;

        case '2': {

            cout << "how many product do u want to buy ? : ";
            cin >> amount;
            cout << "review before check out " << endl;
            cout << "The product u choose is " << "brand:" << car2.brand << " " << "model:" << car2.model
                 << "Year product:" << car2.years << endl;
            cout << "that is correct ?(y/n)";
            cin >> ask;
            reviewcheckout2:
            total = amount *price[1];
            cout << " So The Total is " << total<< endl;
            cout << "Thank you for shopping with us." << endl;
            if (ask == 'n') {
                system("cls");
                goto menu;
            } else
                system("cls");
            goto reviewcheckout2;
            return 0;   

        }
        case '3':{
            cout << "how many product do u want to buy ? : ";
            cin >> amount;
            cout << "review before check out " << endl;
            cout << "The product u choose is " << "brand:" << car3.brand << " " << "model:" << car3.model
                 << "Year product:" << car3.years << endl;
            cout << "that is correct ?(y/n)";
            cin >> ask;
            reviewcheckout3:
            checkout = amount *price[2];
            cout << " So The Total is " << checkout << endl;
            cout << "Thank you for shopping with us." << endl;
            if (ask == 'n') {
                system("cls");
                goto menu;
            } else
                system("cls");
            goto reviewcheckout3;
            return 0;
        }
        case '4':{
            cout << "how many product do u want to buy ? : ";
            cin >> amount;
            cout << "review before check out " << endl;
            cout << "The product u choose is " << "brand:" << car4.brand << " " << "model:" << car4.model
                 << "Year product:" << car4.years << endl;
            cout << "that is correct ?(y/n)";
            cin >> ask;
            reviewcheckout4:
            checkout = amount *price[3];
            cout << " So The Total is " << checkout << endl;
            cout << "Thank you for shopping with us." << endl;
            if (ask == 'n') {
                system("cls");
                goto menu;
            } else
                system("cls");
            goto reviewcheckout4;
            return 0;
        }
        case '5':{
            cout << "how many product do u want to buy ? : ";
            cin >> amount;
            cout << "review before check out " << endl;
            cout << "The product u choose is " << "brand:" << car5.brand << " " << "model:" << car5.model
                 << "Year product:" << car5.years << endl;
            cout << "that is correct ?(y/n)";
            cin >> ask;
            reviewcheckout5:
            checkout = amount *price[4];
            cout << " So The Total is " << checkout << endl;
            cout << "Thank you for shopping with us." << endl;
            if (ask == 'n') {
                system("cls");
                goto menu;
            } else
                system("cls");
            goto reviewcheckout5;
            //return 0;
        }
    }
    (cout << "Do you need anything else ? (yes/no) ");
    cin >> ask;
    if (ask == 'yes') {
        system("cls");
        goto menu;
    } else
        return 0;

    return 0;
}
