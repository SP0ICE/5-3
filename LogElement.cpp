#include "LogElement.h"

LogElement::LogElement(int in1, int in2) {
    input1 = in1;
    input2 = in2;
    output = (in1 && in2);
}