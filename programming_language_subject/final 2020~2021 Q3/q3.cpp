#include <iostream>
using std::cout;
using std::cin;

int main()
{
  struct point
  {
    float x = 0;
    float y = 0;
    float z = 0;
  };
  class line
  {
    private:
    point start;
    point end;
    public:
    void set_start(float x , float y , float z)
    {
      start.x = x;
      start.y = y;
      start.z = z;
    }

    void set_end(float x , float y , float z)
    {
      end.x = x;
      end.y = y;
      end.z = z;
    }

    point get_start()
    {
      return start;
    }

    point get_end()
    {
      return end;
    }
  };
  line line1;
  line1.set_start(11 , 2 , 3);
  line1.set_end(41 , 5 , 6);
  point s = line1.get_start();
  point e = line1.get_end();
  cout << s.x << ' ' << s.y << ' ' << s.z << '\n';
  cout << e.x << ' ' << e.y << ' ' << e.z << '\n';
  /* ============================ */

  line lines[2];
  lines[0].set_start(1 , 1 , 1);
  lines[0].set_end(2 , 2 , 2);

  point s1 = lines[0].get_start();
  cout << s1.x << ' ' << s1.y << ' ' << s1.y << '\n';

  point s2 = lines[1].get_start();
  cout << s2.x << ' ' << s2.y << ' ' << s2.y << '\n';
}