#ifndef AngleSimilarity_h
#define AngleSimilarity_h

#include <math.h>

namespace AngleSimilarity {

    float _getComponentX(float alpha)
    {
      return cos(alpha * M_PI / 180);
    }

    float _getComponentY(float alpha)
    {
      return sin(alpha * M_PI / 180);
    }

    float _getAngleRatioX(float alpha, float beta)
    {
      return _getComponentX(alpha) * _getComponentX(beta);
    }

    float _getAngleRatioY(float alpha, float beta)
    {
      return _getComponentY(alpha) * _getComponentY(beta);
    }

    float getWeightedValue(float alpha, float beta, float value)
    {
      float ratioX = _getAngleRatioX(alpha, beta);
      float ratioY = _getAngleRatioY(alpha, beta);
      float ratio = ratioX + ratioY;
      return ((ratio * value) + value) / 2;
    }
};

#endif