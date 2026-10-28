#include <iostream>
using namespace std;

int main()
{
  const int ROWS = 4;
  const int COLS = 5;
  int img[ROWS][COLS] = {
    {120, 135, 142, 128, 119},
    {131, 255, 198, 140, 125},
    {127, 244, 251, 133, 122},
    {118, 129, 137, 126, 115}
  };

  int level;
  cout << "Clip level: ";
  if (!(cin >> level))
  {
    cout << "Invalid input" << endl;
    return 0;
  }

  int count = 0;

  while (true)
  {
    int *best = nullptr;
    int r = 0;       

    for (int i = 0; i < ROWS; i++)
    {
      for (int *q = img[i]; q < img[i] + COLS; q++)
      {
        if (*q > level && (best == nullptr || *q > *best))
        {
          best = q;
          r = i;
        }
      }
    }

    if (best == nullptr)   // nothing above the clip level
    {
      break;
    }

    int c = best - img[r];   // column = pointer distance from start of row
    int &px = img[r][c];     // reference to the pixel

    cout << "clip (" << r << "," << c << ") from " << px << endl;
    px = level;              // clip through the reference
    count++;
  }

  cout << count << " pixels clipped" << endl;

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      if (j > 0) cout << " ";
      cout << img[i][j];
    }
    cout << endl;
  }
  return 0;
}