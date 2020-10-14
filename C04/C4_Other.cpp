/*

 4.1    x = 5, y = 6, z = 8
        x == 5          T
        7 <= (x + 2)    T
        z < 4           F
        (2 + x) != y    T
        z != 4          T
        x >= 9          F
        x <= (y * 2)    T
 
 4.2    x <= y  !=  y > x
        x != y  !=  y >= x
        x >= y  ==  y <= x
 
 4.3    x > y, x < z ==> y < z
        x >= y, z == x !=> x == y
        x != y, x != z !=> z != y
 
 4.5    if (x == 20) {
            y = 0;
        }
 
 4.6    if (price > 500) {
            discountRate = 0.2;
        }
 
 4.7    if (hours > 40) {
            payRate *= 1.5;
        }
 
 4.8    TRUE
 
 4.9    FALSE
 
 4.10   if (sales > 50000) {
            comissionRate = 0.25;
            bonus = 250;
        }
 
 4.11   if (interestRate > .07) {
            cout << "This account earns a $10 bonus.\n";
            balance += 10.0;
        }
 
 4.12   FALSE
 
 4.13   if (y == 100) {
            x = 1;
        } else {
            x = 0;
        }
 
 4.14   if (sales < 50000.00) {
            commissionRate = 0.10;
        } else {
            commissionRate = 0.20;
        }
 
 4.18   true && false       FALSE
        true && true        TRUE
        false && true       FALSE
        false && false      FALSE
        true || false       TRUE
        true || true        TRUE
        false || true       TRUE
        false || false      FALSE
        !true               FALSE
        !false              TRUE
 
 4.19   a = 2, b = 4, c = 6
        a == 4 || b > 2     TRUE
        6 <= c && a > 3     FALSE
        1 != b && c != 3    TRUE
        a >= -1 || a <= b   TRUE
        !(a > 2)            TRUE
 
 4.20   if (speed >= 0 && speed <= 200) {
            cout << "The number is valid" << endl;
        }
 
 4.21   if (speed < 0 || speed > 200) {
            cout << "The number is not valid" << endl;
 
 4.22   'a' < 'z'           TRUE
        'a' == 'A'          FALSE
        '5' < '7'           TRUE
        'a' < 'A'           FALSE
        '1' == 1            FALSE
        '1' == 49           TRUE
 
 4.23   "Bill" == "BILL"            FALSE
        "Bill" < "BILL"             FALSE
        "Bill" < "Bob"              FALSE
        "189" > "23"                TRUE
        "189" > "Bill"              FALSE
        "Mary" < "MaryEllen"        TRUE
        "MaryEllen" < "Mary Ellen"  FALSE
 
 4.24   z = x > y ? 1 : 20;
        population = temp > 45 ? base * 10 : base * 2;
        wages = hours > 40 ? wages *= 1.5 : wages *= 1;
        cout << (result >= 0 ? "The result is positive\n" : "The result is negative\n";
 
 4.25   if (k > 90) {
            j = 57;
        } else {
            j = 12;
        }
 
        if (x >= 10) {
            factor = y * 22;
        } else {
            factor = y * 35;
        }
 
        if (count = 1) {
            count = sales;
        } else {
            count *= sales;
        }
        total += count
 
        if ((num % 2) == 0) {
            cout << "Even\n";
        } else {
            cout << "Odd\n";
 
 4.27   switch expression has to be an integer/character expression
 
 4.28   case expression cannot be operational expression
 
 */
