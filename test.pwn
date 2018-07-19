#include "grayscale-bitmap.inc"


main() {}


public OnGameModeInit() {
    GrayscaleBitmap("test.bmp", "result.bmp", 710, 399);
    GrayscaleBitmap("test2.bmp", "result2.bmp", 345, 345);

    return 1;
}
