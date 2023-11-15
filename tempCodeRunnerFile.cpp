#include <iostream>
#include <string>
using namespace std;
int main()
{
    int longeur, largeur;
    int px, py, distance;
    string choix;

    cout << "quelle est la longeur de l asset" << endl;
    cin >> longeur;
    cout << "quelle est la largeur de l asset" << endl;
    cin >> largeur;

    cout << "quelle est la position de depart x (horizontal)" << endl;
    cin >> px;

    cout << "quelle est la position de depart y (vertical)" << endl;
    cin >> py;

    cout << "combien d asset" << endl;
    cin >> distance;

    cout << "quelle direction x (horizontal) ou y (vertical)" << endl;
    cin >> choix;

    if (choix == "x")
    {
        cout << "platforms.create(" << py << ", " << px << ", 'ground').setScale(3).refreshBody();" << endl;
        for (int i = 0; i < distance; i++)
        {
            py += largeur;
            cout << "platforms.create(" << py << ", " << px << ", 'ground').setScale(3).refreshBody();" << endl;
        }
    }
    else
    {
        cout << "platforms.create(" << py << ", " << px << ", 'ground').setScale(3).refreshBody();" << endl;
        for (int i = 0; i < distance; i++)
        {
            px += longeur;
            cout << "platforms.create(" << py << ", " << px << ", 'ground').setScale(3).refreshBody();" << endl;
        }
    }

    return 0;
}