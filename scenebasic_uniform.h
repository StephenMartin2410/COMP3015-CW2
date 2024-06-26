#ifndef SCENEBASIC_UNIFORM_H
#define SCENEBASIC_UNIFORM_H

#include "helper/scene.h"
#include <glad/glad.h>
#include "helper/glslprogram.h"
#include "helper/plane.h"
#include "helper/objmesh.h"
#include "glm/glm.hpp"

class SceneBasic_Uniform : public Scene
{
private:
    GLSLProgram prog, shaderProg, noiseProg;
    Plane plane;
    void setMatrices();
    std::unique_ptr<ObjMesh> mesh;
    void compile();
    GLuint buildingTexture;

    float tPrev;

public:
    SceneBasic_Uniform();

    void inputRotate(bool, bool, bool, bool);
    void inputMovement(bool, bool);
    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif // SCENEBASIC_UNIFORM_H
