#include <iostream>
using namespace std;

int main() 
{
    int click_x, click_y, win_x1, win_x2, win_y1, win_y2, table_x, table_y1, table_y2;
    cin >> click_x;
    cin >> click_y;
    cin >> win_x1;
    cin >> win_x2;
    cin >> win_y1;
    cin >> win_y2;
    cin >> table_x;
    cin >> table_y1;
    cin >> table_y2;
    if (click_x == table_x && click_y >= table_y1 && click_y <= table_y2 || click_x >= win_x1 && click_x <= win_x2 && click_y >= win_y1 && click_y <= win_y2)
        cout << "YES\n";
    else 
        cout << "NO\n"; 
}