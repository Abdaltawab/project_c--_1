/* ID for the first student: 20200310
*the name for the first student: Abdaltawab Hussien Abdaltawab
   ID for the second student: 20200156
the name for the second student: Hassan Mohamed Nafed Mohamed
*/
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main() {
	int start_houre, start_min, start_sec, end_houre, end_min, end_sec, number_of_theday, number_of_themanth;
	string name_of_the_day;
	char plan ,y;
	float rate;
	double duration;
	cout << "enter A or B according to the plan you enrolled \n";
	cin >> plan;
	cout << "plan:" << plan << "\n";
	if (plan == 'a' || plan == 'A')
	{
		cout << "enter the start time of the call: \n";
		cin >> start_houre>>y >> start_min >>y>> start_sec;
		if (start_houre > 23 || start_min > 59 || start_sec > 59 || start_houre<0|| start_min<0||start_sec < 0)
		{
			cout << "not allow entering negative times,or times that are great than 23:59:59.\n";
			return 0;

		}
		cout << "enter the end time of the call:\n";
		cin >> end_houre>>y >> end_min >>y>> end_sec;
		if (end_houre > 23 || end_min > 59 || end_sec > 59 || end_houre<0|| end_min<0||end_sec < 0)
		{
			cout << "not allow entering negative times,or times that are great than 23:59:59.\n";
			return 0;
		}
		cout << "enter name of the day ( Sat, Sun, Mon, Tues, Wed, Thurs, Fri):\n";
		cin >> name_of_the_day;
		cout << "enter number of the day :\n";
		cin >> number_of_theday;
		cout << "enter number of the manth :\n";
		cin >> number_of_themanth;
		cout << "call info:-\n";
		cout<<"the start time of the call :"<< start_houre << ":" << start_min << ":" <<start_sec<<"\n";
		cout << "the end time of the call :" << end_houre << ":" << end_min << ":" << end_sec<<"\n";

		cout << "date of call:   " << name_of_the_day << "  " << number_of_theday << " " << number_of_themanth << "\n";
		//duration = ((end_houre * 60) + end_min + (end_sec / 60)) - ((start_houre * 60) + start_min + (start_sec / 60));
		duration = ((end_houre - start_houre) * 60) + (end_min - start_min);
		if ((end_sec-start_sec)>0)
		{
			duration += 1;
		}
		cout << "the duretion of the call : " << duration << " minutes" << "\n";
		cout << "plan A:\n";
		cout << left << setw(25) << "Days" << left << setw(25) << "Time" << left << setw(25) << "Duration" << left << setw(25) << "Rate" << "\n";
		cout << left << setw(25) << "Sunday to Thursday" << left << setw(25) << "7Am to 5Pm" << left << setw(25) << "Less than 15 m " << left << setw(25) << "0.60 L.E." << "\n";
		cout << left << setw(25) << "Sunday to Thursday" << left << setw(25) << "7Am to 5Pm" << left << setw(25) << "More than 15 m " << left << setw(25) << "0.80 L.E." << "\n";
		cout << left << setw(25) << "Sunday to Thursday" << left << setw(25) << "5Pm to 7Am" << left << setw(25) << "Not Applicable" << left << setw(25) << "0.45 L.E." << "\n";
		cout << left << setw(25) << "Saturday or friday" << left << setw(25) << "Any Time" << left << setw(25) << " Not Applicable" << left << setw(25) << "0.25 L.E." << "\n";
		if (name_of_the_day == "Sun" || name_of_the_day == "Mon" || name_of_the_day == "Tuse" || name_of_the_day == "Wed" || name_of_the_day == "Thur")
		{
			if (start_houre >= 7 && start_houre <= 17) {
				if (duration < 15) {
					rate = 0.60 * duration;
				}
				else
				{
					rate = 0.80 * duration;
				}
			}
			else
			{
				rate = 0.45 * duration;

			}
		}
		else
		{
			rate = 0.25 * duration;

		}
		cout << "total bill:" << rate << "\n";
	}
	else if (plan == 'B' || plan == 'b')
	{
		cout << "enter the start time of the call :\n";
		cin >> start_houre >>y>> start_min >>y>> start_sec;
		if (start_houre > 23 || start_min > 59 || start_sec > 59 || start_houre<0|| start_min<0|| start_sec < 0)
		{
			cout << "not allow entering negative times,or times that are great than 23:59:59.\n";
			return 0;

		}
		cout << "enter the end time of the call:\n";
		cin >> end_houre>>y >> end_min>>y >> end_sec;
		if (end_houre > 23 || end_min > 59 || end_sec > 59 || end_houre<0|| end_min<0|| end_sec < 0)
		{
			cout << "not allow entering negative times,or times that are great than 23:59:59.\n";
			return 0;

		}
		cout << "enter name of the day ( Sat, Sun, Mon, Tues, Wed, Thurs, Fri):\n";
		cin >> name_of_the_day;
		cout << "enter number of the day :\n";
		cin >> number_of_theday;
		cout << "enter number of the manth :\n";
		cin >> number_of_themanth;
		cout << "call info:-\n";
		cout << "the start time of the call :" << start_houre << ":" << start_min << ":" << start_sec << "\n";
		cout << "the end time of the call :" << end_houre << ":" << end_min << ":" << end_sec << "\n";

		cout << "date of call:   " << name_of_the_day << "   " << number_of_theday << "  " << number_of_themanth << "\n";
		//duration = ((end_houre * 60) + end_min + (end_sec / 60)) - ((start_houre * 60) + start_min + (start_sec / 60));
		duration = ((end_houre - start_houre) * 60) + (end_min - start_min);
		if ((end_sec - start_sec) > 0)
		{
			duration += 1;
		}
		cout << "the duretion of the call : " << duration << " minutes" << "\n";
		cout << "plan B:\n";
		cout << left << setw(25) << "Days" << left << setw(25) << "Time" << left << setw(25) << "Duration" << left << setw(25) << "Rate" << "\n";
		cout << left << setw(25) << "Sunday to wednesday" << left << setw(25) << "7Am to 5Pm" << left << setw(25) << "Less than 30 m " << left << setw(25) << "0.60 L.E." << "\n";
		cout << left << setw(25) << "Sunday to wednesday" << left << setw(25) << "7Am to 5Pm" << left << setw(25) << "More than 30 m " << left << setw(25) << "0.80 L.E." << "\n";
		cout << left << setw(25) << "Sunday to wednesday" << left << setw(25) << "5Pm to 7Am" << left << setw(25) << "Not Applicable" << left << setw(25) << "0.45 L.E." << "\n";
		cout << left << setw(25) << "Thursday to saturay " << left << setw(25) << "Any Time" << left << setw(25) << " Not Applicable" << left << setw(25) << "0.25 L.E." << "\n";
		if (name_of_the_day == "Sun" || name_of_the_day == "Mon" || name_of_the_day == "Tuse" || name_of_the_day == "Wed")
		{
			if (start_houre >= 7 && start_houre <= 17) {
				if (duration < 30) {
					rate = 0.60 * duration;
				}
				else
				{
					rate = 0.80 * duration;
				}
			}
			else
			{
				rate = 0.45 * duration;

			}
		}
		else
		{
			rate = 0.25 * duration;

		}
		cout << "total bill:" << rate << "\n";

	}
	else
	{
		cout << "please enter a or b ";
	}


	return 0;
}
















