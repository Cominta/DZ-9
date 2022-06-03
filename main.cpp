#include <iostream>
#include <time.h>

void taskFirst()
{
	int weight;
    int growth;
    char sex;

    std::cout << "Enter your weight: ";
    std::cin >> weight; 

    std::cout << "Enter your growth: ";
    std::cin >> growth;

    std::cout << "Enter your male (m - male or f - female): ";
    std::cin >> sex;  

    std::cout << "Best weight for you: " << (sex == 'm' ? growth - 100 - weight : growth - 110 - weight);
}

void taskSecond()
{
	int year;
    int month;
    int day;

    std::cout << "Enter date: ";
    std::cin >> year >> month >> day;

    int maxDays;

    if (month == 2)
    {
        maxDays = 24;
    }

    else 
    {
        maxDays = (month % 2 == 0 ? 30 : 31);
    }


    if (year > 0 && year <= 2022 && month > 0 && month <= 12 && day > 0 && day <= maxDays)
    {
        int newYear = year;
        int newMonth = month;
        int newDay = day;

        if (month == 12 && day == maxDays)
        {
            month = 1;
            year++;
        }

        else 
        {
            month++;
        }

        if (day == maxDays)
        {
            newDay = 1;
        }

        else 
        {
            newDay++;
        }

        std::cout << "Next date: " << "year - " << newYear << ", month - " << newMonth << ", day" << newDay;
    }

    else 
    {
        std::cout << "Wrong date!";
    }
}

void taskThird()
{
	srand(time(0));
	rand();

	int temperature;

	std::cout << "Enter temperature: ";
	std::cin >> temperature;

	if (temperature >= 40)
	{
		std::cout << "\nThere is boiling!";
	}

	else if (temperature < 40 && temperature >= 15)
	{
		std::cout << "\nThere is warm!";
	}

	else if (temperature < 15 && temperature >= 0)
	{
		std::cout << "There is cold!";
	}

	else
	{
		std::cout << "There is frozen!";
	}

	int windSpeed = rand() % (20 - 0 + 1) - 0;
	int tSea = rand() % (20 - 0 + 1) - 0; 
	int weather = rand() % (3 - 0 - 1) - 0;

	switch (weather)
	{
		case 0:
			std::cout << "\nThere is sun!";
			break;
		
		case 1:
			std::cout << "\nThere is clouds!";
			break;

		case 2:
			std::cout << "\nThere is rain!";
			break; 

		case 3:
			std::cout << "\nThere is thundstorm!";
			break;
	}
	
	std::cout << "\nWind speed: " << windSpeed << "m/s";
	std::cout << "\nTemperature of the sea: " << tSea << "C";
}

void taskFourth()
{
	int N;
	int M;
	int X;
	int Z;

	std::cout << "Enter count of chickens: ";
	std::cin >> N;
	
	std::cout << "Enter price for one chicken: ";
	std::cin >> M;

	std::cout << "Enter count of eggs for week: ";
	std::cin >> X;

	std::cout << "Enter price for 10 eggs: ";
	std::cin >> Z;

	int priceChickens = N * M;
	int moneyWeek = N * X * Z;

	std::cout << "Result: " << priceChickens / moneyWeek << " weeks";
}

int main()
{
	// taskFirst();
	// taskSecond();
	// taskThird();
	// taskFourth();
}