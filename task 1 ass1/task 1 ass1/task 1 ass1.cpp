/*Abdaltawab Abo Hussein ID for the first student 20200310
Abdaltawab Abo Hussein :ID for the first student 20200310
Abdaltawab Abo Hussein : ID for the first student 20200310
 the name for the first student : Abdaltawab Hussein Abdaltawab
 ID for the second student 20200156
 the name for the second student : hassan mohammed nafed */


#include <iostream>
#include <iomanip> // header file needed to use setprecision
#include <cmath>  //needed to use the pow function 

using namespace std;

int main() {

    double outside_temperature, speed, temperature_windChill;

    // get the temperture from the user
    cout << " please enter the temperatures in degree Celsius\n";
    cin >> outside_temperature;

    // get the wind speed from the user 
    cout << " please enter the wind speed in kilometers per hour\n";
    cin >> speed;


    /*the condition for that process
    is  (outside_temperature >-50 && outside_temperature < 5 && speed >= 4)*/
    if (outside_temperature > -50 && outside_temperature < 5 && speed >= 4)
    {

        //compute and display temperature_windChill for this equation
        temperature_windChill = ((13.12 + (0.6215 * outside_temperature)) - (11.37 * pow(speed, 0.16)) + (0.3966 * outside_temperature * pow(speed, 0.16)));


        /*print temperature_windChill for the user
         note setprecision used for displaying te result as a float
        with exactly 2 digits after the decimal point */

        cout << " the wind chill temperature is : " << setprecision(4) << temperature_windChill;
    }
    else

        cout << " invalid  Answer ";

    return 0;
}