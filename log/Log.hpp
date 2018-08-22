//
//  Log.hpp
//  LYP_XJJ
//
//  Created by lyp on 2018/8/22.
//  Copyright © 2018年 lyp. All rights reserved.
//

#ifndef Log_hpp
#define Log_hpp

#include <string>

class Log {
private:
    std::string errorFile;
    std::string warnFile;
    std::string debugFile;
    std::string traceFile;
public:
    void logger(const std::string& fileName, const std::string& funcFile, int line, int logLevel, const std::string& content);
};


#endif /* Log_hpp */
