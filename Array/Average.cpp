#include <iostream>
using namespace std;

const int CLASS = 3;
const int SUB_NUM = 3;
const int STUDENT_NUM = 10;

void main()
{
	char Name[SUB_NUM][10] = { "국어", "영어", "수학" };

	int scores[CLASS][SUB_NUM][STUDENT_NUM] = { {{ 75, 60, 81, 72, 66, 65, 88, 90, 87, 70 }, { 82, 88, 79, 90, 97, 74, 91, 95, 84, 100 }, { 69, 77, 82, 75, 95, 90, 70, 85, 93, 82 }},
							{{ 88, 75, 50, 65, 94, 76, 71, 89, 98, 100 }, { 90, 99, 92, 80, 84, 70, 69, 76, 89, 81 }, { 74, 81, 72, 94, 73, 82, 89, 96, 77, 88 }},
							{{ 92, 90, 88, 96, 75, 70, 53, 68, 91, 55 }, { 100, 80, 86, 74, 95, 93, 68, 79, 80, 88 }, { 83, 88, 96, 72, 79, 88, 75, 90, 99, 92}} };


	// 각 반별 과목별 평균
	
	for (int cls = 0; cls < CLASS; cls++)
	{
		for (int subj = 0; subj < SUB_NUM; subj++)
		{
			int sum = 0;
			for (int student = 0; student < STUDENT_NUM; student++)
				sum += scores[cls][subj][student];
			double avg = (double) sum / STUDENT_NUM;
			cout << cls + 1 << "반 " << Name[subj] << "과목의 평균은 " << avg << endl;
		}
	}
	

	// 과목별 전체 평균

	for (int subj = 0; subj < SUB_NUM; subj++)
	{
		int sum = 0;
		for (int cls = 0; cls < CLASS; cls++)
		{
			for (int student = 0; student < STUDENT_NUM; student++)
				sum += scores[cls][subj][student];
		}
		double avg = (double) sum / (CLASS * STUDENT_NUM);
		cout << Name[subj] << "과목의 평균은 " << avg << endl;
	}
}