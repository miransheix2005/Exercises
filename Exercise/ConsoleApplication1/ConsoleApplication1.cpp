#include <algorithm>
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <cstring>
#include <fstream>
using namespace std::chrono_literals;
using namespace std::this_thread;
using namespace std;

struct MyStudent
{
    string name;
    string lastName;
    float ave;
};

struct student
{
    char name[10];
    char field[10];
    float avr;
};

void bubbleSort(student students[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (students[j].avr > students[j + 1].avr)
            {
                student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void Program1()
{
    cout << "\033[32m Running program 1 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me a number then i show you that is palinfrome or not>>" << endl;
    sleep_for(3s);

    int num;
    cout << "Enter n: ";
    cin >> num;

    int original = num;
    int reversed = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if (original == reversed)
    {
        cout << original << " is palindrom" << endl;
    }
    else
    {
        cout << original << " is not palindrom" << endl;
    }
}

void Program2()
{
    cout << "\033[32m Running program 2 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<I show the numbers between 1000 to 10000 that have no 5 and 0 digits >>" << endl;
    sleep_for(3s);

    int i = 1000;
    while (i < 10000)
    {
        int num = i;
        int hasForbiddenDigit = 0;

        while (num > 0)
        {
            int digit = num % 10;
            if (digit == 0 || digit == 5)
            {
                hasForbiddenDigit++;
            }
            num /= 10;
        }


        if (hasForbiddenDigit == 0)
        {
            cout << i << " , ";;
        }
        i++;
    }
}

void Program3()
{
    cout << "\033[32m Running program 3 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me a range number then i show you the fi chains below that" << endl;
    sleep_for(3s);
    int rangeNumber;
    int firstNumber = 0;
    int secondNumber = 1;
    int thirdNumber;

    cout << "Enter the rangeNumber:";
    cin >> rangeNumber;

    while ((firstNumber + secondNumber) < rangeNumber)
    {
        thirdNumber = firstNumber + secondNumber;

        cout << thirdNumber << endl;

        firstNumber = secondNumber;
        secondNumber = thirdNumber;
    }
}

void Program4()
{
    cout << "\033[32m Running program 4 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<I calculate numbers that are like that 153 = 1^3 + 5^3 + 3^3" << endl;
    sleep_for(3s);
    int n = 100;
    int sum = 0;

    while (n < 1000)
    {
        int currentN = n;
        int digit;
        while (currentN > 0)
        {
            digit = currentN % 10;
            sum += pow(digit, 3);
            currentN /= 10;
        }

        if (sum == n)
        {
            cout << n << endl;
        }
        n += 1;
        sum = 0;
    }
}

void Program5()
{
    cout << "\033[32m Running program 5 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me a positive number then i print the number that has more odd digits than its even digits" << endl;
    sleep_for(3s);
    int n;

    cout << "Enter n: ";
    int evenCounter = 0;
    int oddCounter = 0;
    cin >> n;

    int currentN = n;

    while (currentN > 0)
    {
        int digit = currentN % 10;
        if (digit % 2 == 0)
        {
            evenCounter++;
        }
        else
        {
            oddCounter++;
        }

        currentN /= 10;
    }

    if (evenCounter < oddCounter)
    {
        cout << n << " has more odd digits than even digits!" << endl;
    }
}

void Program6()
{
    cout << "\033[32m Running program 6 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me a character then i print the ASCII code" << endl;
    sleep_for(3s);

    char myChar = 1;
    while (myChar != 113)
    {
        cout << "Enter a character : ";
        cin >> myChar;

        cout << "The ASCII code of <" << myChar << "> character is : " << int(myChar) << " between " << char(myChar - 1) << " and " << char(myChar + 1) << endl;
    }
    return;
    cin.get();
    cin.ignore();
}

void Program7()
{
    cout << "\033[32m Running program 7 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me an amount of money then i organize it by 500,250,100,50,10,1 coins" << endl;
    sleep_for(3s);
    int myMoney;
    int calibration500, calibration250, calibration100, calibration50, calibration10, calibration1;

    cout << "Enter your money : ";
    cin >> myMoney;


    calibration500 = myMoney / 500;
    myMoney %= 500;
    calibration250 = myMoney / 250;
    myMoney %= 250;
    calibration100 = myMoney / 100;
    myMoney %= 100;
    calibration50 = myMoney / 50;
    myMoney %= 50;
    calibration10 = myMoney / 10;
    myMoney %= 10;
    calibration1 = myMoney / 1;
    myMoney %= 1;

    cout << "500 coin(s): " << calibration500 << endl;
    cout << "250 coin(s): " << calibration250 << endl;
    cout << "100 coin(s): " << calibration100 << endl;
    cout << "50 coin(s): " << calibration50 << endl;
    cout << "10 coin(s): " << calibration10 << endl;
    cout << "1 coin(s): " << calibration1 << endl;
}

void Program8()
{
    cout << "\033[32m Running program 8 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me a base(k) and a number(n)" << endl;
    sleep_for(3s);
    int n, k;
    cout << "Enter the number of n: ";
    cin >> n;
    cout << "Enter the base k: ";
    cin >> k;

    int maxOddCount = -1;
    int numberWithMaxOddDigits;

    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        int oddCount = 0;
        int tempNum = num;

        while (tempNum > 0)
        {
            int digit = tempNum % k;
            if (digit % 2 != 0)
            {
                oddCount++;
            }
            tempNum /= k;
        }


        if (oddCount > maxOddCount)
        {
            maxOddCount = oddCount;
            numberWithMaxOddDigits = num;
        }
    }

    cout << "The number with the most odd digits in base " << k << " is: " << numberWithMaxOddDigits << endl;
}

void Program9()
{
    cout << "\033[32m Running program 9 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<I show you the numbers between 100 to 10000 that have this pattern 145 = 1! + 4! + 5!" << endl;
    sleep_for(3s);

    int n = 100;

    for (size_t i = 100; i < 1000000; i++)
    {
        int sum = 0;
        n = i;
        while (n > 0)
        {
            int digit = n % 10;
            int fact = 1;
            while (digit > 1)
            {
                fact *= digit;
                digit--;
            }
            n /= 10;
            sum += fact;
        }

        if (sum == i)
        {
            cout << i << endl;
        }
    }
}

void Program10()
{
    cout << "\033[32m Running program 10 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<I show you three digits triangle numbers that have similar digits like 666  " << endl;
    sleep_for(3s);

    int n = 1;

    while (n < 100)
    {
        int sum = n * (n + 1) / 2;
        cout << "The value of n is: " << n << " and the sum is: " << sum << endl;
        if (sum >= 100 && sum < 1000 && sum % 111 == 0)
        {
            cout << "The value of n is: " << n << " and the sum is: " << sum << endl;
        }

        n++;
    }
}

void Program11()
{
    cout << "\033[32m Running program 11 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<I show you three digits numbers that have divisors by 2 and 3" << endl;
    sleep_for(3s);


    for (int i = 100; i < 1000; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            cout << i << endl;
        }
    }
}

void Program12()
{
    cout << "\033[32m Running program 12 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me a positive number then i show the prime numbers below that " << endl;
    sleep_for(3s);
    int n;
    cout << "Enter a positive value: ";
    cin >> n;

    if (n > 0)
    {
        for (int i = 2; i < n; i++)
        {
            int count = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
            if (count <= 2)
            {
                cout << i << ": is prime" << endl;
            }
        }
    }
}

void Program13()
{
    cout << "\033[32m Running program 13 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me a number then i show you the count of divisors and summary of them" << endl;
    sleep_for(3s);
    int n;
    int sum = 0;
    int count = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;

            count++;
        }
    }

    cout << n << " has : " << count << " factors and sum is : " << sum << endl;
}

