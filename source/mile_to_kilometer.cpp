# include < iostream >
# include < string >

double mile_to_kilometer(double mile)
{
	return 1.60934 * mile;
}
int main()
{
	std::cout << " Bitte geben Sie einen Meilenwert an: ";
	double mile;
	std::cin >> mile;
	std::cout <<  mile_to_kilometer(mile) << "\n";
	return 0;
}