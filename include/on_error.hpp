#ifndef ON_ERROR_HPP
#define ON_ERROR_HPP

#include <esp_err.h>
#include <esp_log.h>

/**
 * @brief Macro to print an error message if an ESP error occurs.
 *
 * @param esp_err The ESP error code.
 * @param format The format string for the error message.
 * @param ... Additional arguments for the format string.
 */
#define ON_ERR_PRINT(esp_err, format, ...)                                 \
    do                                                                     \
    {                                                                      \
        if (esp_err != ESP_OK)                                             \
        {                                                                  \
            ESP_LOGE(__FILE__, "[%d] - " format, __LINE__, ##__VA_ARGS__); \
        }                                                                  \
    } while (0)

/**
 * @brief Macro to print an error message if an ESP error occurs and return a value.
 *
 * @param esp_err The ESP error code.
 * @param ret The value to return if an error occurs.
 * @param format The format string for the error message.
 * @param ... Additional arguments for the format string.
 * @return ret The value to return if an error occurs.
 */
#define ON_ERR_PRINT_RETURN(esp_err, ret, format, ...)                     \
    do                                                                     \
    {                                                                      \
        if (esp_err != ESP_OK)                                             \
        {                                                                  \
            ESP_LOGE(__FILE__, "[%d] - " format, __LINE__, ##__VA_ARGS__); \
            return ret;                                                    \
        }                                                                  \
    } while (0)

/**
 * @brief Macro to print an error message if a pointer is null.
 *
 * @param ptr The pointer to check.
 * @param format The format string for the error message.
 * @param ... Additional arguments for the format string.
 */
#define ON_NULL_PRINT(ptr, format, ...)                                    \
    do                                                                     \
    {                                                                      \
        if (ptr == NULL)                                                   \
        {                                                                  \
            ESP_LOGE(__FILE__, "[%d] - " format, __LINE__, ##__VA_ARGS__); \
        }                                                                  \
    } while (0)

/**
 * @brief Macro to print an error message if a pointer is null and return a value.
 *
 * @param ptr The pointer to check.
 * @param ret The value to return if the pointer is null.
 * @param format The format string for the error message.
 * @param ... Additional arguments for the format string.
 * @return ret The value to return if the pointer is null.
 */
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
