/*
 
 11.1   struct SavingsAcct
        {
            string number;
            double balance;
            double interest
            double average;
        };
 
 11.2   SavingsAcct customer = {"ACZ421377-B12-7", 4512.59, 0.04, 4217.07};
 
 11.4   Product array[100];
 
 11.5   for (int x = 0; x < 100; x++) {
            array[x] = {"", 0, 0};
        }
 
 11.6   array[0].description = "Claw hammer";
        array[0].partNum = 547;
        array[0].cost = 8.29;
 
 11.7   for (int x = 0; x < 100; x++) {
            cout << "Description: " << array[x].description << endl;
            cout << "Part Numbber: " << array[x].partNum << endl;
            cout << "Part Cost: " << array[x].cost << endl;
        }
 
 11.8   struct Measurement
        {
            int miles;
            long meters;
        };
 
 11.9   struct Destination
        {
            string city;
            Measurement distance;
        };
        Destination location;
 
 11.10  location.city = "Tupelo";
        location.distance.miles = 375;
        location.distance.meters = 603375;
 
 11.11  void display(const Rectangle &r) {
            cout << r.length << endl;
            cout << r.width << endl;
        }
 
 11.12  void getInfo(Rectangle &r) {
            cout << "Enter length: ";
            cin >> r.length;
            cout << "Enter width: ";
            cin >> r.width;
        }
 
 11.13  Rectangle getInfo() {
            Rectangle temp;
            
            cout << "Enter length: ";
            cin >> temp.length;
            cout << "Enter width: ";
            cin >> temp.width;
            return temp;
        }
 
 11.14  void displayPtr(Rectangle *r);
 
 11.15  B
 
 11.16  union ThreeTypes
        {
            char letter;
            int whole;
            double real;
        }
 
 11.17  ThreeTypes array[50];
 
 11.18  for (int x = 0; x < 50; x++) {
            array.real = 2.37;
        }
 
 11.19  for (int x = 0; x < 50; x++) {
            array.letter = 'A';
        }
 
 11.20  for (int x = 0; x < 50; x++) {
            array.whole = 10;
        )
 
 11.21  ROSE = 0; DAISY = 1; PETUNIA = 2
 
 11.22  0 7 8
 
 11.23  anonymous
 
 11.24  Z is not greater than X.
 
 11.25  c = static_cast<Color>(0);
 
 11.26  c = static_cast<Color>(c + 1);
 
 */
