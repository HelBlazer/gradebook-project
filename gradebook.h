///marksheet is a struct which has marks for 5 subjects
typedef struct marksheet {
	float math;
	float english;
	float science;
	float social_science;
	float sec_lang;
} marksheet;

///record is a struct like a node in a linked list
///it has name, roll number, marks (marksheet) and pointer to next record
typedef struct record {
	char name[50];
	long long int rollNum;
	marksheet marks;
	struct record * next;
} record;

///gradebook is a wrapper struct for the head, i.e. pointer to a particular
///linked list/ gradebook
typedef struct gradebook {
	record * head;
} gradebook;