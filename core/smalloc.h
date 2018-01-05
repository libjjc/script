#ifndef SCRIPT_CORE_SMALLOC_H
#define SCRIPT_CORE_SMALLOC_H

#include <stdio.h>

/**
 * @brief
 *  malloc 的替换版本，暂时只是包装一层而已
 * @param size
 *  表示需要申请的地址空间大小
 * @return 
 *  若申请成功则返回申请的地址，否则返回NULL
 */
void* smalloc(size_t size);

/**
 * @brief
 *  free 的替换版本，暂时只是包装一层而已
 * @param ptr
 *  需要释放的指针（内存地址)
 */
void sfree(void* ptr);
#endif//SCRIPT_CORE_SMALLOC_H