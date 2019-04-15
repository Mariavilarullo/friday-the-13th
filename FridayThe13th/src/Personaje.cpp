#include "Personaje.h"
#include "Ventana.h"

Personaje::Personaje(const std::string& arch)
{
    this->tex.loadFromFile(arch);
    this->setTexture(this->tex);

    sf::Vector2f v1(100, 25);
    sf::Vector2f v2(125, 25);
    sf::Vector2f v3(125, 50);
    sf::Vector2f v4(100, 50);
    Obstaculo *o1= new Obstaculo(v1, v2, v3, v4);
    sf::Vector2f v5(50, 475);
    sf::Vector2f v6(70, 475);
    sf::Vector2f v7(70, 500);
    sf::Vector2f v8(50, 500);
    Obstaculo *o2= new Obstaculo(v5, v6, v7, v8);
    sf::Vector2f v9(0, 475);
    sf::Vector2f v10(20, 475);
    sf::Vector2f v11(20, 500);
    sf::Vector2f v12(0, 500);
    Obstaculo *o3= new Obstaculo (v9, v10, v11, v12);
    sf::Vector2f v13(75, 450);
    sf::Vector2f v14(95, 450);
    sf::Vector2f v15(95, 475);
    sf::Vector2f v16(75, 475);
    Obstaculo *o4= new Obstaculo(v13, v14, v15, v16);
    sf::Vector2f v17(50, 450);
    sf::Vector2f v18(70, 450);
    sf::Vector2f v19(70, 475);
    sf::Vector2f v20(50, 475);
    Obstaculo *o5= new Obstaculo(v17, v18, v19, v20);
    sf::Vector2f v21(0, 450);
    sf::Vector2f v22(20, 450);
    sf::Vector2f v23(20, 475);
    sf::Vector2f v24(0, 475);
    Obstaculo *o6= new Obstaculo(v21, v22, v23, v24);
    sf::Vector2f v25(75, 400);
    sf::Vector2f v26(95, 400);
    sf::Vector2f v27(95, 420);
    sf::Vector2f v28(75, 420);
    Obstaculo *o7= new Obstaculo(v25, v26, v27, v28);
    sf::Vector2f v29(50, 400);
    sf::Vector2f v30(70, 400);
    sf::Vector2f v31(70, 425);
    sf::Vector2f v32(50, 425);
    Obstaculo *o8= new Obstaculo(v29, v30, v31, v32);
    sf::Vector2f v33(125, 375);
    sf::Vector2f v34(145, 375);
    sf::Vector2f v35(145, 390);
    sf::Vector2f v36(125, 390);
    Obstaculo *o9= new Obstaculo(v33, v34, v35, v36);
    sf::Vector2f v37(50, 375);
    sf::Vector2f v38(70, 375);
    sf::Vector2f v39(70, 390);
    sf::Vector2f v40(50, 390);
    Obstaculo *o10= new Obstaculo(v37, v38, v39, v40);
    sf::Vector2f v41(100, 325);
    sf::Vector2f v42(120, 325);
    sf::Vector2f v43(120, 340);
    sf::Vector2f v44(100, 340);
    Obstaculo *o11= new Obstaculo(v41, v42, v43, v44);
    sf::Vector2f v45(25, 325);
    sf::Vector2f v46(45, 325);
    sf::Vector2f v47(45, 345);
    sf::Vector2f v48(25, 345);
    Obstaculo *o12= new Obstaculo(v45, v46, v47, v48);
    sf::Vector2f v49(50, 300);
    sf::Vector2f v50(70, 300);
    sf::Vector2f v51(70, 320);
    sf::Vector2f v52(50, 320);
    Obstaculo *o13= new Obstaculo(v49, v50, v51, v52);
    sf::Vector2f v53(175, 300);
    sf::Vector2f v54(195, 300);
    sf::Vector2f v55(195, 320);
    sf::Vector2f v56(175, 320);
    Obstaculo *o14= new Obstaculo(v53, v54, v55, v56);
    sf::Vector2f v57(100, 275);
    sf::Vector2f v58(120, 275);
    sf::Vector2f v59(120, 295);
    sf::Vector2f v60(100, 295);
    Obstaculo *o15= new Obstaculo(v57, v58, v59, v60);
    sf::Vector2f v61(25, 275);
    sf::Vector2f v62(45, 275);
    sf::Vector2f v63(45, 295);
    sf::Vector2f v64(25, 295);
    Obstaculo *o16= new Obstaculo(v61, v62, v63, v64);
    sf::Vector2f v65(150, 225);
    sf::Vector2f v66(170, 225);
    sf::Vector2f v67(170, 245);
    sf::Vector2f v68(150, 245);
    Obstaculo *o17= new Obstaculo(v65, v66, v67, v68);
    sf::Vector2f v69(100, 225);
    sf::Vector2f v70(120, 225);
    sf::Vector2f v71(120, 245);
    sf::Vector2f v72(100, 245);
    Obstaculo *o18= new Obstaculo(v69, v70, v71, v72);
    sf::Vector2f v73(25, 225);
    sf::Vector2f v74(45, 225);
    sf::Vector2f v75(45, 245);
    sf::Vector2f v76(25, 245);
    Obstaculo *o19= new Obstaculo(v73, v74, v75, v76);
    sf::Vector2f v77(0, 225);
    sf::Vector2f v78(20, 225);
    sf::Vector2f v79(20, 245);
    sf::Vector2f v80(0, 245);
    Obstaculo *o20= new Obstaculo(v77, v78, v79, v80);
    sf::Vector2f v81(225, 200);
    sf::Vector2f v82(245, 200);
    sf::Vector2f v83(245, 220);
    sf::Vector2f v84(225, 220);
    Obstaculo *o21= new Obstaculo(v81, v82, v83, v84);
    sf::Vector2f v85(25, 175);
    sf::Vector2f v86(45, 175);
    sf::Vector2f v87(45, 195);
    sf::Vector2f v88(25, 195);
    Obstaculo *o22= new Obstaculo(v85, v86, v87, v88);
    sf::Vector2f v89(0, 175);
    sf::Vector2f v90(20, 175);
    sf::Vector2f v91(20, 195);
    sf::Vector2f v92(0, 195);
    Obstaculo *o23= new Obstaculo(v89, v90, v91, v92);
    sf::Vector2f v93(175, 150);
    sf::Vector2f v94(195, 150);
    sf::Vector2f v95(195, 170);
    sf::Vector2f v96(175, 170);
    Obstaculo *o24= new Obstaculo(v93, v94, v95, v96);
    sf::Vector2f v97(150, 150);
    sf::Vector2f v98(170, 150);
    sf::Vector2f v99(170, 170);
    sf::Vector2f v100(150, 170);
    Obstaculo *o25= new Obstaculo(v97, v98, v99, v100);
    sf::Vector2f v101(75, 150);
    sf::Vector2f v102(95, 150);
    sf::Vector2f v103(95, 170);
    sf::Vector2f v104(75, 170);
    Obstaculo *o26= new Obstaculo(v101, v102, v103, v104);
    sf::Vector2f v105(200, 125);
    sf::Vector2f v106(220, 125);
    sf::Vector2f v107(220, 145);
    sf::Vector2f v108(200, 145);
    Obstaculo *o27= new Obstaculo(v105, v106, v107, v108);
    sf::Vector2f v109(25, 100);
    sf::Vector2f v110(45, 100);
    sf::Vector2f v111(45, 120);
    sf::Vector2f v112(25, 120);
    Obstaculo *o28= new Obstaculo(v109, v110, v111, v112);
    sf::Vector2f v113(125, 75);
    sf::Vector2f v114(145, 75);
    sf::Vector2f v115(145, 95);
    sf::Vector2f v116(125, 95);
    Obstaculo *o29= new Obstaculo(v113, v114, v115, v116);
    sf::Vector2f v117(0, 50);
    sf::Vector2f v118(20, 50);
    sf::Vector2f v119(20, 70);
    sf::Vector2f v120(0, 70);
    Obstaculo *o30= new Obstaculo(v117, v118, v119, v120);
    sf::Vector2f v121(100, 25);
    sf::Vector2f v122(120, 25);
    sf::Vector2f v123(120, 45);
    sf::Vector2f v124(100, 45);
    Obstaculo *o31= new Obstaculo(v121, v122, v123, v124);
    sf::Vector2f v125(175, 100);
    sf::Vector2f v126(195, 100);
    sf::Vector2f v127(195, 120);
    sf::Vector2f v128(175, 120);
    Obstaculo *o32= new Obstaculo(v125, v126, v127, v128);
    sf::Vector2f v129(0, 50);
    sf::Vector2f v130(20, 50);
    sf::Vector2f v131(20, 70);
    sf::Vector2f v132(0, 70);
    Obstaculo *o33= new Obstaculo(v129, v130, v131, v132);


    this->obstaculos.insert(o1);
    this->obstaculos.insert(o2);
    this->obstaculos.insert(o3);
    this->obstaculos.insert(o4);
    this->obstaculos.insert(o5);
    this->obstaculos.insert(o6);
    this->obstaculos.insert(o7);
    this->obstaculos.insert(o8);
    this->obstaculos.insert(o9);
    this->obstaculos.insert(o10);
    this->obstaculos.insert(o11);
    this->obstaculos.insert(o12);
    this->obstaculos.insert(o13);
    this->obstaculos.insert(o14);
    this->obstaculos.insert(o15);
    this->obstaculos.insert(o16);
    this->obstaculos.insert(o17);
    this->obstaculos.insert(o18);
    this->obstaculos.insert(o19);
    this->obstaculos.insert(o20);
    this->obstaculos.insert(o21);
    this->obstaculos.insert(o22);
    this->obstaculos.insert(o23);
    this->obstaculos.insert(o24);
    this->obstaculos.insert(o25);
    this->obstaculos.insert(o26);
    this->obstaculos.insert(o27);
    this->obstaculos.insert(o28);
    this->obstaculos.insert(o29);
    this->obstaculos.insert(o31);
    this->obstaculos.insert(o32);
    this->obstaculos.insert(o33);

}
void Personaje::setTex(const std::string& arch)
{
    this->tex.loadFromFile(arch);
    this->setTexture(this->tex);
}
bool Personaje::movimientoValido(double offsetx, double offsety)
{

    int px, py;
    //400, 550 / 375,525
    px=this->getPosition().x;
    py=this->getPosition().y;
    if(this->getPosition().x+offsetx<0 || this->getPosition().y+offsety<0 || this->getPosition().x+offsetx>375 || this->getPosition().y+offsety>525)
    {

        return false;
    }


    double xoff, yoff;
    xoff=px+offsetx;
    yoff=py+offsety;
    if(esObstaculo(xoff, yoff))
    {
        return false;
    }
           // printf("%d , %d \n",xo, yo);

    return true;
}
void Personaje::mover()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && this->movimientoValido(-2,0))
    {
        this->move(-2, 0);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)&& this->movimientoValido(2,0))
    {
        this->move(2, 0);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)&& this->movimientoValido(0,-2))
    {
        this->move(0, -2);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)&& this->movimientoValido(0,2))
    {
        this->move(0, 2);
    }
}
bool Personaje::esObstaculo(double x, double y)
{
    for (std::set<Obstaculo*>::iterator it=this->obstaculos.begin(); it!=this->obstaculos.end(); ++it)
    {
        if((x >=(*it)->getTres().x || x+20 >=(*it)->getTres().x) && (x<=(*it)->getUno().x || x+20<=(*it)->getUno().x)
        && (y>=(*it)->getCero().y || y+20>=(*it)->getCero().y) && (y<= (*it)->getTres().y || y+20<= (*it)->getTres().y))
        {

            return true;
        }
    }
return false;
}
Personaje::~Personaje()
{
    for(std::set<Obstaculo *>::iterator it=this->obstaculos.begin(); it!=this->obstaculos.end(); it++)
    {
        delete *it;
    }

    this->obstaculos.clear();
}
