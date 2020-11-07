#pragma once
#include<iostream>
#include<memory>
class Param{
public:
    void SetNum(int num);
    int GetNum() const;
    void SetStr(const std::string &str);
    std::string GetStr() const;
    void SetExt(const std::string &str);
    std::string GetExt() const;
    Param();
    ~Param();
  private:
    class ParamImpl;
    std::unique_ptr<ParamImpl> param_impl_;
};
void TestFun(const Param &param);
