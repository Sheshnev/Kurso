#include "Graph_plan.h"
#include <iostream>
#include <fstream>
using namespace std;

Graph_plan::Graph_plan() {
	cout << "������� �������������\n";
	cin >> proizv;
	cout << "��� �������\n";
	cin >> god;
	cout << "������� ��������� ������\n";
	cin >> cvet_pechati;
	cout << "������� ���������\n";
	cin >> stoimost;
	cout << "������� ���� ����������\n";
	cin >> cvet_ustva;
	cout << "������� ����������\n";
	cin >> interfeci;
	cout << "������� ������������ ������\n";
	cin >> max_format;
	cout << "������� �������� ������\n";
	cin >> skorost_pechati;
	cout << "������� ������� ������������\n";
	cin >> ploshad_skana;
}

void Graph_plan::Vivod_in_not_fail() {
	cout << endl << "������������� - " << proizv << endl;
	cout << "��� ������� - " << god << endl;
	cout << "��������� ������ - " << cvet_pechati << endl;
	cout << "��������� - " << stoimost << endl;
	cout << "���� ���������� - " << cvet_ustva << endl;
	cout << "���������� - " << interfeci << endl;
	cout << "������������ ������ - " << max_format << endl;
	cout << "�������� ������ - " << skorost_pechati << endl;
	cout << "������� ������������ - " << ploshad_skana << endl << endl;
	cout << "------------------------------" << endl;
}

void Graph_plan::Vivod_in_fail() {
	ofstream file1("Graph_plan.txt", ios_base::app);
	file1 << endl << "������������� - " << proizv << endl;
	file1 << "��� ������� - " << god << endl;
	file1 << "��������� ������ - " << cvet_pechati << endl;
	file1 << "��������� - " << stoimost << endl;
	file1 << "���� ���������� - " << cvet_ustva << endl;
	file1 << "���������� - " << interfeci << endl;
	file1 << "������������ ������ - " << max_format << endl;
	file1 << "�������� ������ - " << skorost_pechati << endl;
	file1 << "������� ������������ - " << ploshad_skana << endl << endl;
	file1 << "------------------------------" << endl;
	file1.close();
}
Graph_plan::~Graph_plan() {}
