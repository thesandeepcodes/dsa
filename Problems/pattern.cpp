#include <iostream>
using namespace std;

/**
 * Pattern Problems
 *
 * The problems here are from GeeksForGeeks
 * https://media.geeksforgeeks.org/wp-content/uploads/20230201105319/Pattern-Printing-in-Java.jpg
 */
namespace Patterns {

void HollowSquare(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }

    cout << endl;
  }
}

void NumberTriangular(int size) {
  for (int i = 0; i < size; i++) {
    // spaces
    for (int j = 0; j < size - i - 1; j++) {
      cout << " ";
    }

    // pattern
    for (int j = 0; j <= i; j++) {
      cout << i + 1 << " ";
    }

    cout << endl;
  }
}

void NumberIncreasingPyramid(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << j + 1;
    }

    cout << endl;
  }
}

void NumberIncresingReversePyramid(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= size - i - 1; j++) {
      cout << j + 1;
    }

    cout << endl;
  }
}

void NumberChangingPyramid(int size) {
  int start = 1;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << start++;
    }

    cout << endl;
  }
}

void ZeroOneTriangle(int size) {
  for (int i = 0; i < size; i++) {
    int bit = (i + 1) % 2 != 0;

    for (int j = 0; j <= i; j++) {
      cout << bit;
      bit = !bit;
    }

    cout << endl;
  }
}

void PalindromTriangluar(int size) {
  for (int i = 1; i <= size; i++) {
    for (int j = 0; j < size - i; j++) {
      cout << " ";
    }

    for (int j = i; j > 0; j--) {
      cout << j;
    }

    for (int j = 2; j <= i; j++) {
      cout << j;
    }

    cout << endl;
  }
}

void RhombusPattern(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    for (int j = 0; j < size; j++) {
      cout << "* ";
    }

    cout << endl;
  }
}

void DiamondPattern(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= size - i - 1; j++) {
      cout << " ";
    }

    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  for (int i = size - 2; i >= 0; i--) {
    for (int j = 0; j <= size - i - 1; j++) {
      cout << " ";
    }

    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }

    cout << endl;
  }
}

void Square(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << "*";
    }

    cout << endl;
  }
}

void RightTriangle(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }

    cout << endl;
  }
}

void AlphabeticalRightTriangle(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << (char)(65 + i);
    }

    cout << endl;
  }
}

void FloydsAlphabeticalTriangle(int size) {
  int start = 65;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << (char)start++;
    }

    cout << endl;
  }
}

void CenteredPyramid(int size) {
  for (int i = 1; i <= size; i++) {
    for (int j = 0; j <= size - i - 1; j++) {
      cout << " ";
    }

    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << "*";
    }

    cout << endl;
  }
}
}  // namespace Patterns

int main() {
  Patterns::HollowSquare(4);

  cout << endl;
  Patterns::NumberTriangular(4);

  cout << endl;
  Patterns::NumberIncreasingPyramid(4);

  cout << endl;
  Patterns::NumberIncresingReversePyramid(4);

  cout << endl;
  Patterns::NumberChangingPyramid(4);

  cout << endl;
  Patterns::ZeroOneTriangle(4);

  cout << endl;
  Patterns::PalindromTriangluar(4);

  cout << endl;
  Patterns::RhombusPattern(4);

  cout << endl;
  Patterns::DiamondPattern(4);

    cout << endl;
  Patterns::Square(4);

  cout << endl;
  Patterns::RightTriangle(4);

  cout << endl;
  Patterns::AlphabeticalRightTriangle(4);

  cout << endl;
  Patterns::FloydsAlphabeticalTriangle(4);
}