void Program14()
{
    cout << "\033[32m Running program 14 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me two numbers then i show you the biggest divisor" << endl;
    sleep_for(3s);
    int n1;
    int n2;
    int previousFactor = 0;
    int currentFactor = 0;
    int maxFactor;

    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;

    for (int i = 1; i <= n1; i++)
    {
        if (n1 >= i || n2 >= i)
        {
            previousFactor = currentFactor;
            int r1 = n1 % i;
            int r2 = n2 % i;
            if (r1 == r2)
            {
                currentFactor = i;
            }

            if (previousFactor < currentFactor)
            {
                maxFactor = currentFactor;
            }
            else
            {
                maxFactor = previousFactor;
            }
        }
    }

    cout << "The biggest similar factor of " << n1 << " and " << n2 << " is " << maxFactor << endl;
}

void Program15()
{
    cout << "\033[32m Running program 15 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<I show the complte numbers between 1 to 10000" << endl;
    sleep_for(3s);
    for (int i = 1; i <= 10000; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            cout << i << " is a complete number" << endl;
        }
    }
}

void Program16()
{
    cout << "\033[32m Running program 16 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<I show you the answers of these 4 equations" << endl;
    sleep_for(3s);

    int n;
    int x;
    float sum1 = 0;
    float sum2 = 0;
    float sum3 = 0;
    float sum4 = 0;
    float chain = -1;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;

    for (int i = 1; i <= n; i++)
    {
        sum1 += 1.0 / i;
    }
    cout << "The equation 1 is :" << sum1 << endl;
    for (int i = 1; i <= n; i++)
    {
        chain *= -1;
        sum2 += 1.0 / i * chain;
    }
    cout << "The equation 2 is :" << sum2 << endl;
    for (int i = 1; i <= 99; i += 2)
    {
        sum3 += ((i) * (i + 1.0)) / ((i) + (i + 1.0));
    }
    cout << "The equation 3 is :" << sum3 << endl;
    for (int i = 1; i <= n; i++)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }

        sum4 += pow(x, i) / fact;
    }
    cout << "The equation 4 is :" << sum4 << endl;
}

