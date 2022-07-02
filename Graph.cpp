#include "Graph.hpp"
#include <cstdlib>
#include <iostream>


namespace graph
{
    Graph::Graph()
    {
        for (int i = 0; i < kHeight; ++i)
        {
            for (int j = 0; j < kWidth; ++j)
            {
                m_canvas[i][j] = ' ';
            }
        }
    }

    void Graph::put(int x, int y, char value)
    {
        if (0 <= x && x < kWidth &&
            0 <= y && y < kHeight)
        {
            m_canvas[y][x] = value;
        }
    }

    void Graph::clear()
    {
        for (int i = 0; i < kHeight; ++i)
        {
            for (int j = 0; j < kWidth; ++j)
            {
                m_canvas[i][j] = ' ';
            }
        }
    }

    void Graph::draw() const
    {
        system("clear");

        for (int i = 0; i < kHeight; ++i)
        {
            for (int j = 0; j < kWidth; ++j)
            {
                std::cout << m_canvas[i][j];
            }
            std::cout << std::endl;
        }
    }
}