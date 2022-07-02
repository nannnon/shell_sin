#pragma once

namespace graph
{
    const int kWidth = 100;
    const int kHeight = 20;
    
    class Graph
    {
        public:
            Graph();
            void put(int x, int y, char value);
            void clear();
            void draw() const;

        private:
            char m_canvas[kHeight][kWidth];
    };
}