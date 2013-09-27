						CodeStyle

Coding practices should be in place to maintain a consistancy among software projects to enforce a disciplines which improves the quality of software, improves reuseability due to more generic interfaces and good documentation, results in software with fewer bugs which is easier to use and maintain.

File Names:
There should be one include file for each source code file. Each include file should describe a single class or tightly integrated set of classes. The general guideline is for include (.h and .hpp) files to contain definitions and NOT instantiations. Thus the include file can be used in multiple files. The source file (.C or .cpp) defines code which when compiled gets loaded into memory. It instantiates definitions defined in the include file. For example, a class definition would be contained in the ".hpp" include file. A global variable would be instantiated in the ".cpp" file and NOT the ".hpp" file. This is because the global variable would be defined more than once if the include file was used more than once. An "extern" statement is appropriate for an include file as it does not declare memory for the variable but just recognises its existance.
File name should reflect the class name. While the class name typically starts with a capital letter, the include file and source files typically begin with lower case letters. i.e. file classBase.hpp will contain the definition of ClassBase{} and classBase.cpp will contain the source code to it's functions.
Class names should follow the following format: CXxClassID where "Xx" refers to the component. (i.e. Mn main, Fm File manager, Cp command processor) The first character of each word shall be capitalized. Leave off the "C" prefix when naming the file.
When referring to an include file within either another include file or source file, do NOT include the full path. This avoids portability problems created by operating system dependent methods of referencing directory paths. Use compiler command line flags to include the path. (i.e. -I/path-name)
Use double quotes ("") for all project include files and angle chevrons (<>) for include files provided by the operating system or compiler.
If burning ISO CD's, remember it is limited to file names of up to 30 characters.
To ease use with scripts and make files, file names (and directory paths) should not contain blanks, parentheses "(", or crazy characters not supported by a majority of operating systems.

File formats:
Line termination: For cross platform development, keep the "^M" line terminator out of files. They can be removed by the following:
Command: dos2unix filename.cpp
In vim: :1,$ s/{ctrl-V}{ctrl-M}//
The "^M" can be kept out of the file using CM file property directives: svn propset svn:eol-style LF filename 
For more see the YoLinux.com Subversion tutorial.
If using MS/Visual studio, add a blank line at the end of the file with at least one blank space as this IDE may remove the perceived Unix "end-of-file" marker (ctrl-D). For more see the YoLinux.com MS/Visual C++ best practices guide.

File headers:
File headers should include copyright statements, distribution licensing references and reflect corporate practices. For example, if source code is released under the GNU license it should be stated as such. If the file contains corporate proprietary material, it should be stated as such. The segragation of such code into separate files is very important if the licensing, release practices for the file or copyrights are different.
Comments shall be placed at the top of each file stating the name of the file and comments on the file contents. Comments should be directed towards the users of the class contained in the file. 
