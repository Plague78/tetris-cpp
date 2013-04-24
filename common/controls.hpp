#ifndef CONTROLS_HPP
#define CONTROLS_HPP

void computeMatricesFromInputs(SDL_Window* window, Uint8* keyboardState);
glm::mat4 getViewMatrix();
glm::mat4 getProjectionMatrix();

#endif
