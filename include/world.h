#ifndef WORLD_H
#define WORLD_H

#include <array>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib> 
#include <ctime> 
#include <glm/glm.hpp>
#include "Vertex.h"
#include "SOM.h"
#include "BounderVoxel.h"

struct World {

    std::vector<Vertex> square;
    std::vector<unsigned int> squ_indices;
    std::vector<Vertex> tri;
    std::vector<Vertex> cube;
    std::vector<Vertex> voxelBall;
    std::vector<Vertex> lattice_square_four_edges;
};

void create_world(VoxData_b* bounderVoxelData, int bounderNum,int* numVoxelFace);
void destroy_world();
void renew_world();
// extern int voxelBallPointNum;
extern struct World world;

#endif