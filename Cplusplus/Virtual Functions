//Create three classes Person, Professor and Student. The class Person should have data members name and age. The classes Professor and Student should inherit from the class Person.

class Person{
    public:
        string name;
        int age;
    virtual void getdata(){
     
    }
    virtual void putdata(){
        
    } 
};

//The class Professor should have two integer members: publications and cur_id. There will be two member functions: getdata and putdata. The function getdata should get the input from the user: the name, age and publications of the professor. The function putdata should print the name, age, publications and the cur_id of the professor.

class Professor : public Person{
    public:
        int publications, id;
        static int cur_id;

    void getdata() {
        cin >> name >> age >> publications;
        cur_id++;
        id = cur_id;
    }
    
    void putdata() {
        cout << name << " " << age << " " << publications << " "  << id << "\n";
    }
};
int Professor::cur_id = 0;

//The class Student should have two data members: marks, which is an array of size 6 and cur_id. It has two member functions: getdata and putdata. The function getdata should get the input from the user: the name, age, and the marks of the student in  subjects. The function putdata should print the name, age, sum of the marks and the cur_id of the student.

class Student : public Person{
    public:
        int marks[6], id, sum;
        static int cur_id;

    void getdata(){
        cin >> name >> age;
        for(int i = 0; i < 6; i++){
            cin >> marks[i];
            sum += marks[i];
        }    
        cur_id++;
        id = cur_id;
    }
    
    void putdata(){
        cout << name << " "  << age << " " << sum << " " << id << "\n";
    }
};
int Student::cur_id = 0;

/*
Input (stdin)
4
1
Walter 56 99
2
Jesse 18 50 48 97 76 34 98
2
Pinkman 22 10 12 0 18 45 50
1
White 58 87

Your Output (stdout)
Walter 56 99 1
Jesse 18 403 1
Pinkman 22 135 2
White 58 87 2
*/