void Program17()
{
    cout << "\033[32m Running program 17 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me the count of the rows then i show you a beautiful pattern!" << endl;
    sleep_for(3s);
    int rows = 6;
    string star = "*";
    string sharp = "#";


    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
    cout << "-------------------" << endl;
    for (int i = rows; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = i; j >= 1; j--)
            {
                cout << star << " ";
            }
        }
        else
        {
            for (int j = i; j >= 1; j--)
            {
                cout << sharp << " ";
            }
        }

        cout << endl;
    }
}

void Program18()
{
    cout << "\033[32m Running program 18 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me a range number then i show you the fi chains below that" << endl;
    sleep_for(3s);
    int rangeNumber;
    int firstNumber = 0;
    int secondNumber = 1;


    cout << "Enter the rangeNumber:";
    cin >> rangeNumber;

    for (int thirdNumber = 0; thirdNumber < rangeNumber; thirdNumber = firstNumber + secondNumber)
    {
        cout << thirdNumber << endl;
        firstNumber = secondNumber;
        secondNumber = thirdNumber;
    }
}

void Program19()
{
    cout << "\033[32m Running program 19 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me the count of the rows then i show you a beautiful pattern!" << endl;
    sleep_for(3s);

    int rows;
    cout << "Enter number of rows:";
    cin >> rows;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i * 2; j += 2)
        {
            cout << j << " ";
        }


        cout << endl;
    }
}

//------ARRAY-------

void Program20()
{
    cout << "\033[32m Running program 20 ... \033[0m" << endl;
    sleep_for(3s);
    cout << "<<Give me some values(0,9) so i show you the count of each pair" << endl;
    sleep_for(3s);

    int numbers[10];
    cout << "Array Values: ";
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter n:";
        cin >> numbers[i];
    }
    cout << endl;
    int counter = 0, t;
    for (int i = 0; i < 10; i += counter)
    {
        counter = 0;
        t = numbers[i];
        for (int j = 0; j < 10; j++)
        {
            if (numbers[j] == t)
            {
                counter++;
            }
        }


        cout << numbers[i] << " occured " << counter << " times" << endl;
    }
}

void Program21()
{
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    int sameIndexCounter = 0;
    int array1[100];
    int array2[100];

    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter " << i << "th index of array1: ";
        cin >> array1[i];
    }
    cout << "--------------" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter " << i << "th index of array2: ";
        cin >> array2[i];
    }

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            if (array1[i] == array2[j])
            {
                sameIndexCounter++;
            }
        }
    }

    cout << "These two array have " << sameIndexCounter << " same values" << endl;
}

