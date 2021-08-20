#include "MultiInheritanceD.h"
#include <iostream>

Killer::MultiInheritanceD::MultiInheritanceD()
    :MultiInheritanceA(), MultiInheritanceB(), MultiInheritanceC()
{
}

// �˴�����������MultiInheritanceA ���캯����Ĭ�ϵ��ò��������Ĺ��캯��
// �˴���B��C�������ٵ���A�Ĺ��캯�� ����һ��A������
Killer::MultiInheritanceD::MultiInheritanceD(int num1, int num2)
    :  MultiInheritanceA(num1, num2), MultiInheritanceB(num1, num2), MultiInheritanceC(num1, num2)
{
}

void Killer::MultiInheritanceD::publicMethod()
{
    std::cout << "MultiInheritanceD::publicMethod exe" << std::endl;
    MultiInheritanceA::publicMethod();
    MultiInheritanceB::publicMethod();
    MultiInheritanceC::publicMethod();
}
