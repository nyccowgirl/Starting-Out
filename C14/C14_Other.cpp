/*
 
 14.1   Instance - class member for a specific class object
        Static - only one version of the class member regardless of instances, shared by all
        instances
 
 14.2   Static member variables are defined outside class declaration
 
 14.3   Static member  variables come into existence in memory before instances
 
 14.4   Static member functions can not access any nonstatic member data in the class
 
 14.5   Static member functions exist before any instances so can be used to create
        specialized setup routines for class objects
 
 14.6   Friend function is treated as class member but is not a member
 
 14.7   Friend class Y would have friend key word in class X declaration
 
 14.8   Memberwise assignment is assigning one object's data to another object
 
 14.9   Memberwise assignment can be assigned or initialized with another object
 
 14.10  Memberwise assignment shouldn't be used when object contains a pointer to
        dynamically allocate memory
 
 14.11  Copy constructor is called when object is initialized with another object's data
 
 14.12  Compiler knows that member function is copy constructor because it  has a reference
        parameter of  the same class type
 
 14.13  Class's default copy constructor performs memberwise assignment
 
 14.14  void operator=(const Pet &right);
 
 14.15  dog.operator=(cat);
 
 14.16  void would not allow multiple assignments or other expressions
 
 14.17  this pointer points to instance of the class making the function call
 
 14.18  this pointer is automatically passed to all nonstatic member functions
 
 14.19  cat is calling operator + and tiger and cat are being passed as arguments into
        + function
 
 14.20  dummy parameter tells compiler that it is postfix
 
 14.21  true or false (boolean values)
 
 14.22  ability to write the objects as other built in data types
 
 14.23  send directly to cout and screen output
 
 14.24  receive in from cin directly to class
 
 14.25  friend function
 
 14.26  list1[26] = 0;
 
 14.27  right of operator
 
 14.28  so that they may be used in expressions
 
 14.29  dummy parameter
 
 14.31  data is properly converted seamlessly into programming environment
 
 14.32  they return value of the data type they are converting to
 
 14.33  BlackBox::operator int()
 
 14.34  Big has a Small with Big being the object aggregation.
 
 */
