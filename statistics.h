#ifndef STATISTICS_H
#define STATISTICS_H

#include "analysisresult.h"

class Statistics {
public:
    AnalysisResult compute(const int scores[], int count) const;
};

#endif
