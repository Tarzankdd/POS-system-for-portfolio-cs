#include <iostream>
using namespace std;
int main() {
    {
        string newName;
        string newPassword;
        string loginName;
        string loginPassword;
        int loginAttempt = 0;
        cout<<"Here is the Register Page :::::: "<<endl;

        while (loginAttempt <3) {
            cout << "Please enter new user name: ";
            cin >> newName;
            cout << "Please enter new user password: ";
            cin >> newPassword;
            cout<<"Thank you for Register now you can acces to the login page : "<<endl;
            cout<<"Here is the log in page ::::::"<<endl;
            cout << "Enter login name: ";
            cin >> loginName;
            cout << "Enter password: ";
            cin >> loginPassword;
            if (loginName == newName && loginPassword == newPassword) {
                cout << "Welcome " << loginName<<endl;
                break;
            } else {
                cout << "Invalid login attempt. Please try again.\n" << '\n';
                loginAttempt++;
            }
        }
        if (loginAttempt == 3) {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
        }
        {
            struct {
                string brand;
                string model;
                int years;
            } car1, car2, car3, car4, car5;
            car1.brand = " Mercedes\n ";
            car1.model = " Benz SClass  \n";
            car1.years = 2016;
            car2.brand = " Nissan \n";
            car2.model = "GTR\n";
            car2.years = 2008;
            car3.brand = " Nissan \n";
            car3.model = "SKYLINE \n";
            car3.years = 2015;
            car4.brand = "Mercedes \n";
            car4.model = "AMG\n";
            car4.years = 2018;
            car5.brand = "Mercedes\n";
            car5.model = "S6000\n";
            car5.years = 2019;
            int numberproduct, amount, checkout;
            double total;
            char ask;
            string menu;

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
            if (!cin)
                cout << "Please put the right number of product! Thank you " << endl;
            switch (numberproduct) {
                case 1 :
                    cout << "how many product do u want to buy ? : ";
                    cin >> amount;
                    cout << "review before check out " << endl;
                    cout << "The product u choose is " <<"brand: \t" << car1.brand << " " << "model: \t" <<car1.model
                         <<" Year product: \t" << car1.years << endl;
                    cout << "that is correct ?(y/n)";
                    cin >> ask;
                    numberproduct1=numberp
                    checkout = amount * price[0];

                    if (ask == 'n') {
                        system("cls");
                        goto menu;
                    } else
                        system("cls");
                    cout << " So The product is "<<car1.brand<<car1.model<<"And it's cost " <<checkout << endl;
                    cout << "Thank you for shopping with us." << endl;
                    break;

                case 2: {

                    cout << "how many product do u want to buy ? : ";
                    cin >> amount;
                    cout << "review before check out " << endl;
                    cout << "The product u choose is " << "brand:" << car2.brand << " " << "model:" << car2.model
                         << "Year product:" << car2.years << endl;
                    cout << "that is correct ?(y/n)";
                    cin >> ask;
                    checkout = amount * price[1];

                    if (ask == 'n') {
                        system("cls");
                        goto menu;
                    } else
                        system("cls");
                   cout << " So The product is "<<car2.brand<<car2.model<<"And it's cost " <<checkout << endl;
                    cout << "Thank you for shopping with us." << endl;
                    break;

                }
                case 3: {
                    cout << "how many product do u want to buy ? : ";
                    cin >> amount;
                    cout << "review before check out " << endl;
                    cout << "The product u choose is " << "brand:" << car3.brand << " " << "model:" << car3.model
                         << "Year product:" << car3.years << endl;
                    cout << "that is correct ?(y/n)";
                    cin >> ask;
                    c
                    checkout = amount * price[2];

                    if (ask == 'n') {
                        system("cls");
                        goto menu;
                    } else
                        system("cls");
                    cout << " So The product is "<<car3.brand<<car3.model<<"And it's cost " <<checkout << endl;
                    cout << "Thank you for shopping with us." << endl;
                    break;
                }
                case 4: {
                    cout << "how many product do u want to buy ? : ";
                    cin >> amount;
                    cout << "review before check out " << endl;
                    cout << "The product u choose is " << "brand:" << car4.brand << " " << "model:" << car4.model
                         << "Year product:" << car4.years << endl;
                    cout << "that is correct ?(y/n)";
                    cin >> ask;
                    checkout = amount * price[3];

                    if (ask == 'n') {
                        system("cls");
                        goto menu;
                    } else
                        system("cls");
                   cout << " So The product is "<<car4.brand<<car4.model<<"And it's cost " <<checkout << endl;
                    cout << "Thank you for shopping with us." << endl;
                    break;
                }
                case 5: {
                    cout << "how many product do u want to buy ? : ";
                    cin >> amount;
                    cout << "review before check out " << endl;
                    cout << "The product u choose is " << "brand:" << car5.brand << " " << "model:" << car5.model
                         << "Year product:" << car5.years << endl;
                    cout << "that is correct ?(y/n)";
                    cin >> ask;
                    checkout = amount * price[4];

                    if (ask == 'n') {
                        system("cls");
                        goto menu;
                    } else
                        system("cls");
                    cout << " So The product is "<<car5.brand<<car5.model<<"And it's cost " <<checkout << endl;
                    cout << "Thank you for shopping with us." << endl;
                    break;
                }
            }
            (cout << "Do you need anything else ? (y/n) ");
            cin >> ask;
            if (ask == 'y') {
                system("cls");
                goto menu;
            } else
                return 0;

            return 0;
        }
    }
}
