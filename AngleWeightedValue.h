#ifndef AngleWeightedValue_h
#define AngleWeightedValue_h

#include <math.h>

class AngleWeightedValue {
  public:

    AngleWeightedValue() {}

    float getWeightedValue(float alpha, float beta, float value)
    {
      float ratioX = getAngleRatioX(alpha, beta);
      float ratioY = getAngleRatioY(alpha, beta);
      float ratio = ratioX + ratioY;
      return ((ratio * value) + value) / 2;
    }

  private:

    float getComponentX(float alpha)
    {
      return cos(alpha * M_PI / 180);
    }

    float getComponentY(float alpha)
    {
      return sin(alpha * M_PI / 180);
    }

    float getAngleRatioX(float alpha, float beta)
    {
      return getComponentX(alpha) * getComponentX(beta);
    }

    float getAngleRatioY(float alpha, float beta)
    {
      return getComponentY(alpha) * getComponentY(beta);
    }
};

#endif