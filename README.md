# samp-grayscale-bitmap

[![sampctl](https://img.shields.io/badge/sampctl-samp--grayscale--bitmap-2f2f2f.svg?style=for-the-badge)](https://github.com/kristoisberg/samp-grayscale-bitmap)

**Notice:** This repository is not being actively maintained anymore. If anyone wishes to continue the development of the project, please create a fork of the repository and release future versions there.

This library was originally intended to be a test script for [pawn-colour-manipulation](https://github.com/kristoisberg/pawn-colour-manipulation), but I decided to turn this into an actual library. The library, in theory, is ready to be used, but due to an issue with [samp-bitmapper](https://github.com/Southclaws/samp-bitmapper) it doesn't actually work yet.


## Installation

Simply install to your project:

```bash
sampctl package install kristoisberg/samp-grayscale-bitmap
```

Include in your code and begin using the library:

```pawn
#include <grayscale-bitmap>
```

## Usage

```pawn
bool:GrayscaleBitmap(const load_path[], const save_path[], width, height) // GreyscaleBitmap also works
```


## Testing

To test, simply run the package:

```bash
sampctl package run
```
