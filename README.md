# ft_printf
<img alt="ft_printf" src="https://img.shields.io/static/v1?label=ft_printf&message=100+/+125&color=gree&style=plastic"/>

# Project
ft_printf is one of the three project in the 42 program second circle. It aims to introduce the students to the standard C functions ***printf*** by writing a library that contains their own version.

# Constraints
According to the subject there only one contraint for this project:
*  The whole files of the projects need to follow 42 norm ([Link](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf))

# Subject Flags
The project can be devided in 2 parts:

## Part 1 - Mandatory flags
For the mandatory part of the project, there are 9 flags to be handle:
|    Name    | Description | Mark |
|:----------:|      --     |:----:|
| **%c**  | Prints a single character. | :white_check_mark: |
| **%s**  | Prints a string (as defined by the common C convention). | :white_check_mark: |
| **%p**  | The void * pointer argument has to be printed in hexadecimal format. | :white_check_mark: |
| **%d**  | Prints a decimal (base 10) number. | :white_check_mark: |
| **%i**  | Prints an integer in base 10. | :white_check_mark: |
| **%u**  | Prints an unsigned decimal (base 10) number. | :white_check_mark: |
| **%x**  | Prints a number in hexadecimal (base 16) lowercase format. | :white_check_mark: |
| **%X**  | Prints a number in hexadecimal (base 16) uppercase format. | :white_check_mark: |
| **%%**  | Prints a percent sign. | :white_check_mark: |

## Part 2 - Bonus flags
For the bonus part of the project there, are 6 "flags" to be handle:
|    Name    | Description | Mark |
|:----------:|      --     |:----:|
| **%-**  | Left justify. | :x: |
| **%0**  | Field is padded with 0's instead of blanks. | :x: |
| **%.**  | The precision is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted. | :x: |
| **%#**  | Used with another flag to modify the way argument are print. | :x: |
| **"% "**  | If no sign is going to be written, a blank space is inserted before the value. | :x: |
| **%+**  | Forces to preceed the result with a plus or minus sign (+ or -) even for positive numbers. | :x: | 

# Usage

``make`` to compile.

``clean`` to clean all compiled files without the library file.

``fclean`` to clean all compiled files with the library file.

``re`` to fclean then make.
