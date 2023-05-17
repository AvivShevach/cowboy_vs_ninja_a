using namespace std;
class Ninja {
  public:
    string name;
    Point p;
    Ninja();
    Ninja(string n, Point q){name = n; p = q;};

    void move(Cowboy* other);

    void slash(Cowboy* other);

    string print();
};