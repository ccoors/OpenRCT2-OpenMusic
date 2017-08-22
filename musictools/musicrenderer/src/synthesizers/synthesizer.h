/**
 * Copyright (C) 2017 Christian Friedrich Coors
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SYNTH_H
#define SYNTH_H

#include <vector>

#include <INIReader.h>
#include <smf.h>

/**
 * Abstract synthesizer class
 */
class Synthesizer {

public:
    Synthesizer();
    ~Synthesizer();

    virtual void render(std::vector<smf_event_t*>& midi_events) = 0;
};

Synthesizer* make_synthesizer(INIReader& reader, const std::string& section);

#endif
