// Filename: rtosconfig.hpp
// Created by by Sergey Kolody aka Lamerok on 29.03.2020.

#pragma once
#include <cstdint>  // for std::uint16_t
#include <cstddef>  // for std::size_t

enum class StatePriority : std::uint8_t
{
  clear = 0,
  lowest = 10,
  belowNormal = 20,
  normal = 30,
  aboveNormal = 80,
  highest = 90,
  priorityMax = 255
} ;
using tStateEvents = std::uint16_t ;
using tTaskId = std::uint16_t ;

static constexpr std::size_t MaxThreadCount = 3U ;
static constexpr StatePriority LowestPriority = StatePriority::clear;