void Program22()
{
    int arraySize;
    cout << "enter the size of the array: ";
    cin >> arraySize;
    int matrix[100][100];
    int matrixT[100][100];

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            cout << "Enter " << i << "th index of array: ";
            cin >> matrix[i][j];
            matrixT[i][j] = matrix[j][i];
        }
    }

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            matrixT[i][j] = matrix[j][i];

            if (matrixT[i][j] != matrix[i][j])
            {
                cout << "it is not symmetric" << endl;
                return;
            }
        }
    }

    cout << "it is symmetric" << endl;
}

void Program23()
{
    int arraySize;
    cout << "enter the size of the array";
    cin >> arraySize;
    int matrix[100][100];
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            cout << "Enter " << i << "th index of array1: ";
            cin >> matrix[i][j];
        }
    }

    int targetSum = 0;
    for (int j = 0; j < arraySize; j++)
    {
        targetSum += matrix[0][j];
    }

    int mainDiagnolSum = 0, sideDiagnolSum = 0;

    for (int i = 0; i < arraySize; i++)
    {
        int rowSum = 0, colSum = 0;

        for (int j = 0; j < arraySize; j++)
        {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];

            if (i == j)
            {
                mainDiagnolSum += matrix[i][j];
            }
            if (i + j == arraySize - 1)
            {
                sideDiagnolSum += matrix[i][j];
            }
        }
        if (rowSum != targetSum || colSum != targetSum)
        {
            cout << "The matrix is NOT a magic square" << endl;
            return;
        }
    }
    if (mainDiagnolSum != targetSum || sideDiagnolSum != targetSum)
    {
        cout << "The matrix is NOT a magic square" << endl;
        return;
    }

    cout << "The matrix is a magic square" << endl;
}

