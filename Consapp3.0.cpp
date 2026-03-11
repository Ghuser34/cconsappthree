#include <iostream>
#include "C:\Users\ambru\source\repos\cconsapp3\std_lib_facilities.h"
int main()
{

	// "hw"
	cout << "reflexive coequalizer\n"
		"coreflexive equalizer\n";


	// cin
	cout << "please enter the favorite character of oneself\n";
	string fav_char;
	double rrn1;
	cin >> fav_char >> rrn1;
	cout << "echo f_c(and real num):" << fav_char << rrn1 << ".\n";
	double rrn = -723.00225; /*last 2 digits won't show,
					 probably because 3 is the max in this type*/

	cout << "observing this real number gives a rather "
		"positive feeling to myself : " << rrn << ".\n";


	// adding
	double rrn12 = -452.163;
	double rrn13 = rrn12 + 659;
	cout << rrn13;
	string rcs = "hom";
	string rcs1 = rcs + "functor";
	cout << rcs1;


	// basic arithmetic
	cout << "Please enter a floating-point number:";
	double nN;
	cin >> nN;
	cout << "nN ==" << nN
		<< "\n half of n == " << nN / 2
		<< "\n square root of n == " << sqrt(nN);


	// word count
	{
		cout << "Enter two words\n";
		string onest;
		string twond;
		cin >> onest >> twond;
		if (onest == twond)
			cout << "those 2 words are the same\n";
		if (onest < twond)
			cout << "1st is alphabetically before 2nd\n";
		if (onest > twond)
			cout << "1st is alphabetically after 2nd\n";
		string previous = "";
		string current;
		while (cin >> current) {
			if (previous == current)
				cout << "repeated word is the following:" << current << '\n';
			previous = current;
		}
	}


	// alphabetical order definer
	{
		cout << "Enter two words\n";
		string onest;
		string twond;
		cin >> onest >> twond;
		if (onest == twond)
			cout << "those 2 words are the same\n";
		if (onest < twond)
			cout << "1st is alphabetically before 2nd\n";
		if (onest > twond)
			cout << "1st is alphabetically after 2nd\n";
	}

	// rword detector
	{
		int word_onum = 0;
		string previous = "";
		string current;
		while (cin >> current) {
			++word_onum;
			if (previous == current)
				cout << "repeated word is the following:" << current << '\n'
				<< "the corresponding natural num of the rword:" << word_onum << '\n';
			previous = current;
		}
	}

	// type conversion
	char c0 = 'y';
	int i0 = c0;
	int i1 = 'y';
	char c1 = c0;
	cout << c0 << i0 << c1;
	bool fb = false;
	char fbc = fb;
	cout << fb << fbc;


	// neg detector (also zero)
	double ndd0;
	while (cin >> ndd0) {
		if (ndd0 < 0)
			cout << "the fpn is negative";
		else (ndd0 == 0);
		cout << "the fpn is zero";
	}


	// expressions
	constexpr double e_ = 2.7182818284590452353602874713527;
	// e_ = 2.718281828459045235360287471352!4!; this would not work because e_ is a constant expr
	//cout << ++e_; // same as above
	return 0;

}