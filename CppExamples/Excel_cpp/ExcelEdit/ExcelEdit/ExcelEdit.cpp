// ExcelEdit.cpp : Edit excel spreadsheets
//

#include "libxl.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace libxl;
using namespace std;

class Result<typename T> {
	wstring m_name;
	T m_value;
public:
};

int main()
{
	Book* book = xlCreateXMLBook();
	int num_rows, num_columns;

	if (book->load(L"C:\\Data\\H_Temp_Data_Analysis\\H_Ver2r5_020216_drift.xlsx")) {
		cout << "Excel file loaded" << endl;
		Sheet *sheet = book->getSheet(0);
		if (sheet) {
			cout << "Number of rows = " << sheet->lastRow() << endl;
			num_rows = sheet->lastRow();
			cout << "Number of columns = " << sheet->lastCol() << endl;
			num_columns = sheet->lastCol();

			map<basic_string<wchar_t>, vector<double>> results;

			for (int i_row = 1; i_row < 7; i_row++) {
				// the first column is result name
				wstring result_name = sheet->readStr(i_row, 0);


				// read first value to determine format
				/*
				Format *f;
				auto result_value = sheet->readNum(i_row, 1, &f);
				switch (f->numFormat()) {
				case NUMFORMAT_NUMBER_D2:
					break;
				case NUMFORMAT_SCIENTIFIC_D2:
					break;
				}//end switch format
				*/
				auto result_value = sheet->readNum(i_row, 1);
				if (typeid(result_value).name() == typeid(double).name()) {
					cout << "double" << endl;
					// a vector will hold data per result
					vector<double> data;
					for (int i_column = 1; i_column < num_columns; i_column++) {
						data.push_back(sheet->readNum(i_row, i_column));
					}//end i_column
					cout << i_row << "th row read" << endl;
					// insert vector to the map
					results.insert(make_pair(result_name, data));
					cout << i_row << "th row inserted" << endl;
				}else if (typeid(result_value).name() == typeid(int).name()) {
					cout << "int" << endl;
					vector<int> data;
					for (int i_column = 1; i_column < num_columns; i_column++) {
						data.push_back(sheet->readNum(i_row, i_column));
					}//end i_column
					cout << i_row << "th row read" << endl;
					// insert vector to the map
					results.insert(make_pair(result_name, data));
					cout << i_row << "th row inserted" << endl;
				}
				/*
				cout << endl << "Vector size = " << data.size() << endl;
				for (double n : data)
					cout << n << " ";
				cout << endl;
				*/
			}//end i_row
			wstring key(L"I_VEEM1P0");
			//vector<double> first_row = results[key];
			for (auto n : results[key])
				cout << n << " ";
			cout << endl;

		}
		else {
			cout << "Couldn't read the first sheet" << endl;
		}

		book->release();
	}
	else {
		cout << "Excel file is not loaded" << endl;
		cout << book->errorMessage() << endl;
	}

    return 0;
}

