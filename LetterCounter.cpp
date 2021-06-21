
// This program should run from the command line. 
// the first argument is the exe file, and the 2nd argument should be a text file
// the program will then count either the consonants or vowels in the file based on the user answer
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>


using namespace std;

//constants appear to be defined outside of main
//42 is the answer to life; thus it will be my width for this program
const int WIDTH = (42);
const string VA = "The number of A's: ";
const string VE = "The number of E's: ";
const string VI = "The number of I's: ";
const string VO = "The number of O's: ";
const string VU = "The number of U's: ";
const string TOTAL = "The vowel count is: ";

//constants for consonants
const string CB = "The number of B's: ";
const string CC = "The number of C's: ";
const string CD = "The number of D's: ";
const string CF = "The number of F's: ";
const string CG = "The number of G's: ";
const string CH = "The number of H's: ";
const string CJ = "The number of J's: ";
const string CK = "The number of K's: ";
const string CL = "The number of L's: ";
const string CM = "The number of M's: ";
const string CN = "The number of N's: ";
const string CP = "The number of P's: ";
const string CQ = "The number of Q's: ";
const string CR = "The number of R's: ";
const string CS = "The number of S's: ";
const string CT = "The number of T's: ";
const string CV = "The number of V's: ";
const string CW = "The number of W's: ";
const string CX = "The number of X's: ";
const string CY = "The number of Y's: ";
const string CZ = "The number of Z's: ";
const string CTOTAL = "The consonant count is: ";


