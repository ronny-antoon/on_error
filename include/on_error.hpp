#ifndef ON_ERROR_HPP
#define ON_ERROR_HPP

#include <esp_err.h>
#include <esp_log.h>

#define ON_ERR_PRINT(esp_err, format, ...)                                 \
    do                                                                     \
    {                                                                      \
        if (esp_err != ESP_OK)                                             \
        {                                                                  \
            ESP_LOGE(__FILE__, "[%d] - " format, __LINE__, ##__VA_ARGS__); \
        }                                                                  \
    } while (0)

#define ON_ERR_PRINT_RETURN(esp_err, ret, format, ...)                     \
    do                                                                     \
    {                                                                      \
        if (esp_err != ESP_OK)                                             \
        {                                                                  \
            ESP_LOGE(__FILE__, "[%d] - " format, __LINE__, ##__VA_ARGS__); \
            return ret;                                                    \
        }                                                                  \
    } while (0)

#define ON_NULL_PRINT(ptr, format, ...)                                    \
    do                                                                     \
    {                                                                      \
        if (ptr == NULL)                                                   \
        {                                                                  \
            ESP_LOGE(__FILE__, "[%d] - " format, __LINE__, ##__VA_ARGS__); \
        }                                                                  \
    } while (0)

#define ON_NULL_PRINT_RETURN(ptr, ret, format, ...)                        \
    do                                                                     \
    {                                                                      \
        if (ptr == nullptr)                                                \
        {                                                                  \
            ESP_LOGE(__FILE__, "[%d] - " format, __LINE__, ##__VA_ARGS__); \
            return ret;                                                    \
        }                                                                  \
    } while (0)

#endif // ON_ERROR_HPP