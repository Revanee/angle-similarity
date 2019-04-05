# Angle Similarity

This is a C++ library used for calculating similarity between angles

## Getting started

Just pull the repository and include `AngleSimilarity.h` in your project

### Requirements

This library uses `math.h`. Make sure you're using the proper flags when compiling.

### Usage

The function `getSimilarity` takes two angles in degrees and outputs a
value between `0` and `1` that represents the similarity between them.

The function `getWeightedValue` takes two angles and a value. It uses
`getSimilarity` to calculate the similarity between the angles and multiplies
the result by the value outputting a value between `0` and the `value`.

### Author

**Hristo Kamenov** - [Revanee](https://github.com/Revanee)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