// int argc = # of parameterss to be passed in from command line
//  there is always at least one parameter passed in (name of program)
// char * argv[] is a pointed to an array 
int main(int argc, char* argv[])
{
    // file variables
    ifstream inFile;

    //assign variable name to argv[1] which is our file name that will be input on the command line
    string myFile = argv[1];

    string answer;

    //vowel counter variables initialized at 0 to start count
    int aVowel = 0;
    int eVowel = 0;
    int iVowel = 0;
    int oVowel = 0;
    int uVowel = 0;

    //consonant variable counters
    int bConsonant = 0;
    int cConsonant = 0;
    int dConsonant = 0;
    int fConsonant = 0;
    int gConsonant = 0;
    int hConsonant = 0;
    int jConsonant = 0;
    int kConsonant = 0;
    int lConsonant = 0;
    int mConsonant = 0;
    int nConsonant = 0;
    int pConsonant = 0;
    int qConsonant = 0;
    int rConsonant = 0;
    int sConsonant = 0;
    int tConsonant = 0;
    int vConsonant = 0;
    int wConsonant = 0;
    int xConsonant = 0;
    int yConsonant = 0;
    int zConsonant = 0;


    //this varible will count total # of vowels. Initialized at 0
    int vIndex = 0;

    //the variable will count total number of consonants, initialized at 0
    int cIndex = 0;

    //variable for working with file
    string c;

    //open the file
    inFile.open(myFile);


    //if error opening file, exit
    if (inFile.fail())
    {
        cout << "Invalid entry, exiting" << endl;
        system("pause");
        return -1;
    }

    //standard program title
    cout << right << setw(10 + WIDTH) << setfill('*') << "*" << endl;
    cout << "********Welcome to my Letter Count Program*********" << endl;
    cout << setfill('*') << setw(10 + WIDTH) << ' ' << endl;
    cout << endl;

    cout << "Would you like to count [c]onsonants or [v]owels?";
    cin >> answer;
    transform(answer.begin(), answer.end(), answer.begin(), tolower);
    if (answer != "c" && answer != "v")
    {
        cout << "Invalid entry, exiting" << endl;
        system("pause");
        return 0;
    }
    cout << endl;
    cout << "Analyzing the file '" << argv[1] << "' ..." << endl;
    cout << endl;




    // this is saying "while we are not at the end of the file" and there is a string (c); proceed
    while (!inFile.eof() && inFile >> c)
    {
        //somewhere, someone knows why all programming languages use int i = 0 for things instead of making up something cooler. but it works.
        int i = 0;
        if (answer == "v")

            for (int i = 0; i < c.size(); i++)
            {
                //this appears to be where the variable works.
                char v = c[i];

                if (v == 'a' || v == 'A')
                {
                    aVowel++;
                    vIndex++;
                }
                else if (v == 'e' || v == 'E')
                {
                    eVowel++;
                    vIndex++;
                }
                else if (v == 'i' || v == 'I')
                {
                    iVowel++;
                    vIndex++;
                }
                else if (v == 'o' || v == 'O')
                {
                    oVowel++;
                    vIndex++;
                }
                else if (v == 'u' || v == 'U')
                {
                    uVowel++;
                    vIndex++;
                }


            }
        else
            for (int i = 0; i < c.size(); i++)
            {
                char v = c[i];

                if (v == 'b' || v == 'B')
                {
                    bConsonant++;
                    cIndex++;
                }
                else if (v == 'd' || v == 'D')
                {
                    dConsonant++;
                    cIndex++;
                }
                else if (v == 'f' || v == 'F')
                {
                    fConsonant++;
                    cIndex++;
                }
                else if (v == 'g' || v == 'G')
                {
                    gConsonant++;
                    cIndex++;
                }
                else if (v == 'h' || v == 'H')
                {
                    hConsonant++;
                    cIndex++;
                }
                else if (v == 'j' || v == 'J')
                {
                    jConsonant++;
                    cIndex++;
                }
                else if (v == 'k' || v == 'K')
                {
                    kConsonant++;
                    cIndex++;
                }
                else if (v == 'l' || v == 'L')
                {
                    lConsonant++;
                    cIndex++;
                }
                else if (v == 'm' || v == 'M')
                {
                    mConsonant++;
                    cIndex++;
                }
                else if (v == 'n' || v == 'N')
                {
                    nConsonant++;
                    cIndex++;
                }
                else if (v == 'p' || v == 'P')
                {
                    pConsonant++;
                    cIndex++;
                }
                else if (v == 'q' || v == 'Q')
                {
                    qConsonant++;
                    cIndex++;
                }
                else if (v == 'r' || v == 'R')
                {
                    rConsonant++;
                    cIndex++;
                }
                else if (v == 's' || v == 'S')
                {
                    sConsonant++;
                    cIndex++;
                }
                else if (v == 't' || v == 'T')
                {
                    tConsonant++;
                    cIndex++;
                }
                else if (v == 'v' || v == 'V')
                {
                    vConsonant++;
                    cIndex++;
                }
                else if (v == 'w' || v == 'W')
                {
                    wConsonant++;
                    cIndex++;
                }
                else if (v == 'x' || v == 'X')
                {
                    xConsonant++;
                    cIndex++;
                }
                else if (v == 'y' || v == 'Y')
                {
                    yConsonant++;
                    cIndex++;
                }
                else if (v == 'z' || v == 'Z')
                {
                    zConsonant++;
                    cIndex++;
                }

            }

    }


    //output statements

    if (answer == "v")
    {
        cout << VA << setw(WIDTH) << setfill('.') << aVowel << endl;
        cout << VE << setw(WIDTH) << setfill('.') << eVowel << endl;
        cout << VI << setw(WIDTH) << setfill('.') << iVowel << endl;
        cout << VO << setw(WIDTH) << setfill('.') << oVowel << endl;
        cout << VU << setw(WIDTH - 1) << setfill('.') << uVowel << endl;
        cout << TOTAL << setw(WIDTH - 1) << setfill('.') << vIndex << endl;

    }
    else
        cout << CB << setw(WIDTH) << setfill('.') << bConsonant << endl;
    cout << CD << setw(WIDTH) << setfill('.') << dConsonant << endl;
    cout << CF << setw(WIDTH) << setfill('.') << fConsonant << endl;
    cout << CG << setw(WIDTH) << setfill('.') << gConsonant << endl;
    cout << CH << setw(WIDTH) << setfill('.') << hConsonant << endl;
    cout << CJ << setw(WIDTH) << setfill('.') << jConsonant << endl;
    cout << CK << setw(WIDTH) << setfill('.') << kConsonant << endl;
    cout << CL << setw(WIDTH) << setfill('.') << lConsonant << endl;
    cout << CM << setw(WIDTH) << setfill('.') << mConsonant << endl;
    cout << CN << setw(WIDTH) << setfill('.') << nConsonant << endl;
    cout << CP << setw(WIDTH) << setfill('.') << pConsonant << endl;
    cout << CQ << setw(WIDTH) << setfill('.') << qConsonant << endl;
    cout << CR << setw(WIDTH) << setfill('.') << rConsonant << endl;
    cout << CS << setw(WIDTH) << setfill('.') << sConsonant << endl;
    cout << CT << setw(WIDTH) << setfill('.') << tConsonant << endl;
    cout << CV << setw(WIDTH) << setfill('.') << vConsonant << endl;
    cout << CW << setw(WIDTH) << setfill('.') << wConsonant << endl;
    cout << CX << setw(WIDTH) << setfill('.') << xConsonant << endl;
    cout << CY << setw(WIDTH) << setfill('.') << yConsonant << endl;
    cout << CZ << setw(WIDTH) << setfill('.') << zConsonant << endl;
    cout << CTOTAL << setw(WIDTH - 1) << setfill('.') << cIndex << endl;







    system("pause");
    return 0;

    inFile.close();
}

