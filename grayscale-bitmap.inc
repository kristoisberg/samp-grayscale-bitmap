#include <a_samp>
#include <colour-manipulation>
#include <bitmapper>
#include <YSI_Storage\y_bitmap>


#define GreyscaleBitmap GrayscaleBitmap


stock bool:GrayscaleBitmap(const load_path[], const save_path[], width, height) {
    new Bitmap:original;

    if (OpenBitmap(load_path, original)) {
        return false;
    }

    new Bitmap:result = Bitmap_Create(width, height), r, g, b, colour;

    for (new y; y < height; y++) {
        for (new x; x < width; x++) {
            GetRGB(original, x, y, r, g, b);

            colour = GetColourCode(
                GetColourComponentFractValue(r),
                GetColourComponentFractValue(g),
                GetColourComponentFractValue(b)
            );

            Bitmap_WritePixel(result, x, y, GrayscaleColour(colour));
        }
    }

    CloseBitmap(original);

    Bitmap_Write(result, save_path);
    Bitmap_Destroy(result);

    return true;
}
