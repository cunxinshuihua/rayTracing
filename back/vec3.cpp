#include "vec3.h"
#include <iostream>
#include <cmath>
using namespace std;

template<typename T>
Vec3<T>& Vec3<T>::normalize() 
{ 
    T nor2 = length2(); 
    if (nor2 > 0) { 
        T invNor = 1 / sqrt(nor2); 
        x *= invNor, y *= invNor, z *= invNor;      
    } 
    return *this; 
} 
    
template<typename T>
Vec3<T> Vec3<T>::operator* (const T &f) const { 
    return Vec3<T>(x * f, y * f, z * f); 
} 
    
template<typename T>
Vec3<T> Vec3<T>::operator * (const Vec3<T> &v) const { 
    return Vec3<T>(x * v.x, y * v.y, z * v.z); 
} 
    
template<typename T>
T Vec3<T>::dot(const Vec3<T> &v) const { 
    return x * v.x + y * v.y + z * v.z; 
} 
    
template<typename T>
Vec3<T> Vec3<T>::operator - (const Vec3<T> &v) const { 
    return Vec3<T>(x - v.x, y - v.y, z - v.z); 
} 
    
template<typename T>
Vec3<T> Vec3<T>::operator + (const Vec3<T> &v) const { 
    return Vec3<T>(x + v.x, y + v.y, z + v.z); 
} 
    
template<typename T>
Vec3<T>& Vec3<T>::operator += (const Vec3<T> &v) { 
    x += v.x, y += v.y, z += v.z; 
    return *this; 
} 
    
template<typename T>
Vec3<T>& Vec3<T>::operator *= (const Vec3<T> &v) { 
    x *= v.x, y *= v.y, z *= v.z; 
    return *this; 
} 
    
template<typename T>
Vec3<T> Vec3<T>::operator - () const { 
    return Vec3<T>(-x, -y, -z); 
} 
    
template<typename T>
T Vec3<T>::length2() const { 
    return x * x + y * y + z * z; 
} 
    
template<typename T>
T Vec3<T>::length() const { 
    return sqrt(length2()); 
} 
    
template<typename T>
std::ostream& Vec3<T>::operator << (std::ostream &os) 
{ 
    os << "[" << x << " " << y << " " << z << "]"; 
    return os; 
} 

