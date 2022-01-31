// nothing to see here because for some reason cpp does not allow a 
// template declaration in the hpp file with function definition in
// the cpp files. Doing so causes a compilation error.

// This is due to the fact that .hpp files are only preprocessed during
// compilation while cpp files are entirely compiled. The compiler needs
// to make an accurate map of memory managment during compilation which
// is impossible in a template of undefined type.