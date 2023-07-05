#include <iostream>
using namespace std;
/*
Question One: the output of below question is: {9 7 0}
*/
void outPutOne()
{
    int size = 1;
    int a[3] = {};
    a[0] = 0;
    a[1] = 7;
    a[--size] = 9;
    for (int i = 0; i < 3; i++)
    {
        std::cout << a[i] << " ";
    }
}
/*
Question Two: the output of below question is: {6}
*/
int getValue()
{
    int j = 6;
    return j++;
}
/*
Question Three: the output of below question is: {5}
*/
int getValueOne()
{
    int j = 6;
    return --j;
}
/*
Question Four: the output of below question is: {-1}
*/
void outputTwo()
{
    int size = 0;
    for (int i = 0; i <= size; ++i)
    {
        size--;
    }
}
/*
Question Five: the output of below question is: {Infinite loop}
*/
void outputThree()
{
    int size = 0;
    for (int i = 0; i <= size; ++i)
    {
        size++;
    }
}
/*
Question Six: the output of below question is: {0}
*/
void outputSize()
{
    int size = 4;
    for (int i = 0; i <= size; i++)
    {

        size = size - 2;
    }
    std::cout << size;
}
/*
Question Seven: the output of below question is: {3}
*/
void outputY()
{
    int y = 0;
    for (int i = 0; i < 3; i++)
    {

        y += i;
    }
    std::cout << y;
}
/*
Question Eight: the output of below question is: {5}
*/
void outputDo()
{
    int a = 3;
    do
    {
        a = a + 1;
    } while (a < 5);
    std::cout << a;
}
/*
Question Ten: the output of below question is: {1 0, 2 0, 2 1}
*/
void outPutFour()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << i << " " << j << ", ";
        }
    }
}
/*
Question Eleven: the output of below question is: {1 0, 2 0, 2 1}
*/
void outputFive()
{
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                continue;
            }
            std::cout << i << " " << j << ", ";
        }
    }
}
/*
Question Tweleve: Leader number if it is greater than all number right to it
so find all leader numbers and return all sum.
*/
int leadNumber(int a[], int len)
{
    int sum = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            sum += a[i];
        }
    }
    return sum;
}
/*
Question 13: Write a method called luckySum. a lucky number is a number whose
preceding elements are strictly less than it.Write a method that returns sum
of these luckNumbers.
*/
int luckySum(int a[], int len)
{
    int sum = 0;
    for (int i = 1; i < len; i++)
    {
        if (a[i] > a[i - 1])
        {
            sum += a[i];
        }
    }
    return sum;
}
/*
Question 14: Write a method called myMethod that takes in two integer arrays and
returns the index of the smallest number. The smallest number should only
be present in the first array and not in the second.
*/
int myMethod(int a[], int b[], int lena, int lenb)
{
    int indexa = 0;
    int mina = lena;
    int minb = lenb;
    // find smallest element array a and its index
    for (int i = 0; i < lena; i++)
    {
        if (a[i] < mina)
        {
            mina = a[i];
            indexa = i;
        }
    }
    // find smallest element array a and its index
    for (int j = 0; j < lenb; j++)
    {
        if (b[j] < minb)
        {
            minb = b[j];
        }
    }
    if (mina < minb)
    {
        return indexa;
    }
    else
    {
        return -1;
    }
}
/*
Question 15: an array to return 1 it must be
      1.first and last elements must be odd
      2.for every odd element except the last element
must be followed by exactly two even element.
example{7,4,6,3,6,8,11} will return 1
but{{7,4,6.3,6,8,12,11}return 0
{7,4,3,6,8,11}return 0,{6,3,4,8,9}return 0.
*/
int myArray(int a[], int len)
{
    if (a[0] % 2 == 0 || a[len - 1] % 2 == 0)
    {
        return 0;
    }
    // check every oddness
    for (int i = 0; i < len; i++)
    {
        if (a[i] % 2 != 0 && i != len - 1)
        {
            int counter = 0;
            for (int j = i + 1; j < len; j++)
            {
                if (a[j] % 2 == 0)
                {
                    counter++;
                }
                else
                {
                    break;
                }
            }
            if (counter != 2)
            {
                return 0;
            }
        }
    }
    return 1;
}
/*
Question 16: write an array called myAnswer which return 1 if
{2,3,5,11} 2<3 ,2+3<5 ,2+3+5<11 is true other wise it returns 0.
in this case the above example return 0.
while {2,3,6,12} return 1.
*/
int myAnswer(int a[], int len)
{
    int sum = 0;
    for (int i = 0; i < len - 1; i++)
    {
        sum += a[i];
        if (sum >= a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
/*
Question 17: sumArray
*/
int sumArray(int a[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += a[i];
    }
    return sum;
}
/*
Question 18: Grid Array Using 2D Array
*/
void gridUsing2DArray()
{
    int a[3][4] = {{1, 2, 3, 4}, {6, 7, 8, 9}, {10, 20, 303, 40}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << "a[" << i << "]"
                      << "[" << j << "]"
                      << "--->" << a[i][j] << "\n";
        }
    }
}
/*
Question 19: AvgValueArray
*/
int avgValueArray(int a[], int len)
{
    int avg = 0;
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += a[i];
    }
    avg = sum / len;
    return avg;
}
/*
Question 20: Linear Search
*/
int linearSearch(int a[], int item, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (a[i] == item)
        {
            std::cout << "Item is found @ index " << i << "\n";
            return 1;
        }
    }
    std::cout << "Item is not found\n";
    return 0;
}
/*
Question 21: Find the second min
*/
int findSecondMin(int a[], int len){
    int min = len;
    int secmin = len;
    // find first min
    for(int i=0;i<len;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    // find second min
    for(int j =0; j<len;j++){
        if(a[j]<secmin && a[j]!=min){
            secmin = a[j];
        }
    }
    return secmin;
}
/*
Question 22: To check the duplicate element
*/
void checkDuplicateNumber(int a[], int len){
    std::cout<<"Duplicate numbers are:";
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(a[i] == a[j]){
                std::cout<<a[i]<<" ";
            }
        }
    }
}
/*
Question 23 : Binary Search without recursive and with recursive
*/
int binarySearch(int a[], int len, int val)
{
    int str = 0;
    int end = len - 1;
    int mid = (str + end) / 2;
    while (a[mid] != val && str <= end)
    {
        if (val < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            str = mid + 1;
        }
    }
    if (a[mid] == val)
    {
        std::cout << "Item is found @ index " << mid << endl;
        return 1;
    }
    else
    {
        std::cout << "The element " << val << " not found\n";
        return -1;
    }
}
int bin_search(int a[], int key, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = low + high / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return bin_search(a, key, low, mid - 1);
        }
        else if (key > a[mid])
        {
            return bin_search(a, key, high, mid + 1);
        }
    }
    else
    {
        return -1;
    }
}
/*
Question 24: Reverse Array
*/
void reverseArray(int a[], int len){
    int temp,i,j;
    for(i=0,j=len-1;i<len/2;i++,j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    std::cout << "\n Reverse all elements of the array: " << endl;  
    for ( int z = 0; z < len; z++)  
    {  
        std::cout << a[z] << " ";  
    }  
}
/*
Question 25: Count character in a string
*/
int countCharString(string str, char ch){
    int count = 0;
    int len = str.length();
    for(int i=0;i<len;i++){
        if(str[i] == ch){
            count++;
        }
    }
    return count;
}
/*
Question 26: Power Calculation without method math.pow()
*/
int powerCalculation(int base, int exponent){
    int pow = 1;
    for(int i=0;i<exponent;i++){
        pow*=base;
    }
    return pow;
}
/*
Question 27: Return min and max values
*/
void minMax(int a[],int len){
    int min = len;
    int max = 0;
    for(int i=0;i<len;i++){
        if(a[i]<min){
            min = a[i];
        }
        if(a[i]>max){
            max = a[i];
        }
    }
    std::cout<<"Maximum Value is "<<max<<"\n";
    std::cout<<"Minimum Value is "<<min<<"\n";
}
/*
Question 28: lead Number means a number which is greater than its right
*/
void leadNumberOne(int a[],int len){
    std::cout<<"Lead Numbers are: ";
    for(int i=0;i<len-1;i++){
        if(a[i]>a[i+1]){
          std::cout<<a[i]<<" ";  
        }
    }
    cout<<endl;
}
/*
Question 29: common elements between two arrays of integers
*/
void commonElementsArray(int a[],int b[],int lena,int lenb){
    std::cout<<"Common elements are: ";
    for(int i=0;i<lena;i++){
        for(int j=0;j<lenb;j++){
            if(a[i] == b[j]){
                std::cout<<a[i]<<" ";
            }
        }
    }
}
/*
Question 30: common elements between two arrays of String
*/
void commonStringArray(string a[],string b[],int lena,int lenb){
    std::cout<<"Common Strings are: ";
    for(int i=0;i<lena;i++){
        for(int j=0;j<lenb;j++){
            if(a[i] == b[j]){
                std::cout<<a[i]<<" ";
            }
        }
    }

}
/*
Question 31: Find duplicate String value
*/
void findDuplicateString(string a[],int len){
    std::cout<<"Duplicate Strings are: {";
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(a[i] == a[j] && i!=j){
                std::cout<<a[i]<<",";
            }
        }
    }
    std::cout<<"}\n";
}
/*
Question 32: Second Largest elements
*/
void secondLargestElement(int a[], int len){
    int max = 0;
    int secMax = 0;
    // finde first largest values
    for(int i=0;i<len;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    // find second largest elements
    for(int j=0;j<len;j++){
        if(a[j]>secMax && a[j]!=max){
            secMax = a[j];
        }
    }
    std::cout<<"Second Largest Element is: "<<secMax<<"\n";
}
/*
Question 33: Rotate an arrya
*/
void rotate_array(int a[], int len){
    int temp = a[len-1];
    for(int i=len-1;i>0;i--){
        a[i] = a[i-1];
        a[0] = temp;
    }
    // display output
    for(int j=0;j<len;j++){
        std::cout<<a[j]<<" ";
    }
}
/*
Question 34: Separate Even and odd elements
*/
void separate_even_odd(int a[],int len){
    int left=0;
    int right = len-1;
    while(left<right){
        while(a[left]%2==0 && left<right){
            left++;
        }
        while(a[right]%2==1 && left<right){
            right--;
        }
        if(left<right){
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left++;
            right--;
        }
    }
}
/*
Question 35: Segregate all 0s and 1ns on left and right
*/
void seprate_zero_ones(int a[],int len){
    int left=0;
    int right = len-1;
    while(left < right){
        while(a[left]==0 && left<right){
            left++;
        }
        while(a[right]==1 && left<right){
            right--;
        }
        if(left<right){
            a[left] = 0;
            a[right] = 1;
            left++;
            right--;
        }
    }
}
/*
Question 36: Sorting Mechanism
*/
void sorting(int a[], int len){
    for(int i=0; i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // display
    for(int m=0; m<len;m++){
        cout<<a[m]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[6] = {2, 3, 6, 12,1,20};
    int b[5] = {100, 20, 5, 7, 1};
    sorting(a, 6);
    return 0;
}