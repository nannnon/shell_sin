#include <cstdlib>
#include <cmath>
#include <unistd.h>
#include "Graph.hpp"

int main(int argc, char* argv[])
{
    double initTheta = 0;
    graph::Graph graph;

    while (true)
    {
        // 信号の時間を進める
        const double kDeltaTheta = 0.1;
        initTheta += kDeltaTheta;

        // 信号を点描する
        graph.clear();
        for (int i = 0; i < graph::kWidth; ++i)
        {
            const double kSamplingT = 0.1;
            double theta = initTheta + i * kSamplingT;

            double y = std::sin(theta);
            double y2 = graph::kHeight * y / 2.2 + graph::kHeight / 2.0;
            int y3 = static_cast<int>(std::round(y2));

            graph.put(i, y3, '*');
        }

        // グラフを描画する
        graph.draw();
        usleep(10000);
    }

    return EXIT_SUCCESS;
}