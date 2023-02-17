#include <iostream>

#include <cmath> //needed to use the pow function and sqrt function

using namespace std;

int main() {

    // initialization the variables
    double x_center, y_center, x_point, y_point, redius, E, Y;


    cout << "Enter coordinates of the center of the circle: ";
    cin >> x_center >> y_center;


    cout << "Enter the redius of the circle: ";
    cin >> redius;

    cout << "Enter coordinates of the point: ";
    cin >> x_point >> y_point;


    //E is the equation for this program
    E = (pow((x_point - x_center), 2) + pow((y_point - y_center), 2));

    // Y ( distance between the center and the point )is square root for the equation
    Y = sqrt(E);

    //  using abs as the subtraction between the distance and the redius probably is negative 
    if (abs((Y - redius)) < 0.01)
    {
        Y = redius;

    }
    if (Y == redius)
        cout << "on the circle ";
    if (Y > redius)
        cout << "outside the circle ";
    else if (Y < redius)
        cout << "inside the circle ";

    return 0;
}