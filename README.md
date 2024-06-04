# on_error Component

## Description

The `on_error` component provides macros for handling errors and logging error messages in ESP32 applications.

## Installation

### Installation

To use the `on_error` component framework in your ESP-IDF project, follow these steps:

1. Clone or download the `on_error` repository.
2. Copy the `on_error` directory into your ESP-IDF project's `components` directory.
3. Configure the component in your `CMakeLists.txt` file.

OR

- Add dependencies to idf_component.yml in your project/main directory
```
dependencies:
  ronny-antoon/on_error:
    version: "^0.1.0"
```
## Usage

The `on_error` component provides the following macros:

- `ON_ERR_PRINT(esp_err, format, ...)`: Prints an error message if an ESP error occurs.
- `ON_ERR_PRINT_RETURN(esp_err, ret, format, ...)`: Prints an error message if an ESP error occurs and returns a value.
- `ON_NULL_PRINT(ptr, format, ...)`: Prints an error message if a pointer is null.
- `ON_NULL_PRINT_RETURN(ptr, ret, format, ...)`: Prints an error message if a pointer is null and returns a value.

### Example

```cpp
#include "on_error.hpp"

void example_function() {
    esp_err_t err = some_function();
    ON_ERR_PRINT_RETURN(err, ESP_FAIL, "Failed to perform some_function()");
    
    SomeType* ptr = get_pointer();
    ON_NULL_PRINT_RETURN(ptr, NULL, "Pointer is NULL");

    // Continue with the rest of the function
}
```

## License

The `metric_tracker` component framework is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Links

- [GitHub Repository](https://github.com/ronny-antoon/on_error)
- [Espressif IDF Registry](https://components.espressif.com/components/ronny-antoon/on_error)

