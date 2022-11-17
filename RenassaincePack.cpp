#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <fstream>
#include <stdio.h>
#include <Windows.h>
#include <tchar.h>
#include <TlHelp32.h>
#include <vector>
#include <stdlib.h>
#include <winternl.h>
#include <set>
#include "stdafx.h"
#include "proc.h"
#include <zlib.h>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;
using std::cin;

int main()
{
	cout << "Pick a mode: 1 = texture mode, 2 = mesh mode (NOT WORKING AS OF NOW)" << endl;
	int mode;
	cin >> mode;
	ifstream is;
	ofstream os;
	if (mode == 1)
	{
		
		
		struct{
			byte DDSHeader[0x80] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 00, 00, 00, 0x07, 0x10, 00, 00, 00, 0x08, 00, 00, 00, 0x08, 00, 00, 00, 00, 0x20, 00, 00, 00, 00, 00, 0x01, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 0x20, 00, 00, 00, 0x04, 00, 00, 00, 0x44, 0x58, 0x54, 0x31, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00 };
			int offset = 0x1D2FCCF2;
			char length[0x20007F];
		} bailey_brick_b;
		struct {
			byte DDSHeader[0x85] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 00, 00, 00, 0x07, 0x10, 00, 00, 0x80, 00, 00, 00, 0x80, 00, 00, 00, 00, 0x40, 00, 00, 00, 00, 00, 0x01, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 0x20, 00, 00, 00, 0x04, 00, 00, 00, 0x44, 0x58, 0x54, 0x35, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00 };
			int offset = 0x1652CE0;
			char length[0x407F];
		} embers;
		struct {
			byte DDSHeader[0x80] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 00, 00, 00, 0x07, 0x10, 00, 00, 0x80, 00, 00, 00, 0x80, 00, 00, 00, 00, 0x20, 00, 00, 00, 00, 00, 0x01, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 0x20, 00, 00, 00, 0x04, 00, 00, 00, 0x44, 0x58, 0x54, 0x31, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00 };
			int offset = 0x165D7BB;
			char length[0x207F];
		} embersintense;
		struct {
			byte DDSHeader[0x80] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 0x00, 0x00, 0x00, 0x07, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x44, 0x58, 0x54, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
			int offset = 0x25EC0943;
			char length[0x1007F];
		} billboard_b;
		struct {
			byte DDSHeader[0x80] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 0x00, 0x00, 0x00, 0x07, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x44, 0x58, 0x54, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
			int offset = 0x4C094707;
			char length[0x807F];
		} bugspray;
		struct {
			byte DDSHeader[0x80] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 0x00, 0x00, 0x00, 0x07, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x44, 0x58, 0x54, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
			int offset = 0x4DB4A697;
			char length[0x20000];
		} cranemetalfloor;
		struct {
			byte DDSHeader[0x80] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 0x00, 0x00, 0x00, 0x07, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x44, 0x58, 0x54, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
			int offset = 0x4DB7514F;
			char length[0x40000];
		} cranemetalfloor_nrm;
		struct {
			byte DDSHeader[0x80] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 0x00, 0x00, 0x00, 0x07, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x44, 0x58, 0x54, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
			int offset = 0x4DBCA6BF;
			char length[0x40000];
		} cranemetalfloor_spc;
		
		cout << "Choose a texture you want to extract." << endl;
		cout << "Available textures:" << endl;
		cout << "bailey_brick_b" << endl << "repack_bailey_brick_b" << endl << "embers" << endl << "embersintense" << endl << "billboard_b" << endl << "repack_billboard_b" << endl << "bugspray" << endl << "repack_bugspray" << endl << "cranemetalfloor" << endl << "repack_cranemetalfloor" << endl << "cranemetalfloor_nrm" << endl << "repack_cranemetalfloor_nrm" << endl;
		std::string answer;
		cin >> answer;
		if (answer == "bailey_brick_b")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open(file3, std::ios::binary);
			os.write(reinterpret_cast<char*>(&bailey_brick_b.DDSHeader), sizeof(bailey_brick_b.DDSHeader));
			is.seekg((uint64_t)bailey_brick_b.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&bailey_brick_b.length), sizeof(bailey_brick_b.length));
			os.write(reinterpret_cast<char*>(&bailey_brick_b.length), sizeof(bailey_brick_b.length));
		}
		if (answer == "embers")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open(file3, std::ios::binary);
			os.write(reinterpret_cast<char*>(&embers.DDSHeader), sizeof(embers.DDSHeader));
			is.seekg((uint64_t)embers.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&embers.length), sizeof(embers.length));
			os.write(reinterpret_cast<char*>(&embers.length), sizeof(embers.length));
		}
		if (answer == "embersintense")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open(file3, std::ios::binary);
			os.write(reinterpret_cast<char*>(&embersintense.DDSHeader), sizeof(embersintense.DDSHeader));
			is.seekg((uint64_t)embersintense.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&embersintense.length), sizeof(embersintense.length));
			os.write(reinterpret_cast<char*>(&embersintense.length), sizeof(embersintense.length));
		}
		if (answer == "billboard_b")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open(file3, std::ios::binary);
			os.write(reinterpret_cast<char*>(&billboard_b.DDSHeader), sizeof(billboard_b.DDSHeader));
			is.seekg((uint64_t)billboard_b.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&billboard_b.length), sizeof(billboard_b.length));
			os.write(reinterpret_cast<char*>(&billboard_b.length), sizeof(billboard_b.length));
		}
		if (answer == "bugspray")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open(file3, std::ios::binary);
			os.write(reinterpret_cast<char*>(&bugspray.DDSHeader), sizeof(bugspray.DDSHeader));
			is.seekg((uint64_t)bugspray.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&bugspray.length), sizeof(bugspray.length));
			os.write(reinterpret_cast<char*>(&bugspray.length), sizeof(bugspray.length));
		}
		if (answer == "repack_bailey_brick_b")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open("customrpack.rpack", std::ios::binary);
			char buf[0x74BF33C];
			for (int ja1 = 0; ja1 < 4; ja1++)
			{
				is.read(reinterpret_cast<char*>(&buf), sizeof(buf));
				os.write(reinterpret_cast<char*>(&buf), sizeof(buf));
			}
			char buf1leftovers[0x03];
			is.read(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			os.write(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			is.close();
			is.open(file3, std::ios::binary);
			is.seekg(0x80, std::ios::beg);
			char baileybrickbnewlength[0x200000];
			is.read(reinterpret_cast<char*>(&baileybrickbnewlength), sizeof(baileybrickbnewlength));
			os.write(reinterpret_cast<char*>(&baileybrickbnewlength), sizeof(baileybrickbnewlength));
			is.close();
			is.open(file, std::ios::binary);
			is.seekg(0x1D4FCCF3, std::ios::beg);
			char buf2[0x64BDE23];
			for (int ja2 = 0; ja2 < 32; ja2++)
			{
				is.read(reinterpret_cast<char*>(&buf2), sizeof(buf2));
				os.write(reinterpret_cast<char*>(&buf2), sizeof(buf2));
			}
			char buf2leftovers[0x10];
			is.read(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
			os.write(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
		}
		if (answer == "repack_billboard_b")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open("customrpack.rpack", std::ios::binary);
			char buf[0x97B0250];
			for (int ja3 = 0; ja3 < 4; ja3++)
			{
				is.read(reinterpret_cast<char*>(&buf), sizeof(buf));
				os.write(reinterpret_cast<char*>(&buf), sizeof(buf));
			}
			char buf1leftovers[0x03];
			is.read(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			os.write(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			is.close();
			is.open(file3, std::ios::binary);
			is.seekg(0x80, std::ios::beg);
			char billboardbnewlength[0x10000];
			is.read(reinterpret_cast<char*>(&billboardbnewlength), sizeof(billboardbnewlength));
			os.write(reinterpret_cast<char*>(&billboardbnewlength), sizeof(billboardbnewlength));
			is.close();
			is.open(file, std::ios::binary);
			is.seekg(0x25ED0943, std::ios::beg);
			char buf2[0x606F441];
			for (int ja2 = 0; ja2 < 32; ja2++)
			{
				is.read(reinterpret_cast<char*>(&buf2), sizeof(buf2));
				os.write(reinterpret_cast<char*>(&buf2), sizeof(buf2));
			}
			//char buf2leftovers[0x10];
			//is.read(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
			//os.write(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
		}
		if (answer == "repack_bugspray")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open("customrpack.rpack", std::ios::binary);
			char buf[0x4C09470];
			for (int ja3 = 0; ja3 < 16; ja3++)
			{
				is.read(reinterpret_cast<char*>(&buf), sizeof(buf));
				os.write(reinterpret_cast<char*>(&buf), sizeof(buf));
			}
			char buf1leftovers[0x07];
			is.read(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			os.write(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			is.close();
			is.open(file3, std::ios::binary);
			is.seekg(0x80, std::ios::beg);
			char billboardbnewlength[0x7FFF];
			is.read(reinterpret_cast<char*>(&billboardbnewlength), sizeof(billboardbnewlength));
			os.write(reinterpret_cast<char*>(&billboardbnewlength), sizeof(billboardbnewlength));
			is.close();
			is.open(file, std::ios::binary);
			is.seekg(0x4C09C706, std::ios::beg);
			char buf2[0x4D60E52];
			for (int ja2 = 0; ja2 < 32; ja2++)
			{
				is.read(reinterpret_cast<char*>(&buf2), sizeof(buf2));
				os.write(reinterpret_cast<char*>(&buf2), sizeof(buf2));
			}
			char buf2leftovers[0x1D];
			is.read(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
			os.write(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
		}
		if (answer == "cranemetalfloor")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open(file3, std::ios::binary);
			os.write(reinterpret_cast<char*>(&cranemetalfloor.DDSHeader), sizeof(cranemetalfloor.DDSHeader));
			is.seekg((uint64_t)cranemetalfloor.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&cranemetalfloor.length), sizeof(cranemetalfloor.length));
			os.write(reinterpret_cast<char*>(&cranemetalfloor.length), sizeof(cranemetalfloor.length));
		}
		if (answer == "repack_cranemetalfloor")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open("customrpack.rpack", std::ios::binary);
			char buf[0x4DB4A69];
			for (int ja1 = 0; ja1 < 16; ja1++)
			{
				is.read(reinterpret_cast<char*>(&buf), sizeof(buf));
				os.write(reinterpret_cast<char*>(&buf), sizeof(buf));
			}
			char buf1leftovers[0x07];
			is.read(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			os.write(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			is.close();
			is.open(file3, std::ios::binary);
			is.seekg(0x80, std::ios::beg);
			char baileybrickbnewlength[0x20000];
			is.read(reinterpret_cast<char*>(&baileybrickbnewlength), sizeof(baileybrickbnewlength));
			os.write(reinterpret_cast<char*>(&baileybrickbnewlength), sizeof(baileybrickbnewlength));
			is.close();
			is.open(file, std::ios::binary);
			is.seekg(0x4DB6A697, std::ios::beg);
			char buf2[0x4C8A756];
			for (int ja2 = 0; ja2 < 32; ja2++)
			{
				is.read(reinterpret_cast<char*>(&buf2), sizeof(buf2));
				os.write(reinterpret_cast<char*>(&buf2), sizeof(buf2));
			}
			char buf2leftovers[0x0C];
			is.read(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
			os.write(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
		}
		if (answer == "cranemetalfloor_nrm")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open(file3, std::ios::binary);
			os.write(reinterpret_cast<char*>(&cranemetalfloor_nrm.DDSHeader), sizeof(cranemetalfloor_nrm.DDSHeader));
			is.seekg((uint64_t)cranemetalfloor_nrm.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&cranemetalfloor_nrm.length), sizeof(cranemetalfloor_nrm.length));
			os.write(reinterpret_cast<char*>(&cranemetalfloor_nrm.length), sizeof(cranemetalfloor_nrm.length));
		}
		if (answer == "repack_cranemetalfloor_nrm")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open("customrpack.rpack", std::ios::binary);
			char buf[0x4DB7514];
			for (int ja1 = 0; ja1 < 16; ja1++)
			{
				is.read(reinterpret_cast<char*>(&buf), sizeof(buf));
				os.write(reinterpret_cast<char*>(&buf), sizeof(buf));
			}
			char buf1leftovers[0x0F];
			is.read(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			os.write(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			is.close();
			is.open(file3, std::ios::binary);
			is.seekg(0x80, std::ios::beg);
			char baileybrickbnewlength[0x40000];
			is.read(reinterpret_cast<char*>(&baileybrickbnewlength), sizeof(baileybrickbnewlength));
			os.write(reinterpret_cast<char*>(&baileybrickbnewlength), sizeof(baileybrickbnewlength));
			is.close();
			is.open(file, std::ios::binary);
			is.seekg(0x4DBB514F, std::ios::beg);
			char buf2[0x4C88200];
			for (int ja2 = 0; ja2 < 32; ja2++)
			{
				is.read(reinterpret_cast<char*>(&buf2), sizeof(buf2));
				os.write(reinterpret_cast<char*>(&buf2), sizeof(buf2));
			}
			char buf2leftovers[0x14];
			is.read(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
			os.write(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
		}
		if (answer == "cranemetalfloor_spc")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open(file3, std::ios::binary);
			os.write(reinterpret_cast<char*>(&cranemetalfloor_spc.DDSHeader), sizeof(cranemetalfloor_spc.DDSHeader));
			is.seekg((uint64_t)cranemetalfloor_spc.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&cranemetalfloor_spc.length), sizeof(cranemetalfloor_spc.length));
			os.write(reinterpret_cast<char*>(&cranemetalfloor_spc.length), sizeof(cranemetalfloor_spc.length));
		}
		if (answer == "repack_cranemetalfloor_spc")
		{
			string file = "common_textures_0_pc.rpack";
			string file3 = "extractionrpack.dds";
			is.open(file, std::ios::binary);
			os.open("customrpack.rpack", std::ios::binary);
			char buf[0x4DBCA6B];
			for (int ja1 = 0; ja1 < 16; ja1++)
			{
				is.read(reinterpret_cast<char*>(&buf), sizeof(buf));
				os.write(reinterpret_cast<char*>(&buf), sizeof(buf));
			}
			char buf1leftovers[0x0F];
			is.read(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			os.write(reinterpret_cast<char*>(&buf1leftovers), sizeof(buf1leftovers));
			is.close();
			is.open(file3, std::ios::binary);
			is.seekg(0x80, std::ios::beg);
			char baileybrickbnewlength[0x40000];
			is.read(reinterpret_cast<char*>(&baileybrickbnewlength), sizeof(baileybrickbnewlength));
			os.write(reinterpret_cast<char*>(&baileybrickbnewlength), sizeof(baileybrickbnewlength));
			is.close();
			is.open(file, std::ios::binary);
			is.seekg(0x4DC0A6BF, std::ios::beg);
			char buf2[0x4C85755];
			for (int ja2 = 0; ja2 < 32; ja2++)
			{
				is.read(reinterpret_cast<char*>(&buf2), sizeof(buf2));
				os.write(reinterpret_cast<char*>(&buf2), sizeof(buf2));
			}
			char buf2leftovers[0x04];
			is.read(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
			os.write(reinterpret_cast<char*>(&buf2leftovers), sizeof(buf2leftovers));
		}
	}
	
	/*
	if (mode == 2)
	{
		string file = "common_meshes_PC.rpack";
		string file3 = "extractionrpack.msh";
		struct {
			byte DDSHeader[0x80] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 00, 00, 00, 0x07, 0x10, 00, 00, 00, 0x08, 00, 00, 00, 0x08, 00, 00, 00, 00, 0x20, 00, 00, 00, 00, 00, 0x01, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 0x20, 00, 00, 00, 0x04, 00, 00, 00, 0x44, 0x58, 0x54, 0x31, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00 };
			int offset = 0x1D2FCCF3;
			char length[0x200000];
		} bailey_brick_b;
		struct {
			byte DDSHeader[0x85] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 00, 00, 00, 0x07, 0x10, 00, 00, 0x80, 00, 00, 00, 0x80, 00, 00, 00, 00, 0x40, 00, 00, 00, 00, 00, 0x01, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 0x20, 00, 00, 00, 0x04, 00, 00, 00, 0x44, 0x58, 0x54, 0x35, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00 };
			int offset = 0x1652CE0;
			char length[0x4070];
		} embers;
		struct {
			byte DDSHeader[0x80] = { 0x44, 0x44, 0x53, 0x20, 0x7C, 00, 00, 00, 0x07, 0x10, 00, 00, 0x80, 00, 00, 00, 0x80, 00, 00, 00, 00, 0x20, 00, 00, 00, 00, 00, 0x01, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 0x20, 00, 00, 00, 0x04, 00, 00, 00, 0x44, 0x58, 0x54, 0x31, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00 };
			int offset = 0x165D7BB;
			char length[0x2070];
		} embersintense;
		cout << "Choose a texture you want to extract." << endl;
		cout << "Available textures:" << endl;
		cout << "bailey_brick_b" << endl << "embers" << endl << "embersintense" << endl;
		std::string answer;
		cin >> answer;
		if (answer == "bailey_brick_b")
		{
			os.write(reinterpret_cast<char*>(&bailey_brick_b.DDSHeader), sizeof(bailey_brick_b.DDSHeader));
			is.seekg((uint64_t)bailey_brick_b.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&bailey_brick_b.length), sizeof(bailey_brick_b.length));
			os.write(reinterpret_cast<char*>(&bailey_brick_b.length), sizeof(bailey_brick_b.length));
		}
		if (answer == "embers")
		{
			os.write(reinterpret_cast<char*>(&embers.DDSHeader), sizeof(embers.DDSHeader));
			is.seekg((uint64_t)embers.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&embers.length), sizeof(embers.length));
			os.write(reinterpret_cast<char*>(&embers.length), sizeof(embers.length));
		}
		if (answer == "embersintense")
		{
			os.write(reinterpret_cast<char*>(&embersintense.DDSHeader), sizeof(embersintense.DDSHeader));
			is.seekg((uint64_t)embersintense.offset, std::ios::beg);
			is.read(reinterpret_cast<char*>(&embersintense.length), sizeof(embersintense.length));
			os.write(reinterpret_cast<char*>(&embersintense.length), sizeof(embersintense.length));
		}
	}
	*/
		is.close();
		os.close();
	system("pause");
	return 0;
}