#pragma once
#include <vector>
#include <map>
#include "Speaker.h"
#include <deque>
#include <functional>
#include <numeric>

using std::vector;
using std::map;

class SpeechManager
{
public:
    SpeechManager();

    void showMenu();

    void exit();

    void createSpeaker();

    void start();

    ~SpeechManager();

private:

    vector<int> m_v1;

    vector<int> m_v2;

    vector<int> m_v3;

    map<int, Speaker> m_map;
    int m_index;

    void init();

    void speechDraw();

    void scoring();

    double newScore();
};

