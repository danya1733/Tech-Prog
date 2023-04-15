// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;


pair<size_t, size_t> max_element(const vector<vector<int>>&matrix) {
	size_t rows = matrix.size(), cols = matrix[0].size();
	int maxElem=matrix[0][0];
	size_t maxRow = 0, maxCol = 0;
	for (size_t i = 0; i < rows; i++) {
		for (size_t j = 0; j < cols; j++) {
			if ( maxElem < matrix[i][j] ) {
				maxElem = matrix[i][j];
				maxRow = i;
				maxCol = j;
			}
		}
	}

	return make_pair(maxRow, maxCol);
}
;


int main()
{
	int rows = 0, cols = 0;
	cin >> rows >> cols;
	vector<vector<int>> matrix(rows, vector<int>(cols));

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
	cout << endl;

	pair<size_t, size_t> maxIndex = max_element(matrix);
	cout << maxIndex.first<<" "<<maxIndex.second;



}





// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
