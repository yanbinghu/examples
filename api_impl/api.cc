// 来源：公众号编程珠玑
// 作者：守望先生 https://www.yanbinghu.com
#include "api.h"
class Param::ParamImpl{
  public:
    int num;
    std::string str;
    std::string ext;
};
Param::Param(){
    param_impl_.reset(new ParamImpl);
}
Param::~Param() = default;
void Param::SetNum(int num){
    param_impl_->num = num;
}
int Param::GetNum() const {
    return  param_impl_->num;
}
void Param::SetStr(const std::string &str){
    param_impl_->str = str;
}
void Param::SetExt(const std::string &ext){
    param_impl_->ext = ext;
}
std::string Param::GetStr() const {
    return param_impl_->str;
}
std::string Param::GetExt() const {
    return param_impl_->ext;
}
void TestFun(const Param &param){
    std::cout<<"num:"<<param.GetNum()<<" str:"<<param.GetStr().c_str()<<" ext:"<<param.GetExt().c_str()<<std::endl;
}
