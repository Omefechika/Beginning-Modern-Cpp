// maximum.hpp : Function template maximum header.
// returns the maximum of three values
/* T here represents both the return type and the parameter datatype*/

template <typename T> // or template<typename, class>
T maximum(T value1, T value2, T value3)
{
    T maximumValue{value1};

    // determine if value is greater than maximumValue
    if (value2 > maximumValue)
    {
        maximumValue = value2;
    }

    // determine wheter value3 is the max number
    if (value3 > maximumValue)
    {
        maximumValue = value3;
    }

    return maximumValue;
}