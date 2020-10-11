/*
 
 9.1    cout << &count;
 
 9.2    float *fltPtr;
 
 9.3    * can be used as multiplication operator, in definition of pointer variable, and
        indirection operator
 
 9.6    12040
 
 9.7    A. valid
        B. valid
        C. invalid - can't divide a pointer
        D. invalid - can't multiply a pointer
        E. valid
 
 9.8    A. valid
        B. valid
        C. invalid - integer pointer can't point to float variable
        D. valid
        E. invalid - pointer is pointing to variable that hasn't been defined
 
 9.9    A. False
        B. False
        C. True
        D. False
 
 9.10   makeNegative(val);
 
 9.12   A
 
 9.13   ip = new int;
        delete ip;
        ip = nullptr;
 
 9.14   ip = new int[500];
        delete [] ip;
        ip = nullptr;
 
 9.15   pointer that points to nothing
 
 9.16   int *testFunc(int array[]) {
            cout << "Enter a number: ";
            cin >> array[0];
            cout << "Enter another number: ";
            cin >> array[1];
            return array;
        }
 
 9.17   int *testFunction() {
            int array[2];
            cout << "Enter a number: ";
            cin >> array[0];
            cout << "Enter another number: ";
            cin >> array[1];
            return array;
        }
 
 */
