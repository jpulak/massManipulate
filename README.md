# massManipulate
General Description:
Write a C++ program with a source file named FindWeight.cpp. Your program will ask the user to enter the mass of an object in kilograms and then display the weight of the object on the Earth, on the Moon, on Mercury, and on Venus in Newtons. The program will also display a message indicating that the object is heavy is if weighs over 1250 Newtons on Earth. The program will display a message indicating that the object is light if it weighs less than 20 Newtons on Earth.

To calculate the weight of the object in Newtons, multiply its mass (in kilograms) by the acceleration due to gravity. For Earth use 9.807 m/sect^2, for the Moon use 1.62 m/sec^2, for Mercury use 3.7 m/sec^2, and for Venus us 8.87 m/sect^2 for your acceleration. Define named constants (doubles) for each of these.

Use double variables.

If the mass entered is not greater than zero, you must display an error message indicating that the "mass must be greater than zero". You should only proceed with the conversions when the weight is valid.

Display Details
Your program will display the weights in tabular form. The first column will have the heading Planet/Satellite and the second column will have the heading Weight (N). Separate the two columns using one tab character.

The planets and the heading will be left justified in a field sixteen characters wide. The weights and the heading will be right justified in a field fourteen characters wide. Display the weights with exactly three digits of precision to the right of the decimal point regardless of whether the digits are zero or nonzero.

Make sure you end your output with the endl or "\n" new line character.
```
Sample Output 1:

Please enter the mass of an object in kilograms: 155


Planet/Satellite        Weight (N)

Earth                     1520.085  The object is heavy
Moon                       251.100
Mercury                    573.500
Venus                     1374.850
```
Sample Output 2:
```
Please enter the mass of an object in kilograms: -0.9

Error, invalid mass entered.
The entered mass must be greater than 0.
```
Sample Output 3:
```
Please enter the mass of an object in kilograms: 0.9


Planet/Satellite        Weight (N)

Earth                        8.826  The object is light
Moon                         1.458
Mercury                      3.330
Venus                        7.983
Your output must match the output above.
```
