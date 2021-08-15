#include <iostream>

#include <Eigen/Core>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

const float  pi = 3.1415926f;
int main()
{


    Eigen::Vector3f v(2.0f, 1.0f, 1.0f);

    Eigen::AngleAxisf rotation_vector(-pi / 4, Eigen::Vector3f(0, 0, 1));//ÄæÊ±ÕëÐý×ª45

    
    auto r_res = rotation_vector.toRotationMatrix() * v;

    cout << r_res << endl;

    Eigen::Vector3f v_rrr(1.0f, 2.0f, 1.0f);

    cout << r_res + v_rrr << endl;//Æ½ÒÆ
    
    /* auto v2 = rot * v1;*/
     //std::cout << v2 << std::endl;
    return 0;
}
