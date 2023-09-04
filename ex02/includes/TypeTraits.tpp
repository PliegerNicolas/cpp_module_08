// Integral types

template <typename T>
struct IsIntegral
{
	static const bool value = false;
};

template <>
struct IsIntegral<int>
{
	static const bool value = true;
};

template <>
struct IsIntegral<long>
{
	static const bool value = true;
};

// Floating-point types

template <typename T>
struct IsFloatingPoint
{
	static const bool value = false;
};

template <>
struct IsFloatingPoint<float>
{
	static const bool value = true;
};

template <>
struct IsFloatingPoint<double>
{
	static const bool value = true;
};
