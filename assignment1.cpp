#include <iostream>
#include <cstdio>
#include <sstream>
#include <bits/stdc++.h>

#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void pt1();
void pt2();
void pt3();
void pt4();
int max_of_four(int a, int b, int c, int d);
void pt5();
void pt6();
void pt7();
void pt8();

/* IMPORTANTE: AL INTENTAR CORRER EL CÓDIGO COMPILADO, OBTENÍA UN MENSAJE DE ERROR SOBRE EL CÓDIGO HECHO POR LA PÁGINA
   HACKERRANK PARA EL PUNTO 2 */

/* SIN EMBARGO, CADA PUNTO DE MANERA INDIVIDUAL DEBERÍA CORRER SIN PROBLEMA, YA QUE TODOS FUERON APROBADOS POR LA PÁGINA */

class Student_Pt7 {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    
    public:
        void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }
        void set_first_name(string a) {
            first_name = a;
        }
        string get_first_name() {
            return first_name;
        }
        void set_last_name(string a) {
            last_name = a;
        }
        string get_last_name() {
            return last_name;
        }
        void set_standard(int a) {
            standard = a;
        }
        int get_standard() {
            return standard;
        }
        
        string to_string() {
            stringstream age_stream;
            stringstream stand_stream;
            age_stream << age;
            
            string age_string;
            age_stream >> age_string;
            
            stand_stream << standard;
            
            string standard_string;
            stand_stream >> standard_string;
            
            string comma = ",";
            
            string result = age_string + comma + first_name + comma + last_name + comma + standard_string;
            return result;         
        }       
};


class Student_Pt8 {
    private:
        int scores[5];
        
    public:
        void input(){
            for (int n = 0; n < 5; n++){
                cin >> scores[n];
            }
        }
        
        int calculateTotalScore(){
            int sum = 0;
            for (int n = 0; n < 5; n++){
                sum += scores[n];
            }
            return sum;
        }
    
};


int main() {

    /* Input and Output */
    cout << "Input and Output\n" << endl;
    pt1();
    cout << "---" << endl;

    /* Conditional Statements */
    cout << "Conditional Statements\n" << endl;
    pt2();
    cout << "\n" << endl;

    /* For Loop */
    cout << "For Loop\n" << endl;
    pt3();
    cout << "\n" << endl;

    /* Functions */
    cout << "Functions\n" << endl;
    pt4();
    cout << "\n" << endl;

    /* Arrays Introduction */
    cout << "Arrays Introduction\n" << endl;
    pt5();
    cout << "\n" << endl;

    /* Strings */
    cout << "Strings\n" << endl;
    pt6();
    cout << "\n" << endl;

    /* Class */
    cout << "Class\n" << endl;
    pt7();
    cout << "\n" << endl;
    
    /* Classes and Objects */
    cout << "Class\n" << endl;
    pt8();
    cout << "\n" << endl;

    return 0;
}

void pt1() {
    int num1;
    int num2;
    int num3;
    int sum;
    
    cin >> num1 >> num2 >> num3;
    
    sum = num1 + num2 + num3;
    
    cout << sum << endl;
}

void pt2() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);

    if (n == 1) {
        cout << "one" << endl;
    }
    else if(n == 2){
        cout << "two" << endl;
    }
    else if(n == 3){
        cout << "three" << endl;
    }
    else if(n == 4){
        cout << "four" << endl;
    }
    else if(n == 5){
        cout << "five" << endl;
    }
    else if(n == 6){
        cout << "six" << endl;
    }
    else if(n == 7){
        cout << "seven" << endl;
    }
    else if(n == 8){
        cout << "eight" << endl;
    }
    else if(n == 9){
        cout << "nine" << endl;
    }
    else{
        cout << "Greater than 9" << endl;
    };
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

void pt3(){
    int a;
    int b;
    
    cin >> a;
    cin >> b;
    
    for (int n = a; n <= b; n++) {
        if (n == 1) {
        cout << "one" << endl;
        }
        else if(n == 2){
            cout << "two" << endl;
        }
        else if(n == 3){
            cout << "three" << endl;
        }
        else if(n == 4){
            cout << "four" << endl;
        }
        else if(n == 5){
            cout << "five" << endl;
        }
        else if(n == 6){
            cout << "six" << endl;
        }
        else if(n == 7){
            cout << "seven" << endl;
        }
        else if(n == 8){
            cout << "eight" << endl;
        }
        else if(n == 9){
            cout << "nine" << endl;
        }
        else{
            if(n % 2 == 0){
                cout << "even" << endl;
            }
            else{
                cout << "odd" << endl;
            }
        };
    }
}

void pt4(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
}

int max_of_four(int a, int b, int c, int d){
    if (a > b and a > c and a > d){
        return a;
    }
    else if (b > c and b > d){
        return b;
    }
    else if ( c > d){
        return c;
    }
    else{
        return d;
    }
}

void pt5(){
    int N;
    int n;
    cin >> N;
    
    int arr[N];
    
    for (n = 0; n < N; n++){
        cin >> arr[n];
    }
    
    for (n = N-1; n >= 0; n--){
        cout << arr[n] << " ";
    }
}

void pt6(){
    string a;
    string b;
    
    cin >> a;
    cin >> b;
    
    cout << a.size() << " " << b.size()<< endl;
    string c = a + b;
    
    cout << c << endl;
    
    char first_char_a = a[0];
    char first_char_b = b[0];
    
    a[0] = first_char_b;
    b[0] = first_char_a;
    
    cout << a << " " << b << endl;
}

void pt7() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student_Pt7 st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
}

void pt8() {
    int n; // number of students
    cin >> n;
    Student_Pt8 *s = new Student_Pt8[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
}