void Program24()
{
    int array[] = {9, 14, 6, 8, 28, 3, 1};

    for (int i = (7 - 1); i >= 0; i--)
    {
        for (int j = 1; j < 7; j++)
        {
            if (array[j - 1] > array[j])
            {
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "normal form is : ";
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "reversed form is : ";
    for (int i = 7 - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void Program25()
{
    string myString;
    cout << "Enter a pet name: ";
    cin.ignore();
    getline(cin, myString);
    string tempString;
    tempString = myString;
    for (int i = 0; i < myString.length(); i++)
    {
        if (i == 0 || tempString[i - 1] == ' ')
        {
            tempString[i] = toupper(myString[i]);
        }
    }
    cout << "My name is " + tempString << endl;
}

void Program26()
{
    string myString1;
    string myString2;
    cout << "Enter your string1: ";
    cin >> myString1;
    cout << "Enter your string2: ";
    cin >> myString2;

    string combinedString;
    int maxLength = max(myString1.length(), myString2.length());

    for (int i = 0; i < maxLength; i++)
    {
        if (i < myString1.length())
        {
            combinedString += myString1[i];
        }
        if (i < myString2.length())
        {
            combinedString += myString2[i];
        }
    }

    cout << "Combined string: " << combinedString << endl;
}

void Program27()
{
    string str1, str2;
    cout << "string 1 : ";
    cin >> str1;
    cout << "string 2 : ";
    cin >> str2;

    string combinedString = str1 + str2;
    int charCount[26] = {0};

    for (char c : combinedString)
    {
        if (isalpha(c))
        {
            charCount[tolower(c) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (charCount[i] > 0)
        {
            cout << char(i + 'a') << " : " << charCount[i] << endl;
        }
    }
}

void Program28()
{
    const int numberOfStudents = 3;
    student students[numberOfStudents];

    cout << "Enter details for 10 students (name, field, average):" << endl;
    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << "Student " << i + 1 << " Name: ";
        cin >> students[i].name;
        cout << "Student " << i + 1 << " Field: ";
        cin >> students[i].field;
        cout << "Student " << i + 1 << " Average: ";
        cin >> students[i].avr;
    }

    bubbleSort(students, numberOfStudents);

    reverse(begin(students), end(students));

    cout << "Students sorted by average grades:" << endl;
    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << students[i].name << " (" << students[i].avr << ")" << endl;
    }
}

void Program29()
{
    int sum = 0;
    string myString;
    cout << "Enter string: ";
    cin.ignore();
    getline(cin, myString);

    string currentNumber = "";

    for (char c : myString)
    {
        if (isdigit(c))
        {
            currentNumber += c;
        }
        else
        {
            if (!currentNumber.empty())
            {
                sum += stoi(currentNumber);
                currentNumber = "";
            }
        }
    }

    if (!currentNumber.empty())
    {
        sum += stoi(currentNumber);
    }

    cout << sum << endl;
}

void Program30()
{
    MyStudent students[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Last Name: ";
        cin >> students[i].lastName;
        cout << "Average Grade: ";
        cin >> students[i].ave;
        cout << endl;
    }

    ofstream outFile("students.txt");
    for (int i = 0; i < 10; i++) {
        outFile << students[i].name << " "
                << students[i].lastName << " "
                << students[i].ave << endl;
    }
    outFile.close();


    ifstream inFile("students.txt");
    MyStudent readStudents[10];
    for (int i = 0; i < 10; i++) {
        inFile >> readStudents[i].name >> readStudents[i].lastName >> readStudents[i].ave;
    }
    inFile.close();


    MyStudent minStudent = readStudents[0], maxStudent = readStudents[0];
    for (int i = 1; i < 10; i++) {
        if (readStudents[i].ave < minStudent.ave) minStudent = readStudents[i];
        if (readStudents[i].ave > maxStudent.ave) maxStudent = readStudents[i];
    }

    cout << "Student with the highest average grade: " << maxStudent.name << " " << maxStudent.lastName << " with grade " << maxStudent.ave << endl;
    cout << "Student with the lowest average grade: " << minStudent.name << " " << minStudent.lastName << " with grade " << minStudent.ave << endl;

}

void Program31() {

    ifstream inFile1("file1.txt");
    ifstream inFile2("file2.txt");
    ofstream outFile("file3.txt");

    int numbers[100];
    int count = 0;
    int num;
    while (inFile1 >> num && count < 100) {
        numbers[count++] = num;
    }
    while (inFile2 >> num && count < 100) {
        numbers[count++] = num;
    }
    for (int i = count-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (numbers[j] > numbers[j + 1]) {

                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        outFile << numbers[i] << endl;
    }

    inFile1.close();
    inFile2.close();
    outFile.close();
}

void main()
{
    int programCode;
    while (true)
    {
        cout << "\033[34m Which program do you want to run (1,20) \033[0m :";
        cin >> programCode;

        if (programCode > 35 || programCode < 1)
        {
            cout << "ERROR : Invalid input, enter a value between(1,20)" << endl;
            cout << endl;
            continue;
        }

        switch (programCode)
        {
        case 1:
            Program1();
            break;
        case 2:
            Program2();
            break;
        case 3:
            Program3();
            break;
        case 4:
            Program4();
            break;
        case 5:
            Program5();
            break;
        case 6:
            Program6();
            break;
        case 7:
            Program7();
            break;
        case 8:
            Program8();
            break;
        case 9:
            Program9();
            break;
        case 10:
            Program10();
            break;
        case 11:
            Program11();
            break;
        case 12:
            Program12();
            break;
        case 13:
            Program13();
            break;
        case 14:
            Program14();
            break;
        case 15:
            Program15();
            break;
        case 16:
            Program16();
            break;
        case 17:
            Program17();
            break;
        case 18:
            Program18();
            break;
        case 19:
            Program19();
            break;
        case 20:
            Program20();
            break;
        case 21:
            Program21();
            break;
        case 22:
            Program22();
            break;
        case 23:
            Program23();
            break;
        case 24:
            Program24();
            break;
        case 25:
            Program25();
            break;
        case 26:
            Program26();
            break;
        case 27:
            Program27();
            break;
        case 28:
            Program28();
            break;
        case 29:
            Program29();
            break;
        case 30:
            Program30();
            break;
        case 31:
            Program31();
            break;
        default:
            break;
        }

        cout << "---------------------------------" << endl;
    }
}
