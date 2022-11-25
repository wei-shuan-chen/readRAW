#include "Gui.h"

void imgui_init(GLFWwindow *window);
void imgui_create(int iter, float neighbor, float n_learning_rate, int *go, bool *stop);
void imgui_end();


void imgui_init(GLFWwindow *window){
    // GL 3.0 + GLSL 130
    const char* glsl_version = "#version 130";
    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    ImGui::StyleColorsLight();
    // Setup Platform/Renderer backends
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init(glsl_version);
}
void imgui_create(int iter, float neighbor, float n_learning_rate, int *go, bool *stop){
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    // ImGui::NewFrame();
    // ImGui::Begin("SOM_3D_voxel");
    // ImGui::Text("iter : %d",iter);
    // ImGui::Text("radius, %f", neighbor);
    // ImGui::Text("learning_rate, %f", n_learning_rate);
    // if(ImGui::Button("Start")) {
    //     (*go) = 1;
    //     cout << "start" << endl;
    //     // createThread();
    // }
    // if(ImGui::Button("Stop")) {
    //     (*stop) = !(*stop);
    //     cout << "temp" << endl;
    // }
    // ImGui::End();
}
void imgui_end(){
    				
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}
