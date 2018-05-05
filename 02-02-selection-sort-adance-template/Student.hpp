//
//  Student.hpp
//  2-selection-sort-adance-template
//
//  Created by lyj on 2018/5/3.
//  Copyright © 2018 heronlyj. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>
#include <ostream>

using namespace std;

struct Student {
    string name;
    int source;
    
    bool operator<(const Student& otherStudent ) {
        
        return source != otherStudent.source
            ? source < otherStudent.source
            : name < otherStudent.name;
    }
    
    friend ostream& operator<<(ostream &os, Student &student) {
        os << "Student: " << student.name << " " << student.source << std::endl;
        return os;
    }
    
};

#endif /* Student_hpp */
