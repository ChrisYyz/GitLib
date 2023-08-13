#include <gui/desktop.h>

using namespace myos;
using namespace myos::common;
using namespace myos::gui;

Desktop::Desktop(int32_t w, int32_t h, uint8_t r, uint8_t g, uint8_t b)
: CompositeWidget(0,0,0,w,h,r,g,b),
MouseEventHandler()
{
    mouseX = w/2;
    mouseY = h/2;

}

Desktop::~Desktop(){

}

void Desktop::Draw(GraphicsContext* gc){
    CompositeWidget::Draw(gc);
    
    for(int i = 0; i < 4; i++){
        gc->PutPixel(mouseX-i, mouseY, 0xFF, 0xFF, 0xFF);
        gc->PutPixel(mouseX+i, mouseY, 0xFF, 0xFF, 0xFF);
        gc->PutPixel(mouseX, mouseY-i, 0xFF, 0xFF, 0xFF);
        gc->PutPixel(mouseX, mouseY+i, 0xFF, 0xFF, 0xFF);
    }
}
void Desktop::OnMouseDown(uint8_t button){
    CompositeWidget::OnMouseDown(mouseX, mouseY, button);
}
void Desktop::OnMouseUp(uint8_t button){
    CompositeWidget::OnMouseUp(mouseX, mouseY, button);
}
void Desktop::OnMouseMove(int x, int y){

    //x /= 4;
   // y /= 4;

    int32_t newMouseX = mouseX + x;
    if(newMouseX < 0){newMouseX = 0;}
    if(newMouseX >= w){newMouseX = w - 1;}

    int32_t newMouseY = mouseY + y;
    if(newMouseY < 0){newMouseY = 0;}
    if(newMouseY >= h){newMouseY = h - 1;}    

    CompositeWidget::OnMouseMove(mouseX, mouseY, newMouseX, newMouseY);

    mouseX = newMouseX;
    mouseY = newMouseY;
}