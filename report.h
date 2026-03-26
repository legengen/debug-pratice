#ifndef REPORT_H
#define REPORT_H

#include "analysisresult.h"

class Report {
public:
    void print(const AnalysisResult& result) const;
};

#endif
