module terrain.bindings;

alias void *SceneNode;
alias void *Bounds;
alias void *MeshObj;

extern(C):

SceneNode terr_createChildNode(float relX, float relY, SceneNode);
void terr_destroyNode(SceneNode);
Bounds terr_makeBounds(float minHeight, float maxHeight, float width, SceneNode);
void terr_killBounds(Bounds);
float terr_getSqCamDist(Bounds);
MeshObj terr_makeMesh(SceneNode,void*,int,float);
void terr_killMesh(MeshObj);

void terr_genData();
void terr_setupRendering();