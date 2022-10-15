#ifndef RAWMODEL_H
#define RAWMODEL_H

#include <vector>
#include <glm/glm.hpp>
#include <iostream>
#include <string>

#include "Vertex.h"

typedef unsigned char  BYTE;

typedef struct InfData_t {
	int resolution[3];//inf size
	char sampleType[15];
	float voxelSize[3];
	char endian[10];
	float min[3];
	float max[3];
    int type; // 0 unsigned char, 1 float, 2 double
}InfData_t;

class RAWmodel{
public:
    RAWmodel();
    ~RAWmodel();
    void LoadFile(const char* infFileName,const char* rawFileName);

    InfData_t infdata;
    int*** voxelData; // 0 air, 1 bounder, 2 inside

    
private:
    bool LoadINFfile(const char* infFileName);
    void CreateVoxel();
    bool LoadRAWfile(const char*rawFileName);
    bool SetSampleType(const char* type);
    bool ReadRawFile(FILE *file);
    void SetVoxelNum();
    void checkComputerEndian();

    BYTE* uc_voxelData;
    float* f_voxelData;
    double* d_voxelData;

};

#endif