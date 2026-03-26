#include "scorereader.h"
#include <iostream>

ScoreReader::ScoreReader() : m_count(0) {
    for (int i = 0; i < maxCounts; ++i)
        m_score[i] = 0;
}

bool ScoreReader::readInput() {
    std::cout << "Enter number of courses (1-" << maxCounts << "): ";
    std::cin >> m_count;

    if (m_count <= 0 || m_count > maxCounts)
        return false;

    std::cout << "Enter " << m_count << " scores: ";
    for (int i = 0; i < m_count; ++i) {
        std::cin >> m_score[i];
    }
    return true;
}

int ScoreReader::getCount() const {
    return m_count;
}

const int* ScoreReader::getScores() const {
    return m_score;
}
