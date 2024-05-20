#include <iostream>
using namespace std;

#include "HeaderAnak.h"
#include "HeaderIbu.h"

int main() {
	ibu* varIbu = new ibu("dini");
	ibu* varIbu2 = new ibu("novi");
	anak* varAnak1= new anak("tono");
	anak* varAnak2 = new anak("rini");
	anak* varAna3 = new anak("Dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varibu2->tambahAnak(varAnak3);
	varibu2->tambahAnak(varAnak1);



