#ifndef GUI_H
#define GUI_H
#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>
#include<iostream>
using namespace std;

void imgui_init(GLFWwindow *window);
void imgui_create(int iter, float neighbor, float n_learning_rate, int *go, bool *stop);
void imgui_end();

#endif