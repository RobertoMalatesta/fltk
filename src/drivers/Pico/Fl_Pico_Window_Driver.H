//
// Definition of Pico Window interface
// for the Fast Light Tool Kit (FLTK).
//
// Copyright 2010-2016 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     https://www.fltk.org/COPYING.php
//
// Please see the following page on how to report bugs and issues:
//
//     https://www.fltk.org/bugs.php
//

/**
 \file Fl_Pico_Window_Driver.H
 \brief Definition of Pico Window interface.
 */

#ifndef FL_PICO_WINDOW_DRIVER_H
#define FL_PICO_WINDOW_DRIVER_H

#include "../../Fl_Window_Driver.H"


class FL_EXPORT Fl_Pico_Window_Driver : public Fl_Window_Driver
{
public:
  Fl_Pico_Window_Driver(Fl_Window *win);
  virtual ~Fl_Pico_Window_Driver();

  // --- window data
  virtual int decorated_w();
  virtual int decorated_h();
};


#endif // FL_PICO_WINDOW_DRIVER_H
