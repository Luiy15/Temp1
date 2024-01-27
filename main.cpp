#include <iostream>
#include <vector>


using namespace std;

int main(){

    //These are called data types. char, double, int, string, ....

    //When you create these always intials any ints, doubles, or any data type that takes in numbers to 0. You'll have issues if you don't.

    char theChar;   //This makes a variable for characters hence char
    double theDouble = 0.0;   //This makes a variable for decimal numbers. Ect: 0.0,1.1,1.2 ...
    int theInt = 0;     //This makes a variable for whole numbers, hence int for integer. ect: 1,2,3,4,...


        cout << "Test " << theChar + 1 << endl;





    // A vector is used to create a list of int, char, string, double, or any data type that you need a list of.
    // There's more types of lists but this one is the easiest to use in C++. So when you create a vector you have to do #include<vector>
    // in the header to use it because it's not native to C++. Some prof made it up and for you to use it you have to do the #include<vector>.

    //This is how you create a vector.

    //vector<DATA_TYPE> NAME_OF_LIST {YOUR_LIST};        each letter, number, or whatever in your vector is called an element.
    // There's an easier way to do this but since you're 
    // a beginner we'll do this
    vector<char> alphabet {'A','a','B','b','C','c','D','d','E','e','F','f','G','g','H','h','I','i','J','j','K','k','L','l','M','m',
                            'N','n','O','o','P','p','Q','q','R','r','S','s','T','t','U','u','V','v','W','w','X','x','Y','y','Z','z'};

    // The way you're able to access these elements is by their "index".
    //      think of the index as a way to keep track of your list.


    //      A is index 0
    //      B is index 1
    //      The indexs keep increasing as your continue your list unitl you reach the end.
    //      To access the number, letter or whatever at a speific element you have to do        VECTOR_NAME.at(INDEX_NUMBER) and this will give you
    //                                                                                          the value that you're looking for in your list.






    //This is how you get an input from any datatypes that aren't lists.


    // int test_Int = 0.0;
    // double test_Double = 0.0;
    // char test_Char;

    // cin >> test_Int;
    // cin >> test_Double;
    // cin >> test_Char;

    //      IF it's a string you do this

    //      getline(cin, STRING_NAME);



    //  AFTER each input the user will press the "enter" key to be able to type in another input.












    //  What your prof wants you do is do it all in one line instead of 3.
    //  In that case it'd look like this

    cout << "Type in a char, a double, a Int" << endl;

    cin >> theChar, theDouble, theInt;

    //  Notice how each input has a comma after. That's so the program knows the user has to input more than one thing at the same time.

    //  After we do this we have to increase the char by 1
    //        decrease the double by 2
    //        and square the int (multiple it by itself)




    if(theChar == alphabet.at(0)){
            theChar = alphabet.at(1);     //This is where you + 1 to theChar value.
        }

    //  If the if-statement isn't meant it just skips it.





    //This counter is so we have a reference number for the vector and to keep track of what loop iteration we're at. It stats at 0 in this case.
    // Because we already wrote a case if it theChar equals the first index of the vector
    int cnt = 1;







    // This while loop. It always you do loop over the same statement so you don't have to copy and paste.
    // Watch a youtube video on it so you can understand it better. Also in case your Prof gets suspisious
    // Also look up a youtube video on If statements. If the statement in the () is true it goes in. If not it skips it.

    //              "!=" means not equal
    //              "==" means equal



    //This is saying: if theChar value isn't equal to the value of the vector to loop until it does.
    while(theChar != alphabet.at(cnt)){     // Checks index 0 first then increases. Make sure you always increase your counter. Or you'll die
        cnt = cnt + 1;  //increase counter by 1
        if(theChar == alphabet.at(cnt)){
            theChar = alphabet.at(cnt + 1);     //This is where you + 1 to theChar value.
            break;
        }
    }


    // if the condition is true in the while statement it gets out of it and moves onto the next thing in the program.
    // if not then it keeps on looping until meets the condition.





    //This is where we decrease the double by 2, if there's a rule about it NOT being less than 0 just do this. If not then do the 2nd option.

    // if(theDouble <= 0.0){
    //     theDouble = 0.0;
    // }
    // else{
    //     theDouble = theDouble - 2.0;
    // }


    theDouble = theDouble - 2.0;




    // This is where we sqaure the int. There's a function you can use to square but we'll keep it simple

    theInt = theInt * theInt;        //We just set the value for "theInt" to equal to itself multiplied. This get's the sqaured value.



    // Now to output it. Feel free to change the output but for simplitiy sake I'll output it like this


    cout << endl << "This is the char value after adding 1: " << theChar;
    cout << endl << "This is the double value after subtracting 2: " << theDouble;
    cout << endl << "This is the int value after squaring it: " << theInt;

























    return 0;
}