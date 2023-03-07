#include <iostream>
#include <random>

int main()
{
	std::cout << "\nGuess The Number between 1-20!!!\n";
	std::cout << "You have got only 3 chances!\n";

	std::random_device device;
	std::default_random_engine engine(device());
	std::uniform_int_distribution<int> dist(1, 20);
	int num = 1 + dist(engine);
	int x;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Guess the Number : ";
		std::cin >> x;

		if (i == 2 && x != num)
		{
			std::cout << "You Lost!!!\n";
			std::cout << "It was " << num << "\n\n";
			break;
		}

		if (x > num)
		{
			std::cout << "Too high!\n";
			continue;
		}

		if (x < num)
		{
			std::cout << "Too low! \n";
			continue;
		}

		if (x == num)
		{
			std::cout << "Correct!!!! \n\n";
			break;
		}
	}
}
