#include <iostream>
#include <cstdlib>

using namespace std;

string a;
string answer;

int sum = 0;


// This project will be a history lesson program on Union vs Confederate + facts during it.
int main()
{
    cout << "*******************************************************************" << endl;
    cout << "**** ARE YOU READY TO LEARN SOME GOOD OL AMERICAN HISTORY? Y/N ****" << endl;
    cout << "*******************************************************************" << endl;
    cin >> a;
    if(a == "y" || a == "Y"){
        cout << "Let's start!" << endl;
        cout << " " << endl;
    }else{
        cout << "Never stop learning!" << endl;
        // Close terminal
        return 0;
    }

    //This is the starting out for points
    if(sum < 0){
    cout << "0";
    }

    cout << "What year was the beginning of the Civil War? Don't Google it! " << endl;
    cin >> a;
    if(a == "1861"){
        cout << "CORRECT! " << ++sum << " Point Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "FALSE! 1861 is the correct answer. " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "What year was the fight in the Civil War ended?" << endl;
    cin >> a;
    if(a == "1865"){
        cout << "CORRECT! " << ++sum << " Points Earned"<<endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! 1865 is the correct answer. " << sum << "/10" << endl;
        cout << " " << endl;
    }


    cout << "Where was the Civil War fought? Use proper writing skills when answering." << endl;
    cout << "EX: Illinois NOT illinois" << endl;
    cin >> a;
    if(a == "Southern Pennsylvania" || a == "Texas" || a == "New Mexico" || a == "Florida" || a == "Virginia" ||
       a == "Tennessee" || a == "Atlantic Ocean" || a == "France" || a == "Gulf of Mexico" || a == "Mississippi River"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answers are: Southern Pennsylvania, Texas, New Mexico, Florida, Virginia, Tennessee, Atlantic Ocean, France, Gulf of Mexico,  Mississippi River " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "Approximately how many soldiers fought in the Civil War? Was it over 2 million or under? Select 0 for over 2 mill. or 1 for under 2 mill. soldiers." << endl;
    cin >> a;
    if(a == "0"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "Who won the Civil War? Press 1 for Union, 2 for Confederate." << endl;
    cin >> a;
    if(a == "1"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answer is: Union. " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "How was the army organized? Remember use correct writing skills when answering" << endl;
    cout << "EX: Corps,Army,Regiment, .... Do not add spaces" << endl;
    cin >> a;
    if(a == "Army,Corps,Division,Brigade,Regiment,Company"){
        cout << "GOOD JOB KEEP IT UP! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answer is: Army,Corps,Division,Brigade,Regiment,Company " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "Were there naval battles in the Civil War? Y/N" << endl;
    cin >> a;
    if(a == "Y" || a == "y"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "Who was the President of the United States during the Civil War? Just input last name." << endl;
    cin >> a;
    if(a == "Lincoln"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! Answer is: Lincoln " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "What divided the United States?" << endl;
    cout << "Press 1 for Taxes & Slavery, Press 2 for Slavery & Central Power, Press 3 for Central Power & Ponies" << endl;
    cin >> a;
    if(a == "2"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answer is: Slavery & Central Power " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "What was the bloodiest battle of the Civil War?" << endl;
    cout << "Press 1 for Battle of Texas, 2 for Battle of Little Rock, Arkansas, 3 for Battle of Gettysburg" << endl;
    cin >> a;
    if(a == "3"){
        cout << "CORRECT! " << ++sum << " Points Earned "<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answer is: Battle of Gettysburg " << sum << "/10" << endl;
        cout << " " << endl;
    }


    cout << "*** You answered : " << sum << " correctly.***" << endl;
    if(sum < 8){
        cout << "You need to learn more about your American history." << endl;
    }else{
        cout << "Good job! KEEP LEARNING!" << endl;
    }

    cout << " " << endl;
    cout << "Do you want to quit this program? Y/N" << endl;
    cin >> answer;
    if(answer == "y" || answer == "Y"){
        cout << "GoodBye!" << endl;
        // Close terminal
    }else{
        cout << "Do you want to restart this program? Y/N" << endl;
        cin >> answer;
        while(answer == "Y" || answer == "y"){
            if(sum < 0){
    cout << "0";
    }

    cout << "What year was the beginning of the Civil War? Don't Google it! " << endl;
    cin >> a;
    if(a == "1861"){
        cout << "CORRECT! " << ++sum << " Point Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "FALSE! 1861 is the correct answer. " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "What year was the fight in the Civil War ended?" << endl;
    cin >> a;
    if(a == "1865"){
        cout << "CORRECT! " << ++sum << " Points Earned"<<endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! 1865 is the correct answer. " << sum << "/10" << endl;
        cout << " " << endl;
    }


    cout << "Where was the Civil War fought? Use proper writing skills when answering." << endl;
    cout << "EX: Illinois NOT illinois" << endl;
    cin >> a;
    if(a == "Southern Pennsylvania" || a == "Texas" || a == "New Mexico" || a == "Florida" || a == "Virginia" ||
       a == "Tennessee" || a == "Atlantic Ocean" || a == "France" || a == "Gulf of Mexico" || a == "Mississippi River"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answers are: Southern Pennsylvania, Texas, New Mexico, Florida, Virginia, Tennessee, Atlantic Ocean, France, Gulf of Mexico,  Mississippi River " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "Approximately how many soldiers fought in the Civil War? Was it over 2 million or under? Select 0 for over 2 mill. or 1 for under 2 mill. soldiers." << endl;
    cin >> a;
    if(a == "0"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "Who won the Civil War? Press 1 for Union, 2 for Confederate." << endl;
    cin >> a;
    if(a == "1"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answer is: Union. " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "How was the army organized? Remember use correct writing skills when answering" << endl;
    cout << "EX: Corps,Army,Regiment, .... Do not add spaces" << endl;
    cin >> a;
    if(a == "Army,Corps,Division,Brigade,Regiment,Company"){
        cout << "GOOD JOB KEEP IT UP! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answer is: Army,Corps,Division,Brigade,Regiment,Company " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "Were there naval battles in the Civil War? Y/N" << endl;
    cin >> a;
    if(a == "Y" || a == "y"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "Who was the President of the United States during the Civil War? Just input last name." << endl;
    cin >> a;
    if(a == "Lincoln"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! Answer is: Lincoln " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "What divided the United States?" << endl;
    cout << "Press 1 for Taxes & Slavery, Press 2 for Slavery & Central Power, Press 3 for Central Power & Ponies" << endl;
    cin >> a;
    if(a == "2"){
        cout << "CORRECT! " << ++sum << " Points Earned"<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answer is: Slavery & Central Power " << sum << "/10" << endl;
        cout << " " << endl;
    }

    cout << "What was the bloodiest battle of the Civil War?" << endl;
    cout << "Press 1 for Battle of Texas, 2 for Battle of Little Rock, Arkansas, 3 for Battle of Gettysburg" << endl;
    cin >> a;
    if(a == "3"){
        cout << "CORRECT! " << ++sum << " Points Earned "<< endl;
        cout << " " << endl;
    }else{
        cout << "INCORRECT! The answer is: Battle of Gettysburg " << sum << "/10" << endl;
        cout << " " << endl;
    }


    cout << "*** You answered : " << sum << " correctly.***" << endl;
    if(sum < 8){
        cout << "You need to learn more about your American history." << endl;
        // Close terminal
    }else{
        cout << "Good job! KEEP LEARNING!" << endl;
        // Close terminal
    }

        }
    }
    return 0;
}
