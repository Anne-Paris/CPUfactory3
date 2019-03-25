CPUfactory (v3.0.23)
####################
:Course: COC2325 - Computer Architecture and Machine Language
:School: Austin Community College
:Email: rblack@austincc.edu
:Documentation: http://rblack42.github.io/CPUfactory3

|travis-build| |license|

This project builds a modular CPU factory, used to construct simulations of
digital systems. The factory can build simple circuits all the way up to a full
CPU simulation.

This is not a project designed to do real circuit simulation. Instead, it
simplifies concepts for students who have a basic background in programming,
but not in digital design. Example circuits are provide in the kit to get
stydents started in building their own systems. 

Dependencies
************

    * C++11 - tested using GNU G++, Clang on PC, Mac, Linux

    * OpenGL/GLUT (FreeGLUT_ on PC)  - GUI interface

    * Catch2_ - unit testing framework

    * Valgrind_ - Profiline and code analysis

    * GCOV_ - test coverage tool

    * Travis-CI_ - CI testing

    * CPPLint_ - style checking


..  _Valgrind:      http://valgrind.org/
..  _Catch2:        https://github.com/catchorg/Catch2
..  _CPPlint:       https://github.com/cpplint/cpplint
..  _FreeGLUT:      http://freeglut.sourceforge.net/
..  _Travis-CI:     https://travis-ci.org/
..  _GCOV:          https://gcc.gnu.org/onlinedocs/gcc/Gcov.html

..  |travis-build| image:: https://travis-ci.org/rblack42/CPUfactory3.svg?branch=master
    :alt: Build badge from Travis-CI

..  |license| image:: https://img.shields.io/badge/License-BSD%203--Clause-blue.svg
    :alt: BSD 3-Clause License






















































































































