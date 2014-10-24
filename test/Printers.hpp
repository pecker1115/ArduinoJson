// Copyright Benoit Blanchon 2014
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson

#pragma once

#include <ArduinoJson/ForwardDeclarations.hpp>
#include <ostream>

std::ostream& operator<<(std::ostream& os, const ArduinoJson::JsonValue& v);