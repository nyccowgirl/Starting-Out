/*
 
 7.1    int empNums[100];
        float payRates[25];
        long miles[14];
        string cityName[26];
        double lightYears[1000];
 
 7.2    array size declarator cannot be less than 1
        array size declarator has to be integer expression
        array size declarator cannot be blank unless it includes an initialization list
        named constant in array size declarator needs to be defined as constant integer
 
 7.3    0, 1, 2, 3
 
 7.4    size declarator is number of elements to store and subscript is specific element
 
 7.5    array bounds checking ensures no assignment is made outside of the elements defined
in size declarator; c++ does not perform it
 
 7.6    1
        2
        3
        4
        5
 
 7.8    int ages[10] = {5, 7, 9, 14, 15, 17, 18, 19, 21, 23};
        float temps[7] = {14.7, 16.3, 18.43, 21.09, 17.9, 18.76, 26.7};
        chars alpha[8] = {'J', 'B', 'L', 'A', '*', '$', 'H', 'M'};
 
 7.9    valid
        invalid - extra elements out of bounds
        valid
        invalid - impartial array cannot have blanks initialized in the middle
        valid
        invalid - undefined size declarator has to have initialization list
 
 7.10   10
        3
        6
        14
 
 7.11   0
 
 7.14   No, array cannot be assigned an array
 
 7.15   Array name passed to a function is the memory location of the array
 
 7.16   Arrays are passed by reference to functions
 
 7.19   int grades[30][10];
 
 7.20   24 elements
 
 7.21   sales[0][0] = 56893.12;
 
 7.22   cout << sales[6][4];
 
 7.23   settings[3][5] = {{12, 24, 32, 21, 42}, {14, 67, 87, 65, 90}, {19, 1, 24, 12, 8}};
 
 7.24   2   3   0   0   0
        7   9   2   0   0
        1   0   0   0   0
 
 7.25   void displayArray7(const int arr[][7], int rows) {
            for (int x = 0; x < rows; x++) {
                for (int y = 0; y < 7; y++) {
                    cout << setw(4) << arr[x][y] << " ";
                }
            cout << endl;
            }
        }
 
 7.26   storage[50][10][25]
 
 7.27   #include <vector>
 
 7.28   vector<int> frogs;
 
 7.29   vector<float> lizard(20);
 
 7.30   vector<char> toads(100, 'Z');
 
 7.31   gators.push_back(27);
 
 7.32   snakes[3] = 12.897;
 
 */
