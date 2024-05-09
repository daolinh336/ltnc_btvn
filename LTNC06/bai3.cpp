

// Write your Student class here
class Student
{
    private:
    int one, two, three, four, five;

    public:

    void input()
    {
        cin >> one >> two >> three >> four >> five;
    }

     int calculateTotalScore()
     {
         return one + two + three + four + five;
     }

};


