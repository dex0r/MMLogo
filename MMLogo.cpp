// MMLogo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

class MentorMateLogo{
public:

	MentorMateLogo(const int Thickness){
		m_nThickness = Thickness;
	}

	void setThickness(const int Thickness){
		m_nThickness = Thickness;
	}

	int getThickness()const{
		return m_nThickness;
	}

	void displayLogo(){
		if (isValidThickness()){
			int n = m_nThickness;
			cout << "N = "; cout << n << endl;
			for (int i = 0; i < n + 1; i++){
				for (int j = 0; j < 2; j++){
					for (int j = 0; j < n - i; j++){
						cout << "-";
					}
					if (i == 0){
						for (int j = 0; j < n - (n / 2); j++){
							cout << "*";
						}
					}
					else if (i < (n / 2)){
						for (int j = 0; j < i + (n / 2) + 1; j++){
							cout << "*";
						}
					}
					else{
						for (int j = 0; j < n; j++){
							cout << "*";
						}
					}

					for (int j = 0; j < i - (n / 2); j++){
						cout << "-";
					}

					// ----------------------------------- 

					for (int j = 0; j < i - (n / 2) - 1; j++){
						cout << "-";
					}
					if (i == 0){
						for (int j = 0; j < n - (n / 2) - 1; j++){
							cout << "*";
						}
					}
					else if (i < (n / 2)){
						for (int j = 0; j < i + (n / 2); j++){
							cout << "*";
						}
					}
					else if (i >(n / 2)){
						for (int j = 0; j < (n / 2) - i + n; j++){
							cout << "*";
						}
					}
					else{
						for (int j = 0; j < n - 1; j++){
							cout << "*";
						}
					}
					for (int j = 0; j < (n / 2) - i; j++){
						cout << "-";
					}

					// --------------------------------------

					if (i <= (n / 2)){
						cout << "-";
					}
					else{
						cout << "*";
					}


					// ----------------------------------------

					for (int j = 0; j < (n / 2) - i; j++){
						cout << "-";
					}
					if (i == 0){
						for (int j = 0; j < n - (n / 2) - 1; j++){
							cout << "*";
						}
					}
					else if (i < (n / 2)){
						for (int j = 0; j < i + (n / 2); j++){
							cout << "*";
						}
					}
					else if (i>(n / 2) + 1){
						for (int j = 0; j < (n / 2) - i + n; j++){
							cout << "*";
						}
					}
					else{
						for (int j = 0; j < n - 1; j++){
							cout << "*";
						}
					}
					for (int j = 0; j < i - (n / 2) - 1; j++){
						cout << "-";
					}

					// -----------------------------------------

					for (int j = 0; j < i - (n / 2); j++){
						cout << "-";
					}

					if (i == 0){
						for (int j = 0; j < n - (n / 2); j++){
							cout << "*";
						}
					}
					else if (i < (n / 2)){
						for (int j = 0; j < i + n - (n / 2); j++){
							cout << "*";
						}
					}
					else{
						for (int j = 0; j < n; j++){
							cout << "*";
						}
					}

					for (int j = 0; j < n - i; j++){
						cout << "-";
					}
				}
				cout << endl;

			}
		}
		else
		{
			cout << "You entered thickness = " + to_string(m_nThickness) + " which is not valid. You must enter odd number greater than 2 and less than 10 000!" << endl;
		}
	}

private:
	int m_nThickness = 0;

	bool isValidThickness(){
		return m_nThickness % 2 != 0 && m_nThickness > 2 && m_nThickness < 10000;
	}

};

int _tmain(int argc, _TCHAR* argv[])
{
	MentorMateLogo aMentorMate(3);

	aMentorMate.displayLogo();

	aMentorMate.setThickness(5);

	cout << endl;

	aMentorMate.displayLogo();

	cout << endl;

	aMentorMate.setThickness(7);

	aMentorMate.displayLogo();

	cout << endl;

	aMentorMate.setThickness(2);

	aMentorMate.displayLogo();

	system("PAUSE");
	return 0;
}
