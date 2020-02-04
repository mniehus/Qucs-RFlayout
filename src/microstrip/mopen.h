/***************************************************************************
                               mopen.h
                             ------------------
    begin                : Thu Oct 25 2018
    copyright            : (C) 2018 by Thomas Lepoix
    email                : thomas.lepoix@protonmail.ch
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef MOPEN_H
#define MOPEN_H

#include "element.h"

class Mopen final : public Element {
private :
	std::string const m_descriptor="microstrip_open";
	long double m_w;
	std::string m_net1;
public :
	Mopen(std::string _label,
			std::string _type,
			bool _mirrorx,
			short _r,
			short _nport,
			long double _w);
	~Mopen();
	std::string getDescriptor(void) override;
	long double getW(void) override;
	std::string getNet1(void) override;
	int setNet1(std::string _net1) override;
};

#endif // MOPEN_H