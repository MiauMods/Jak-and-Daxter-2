#pragma once
/*!
 * Matches the bucket-id enum in GOAL
 */
enum class BucketId {
  BUCKET0 = 0,
  BUCKET1 = 1,
  // 2
  SKY_DRAW = 3,
  OCEAN_MID_AND_FAR = 4,
  TFRAG_TEX_LEVEL0 = 5,
  TFRAG_LEVEL0 = 6,
  // 7
  // 8
  TIE_LEVEL0 = 9,
  MERC_TFRAG_TEX_LEVEL0 = 10,
  GMERC_TFRAG_TEX_LEVEL0 = 11,
  TFRAG_TEX_LEVEL1 = 12,
  TFRAG_LEVEL1 = 13,
  // 14
  // 15
  TIE_LEVEL1 = 16,
  MERC_TFRAG_TEX_LEVEL1 = 17,
  GMERC_TFRAG_TEX_LEVEL1 = 18,
  SHRUB_TEX_LEVEL0 = 19,
  // 20
  // 21
  // 22
  // 23
  // 24
  SHRUB_TEX_LEVEL1 = 25,
  // 26
  // 27
  // 28
  // 29
  GENERIC_SHRUB = 30,
  ALPHA_TEX_LEVEL0 = 31,
  TFRAG_TRANS0_AND_SKY_BLEND_LEVEL0 = 32,
  // 33
  TFRAG_DIRT_LEVEL0 = 34,
  // 35
  TFRAG_ICE_LEVEL0 = 36,
  // 37
  ALPHA_TEX_LEVEL1 = 38,
  TFRAG_TRANS1_AND_SKY_BLEND_LEVEL1 = 39,
  // 40
  TFRAG_DIRT_LEVEL1 = 41,
  // 42
  TFRAG_ICE_LEVEL1 = 43,
  // 44
  MERC_AFTER_ALPHA = 45,
  GENERIC_ALPHA = 46,
  // 47
  PRIS_TEX_LEVEL0 = 48,
  MERC_PRIS_LEVEL0 = 49,
  GENERIC_PRIS_LEVEL0 = 50,
  PRIS_TEX_LEVEL1 = 51,
  MERC_PRIS_LEVEL1 = 52,
  GENERIC_PRIS_LEVEL1 = 53,
  MERC_EYES_AFTER_PRIS = 54,
  MERC_AFTER_PRIS = 55,
  GENERIC_PRIS = 56,
  WATER_TEX_LEVEL0 = 57,
  MERC_WATER_LEVEL0 = 58,
  GENERIC_WATER_LEVEL0 = 59,
  WATER_TEX_LEVEL1 = 60,
  MERC_WATER_LEVEL1 = 61,
  GENERIC_WATER_LEVEL1 = 62,
  OCEAN_NEAR = 63,
  // 64
  PRE_SPRITE_TEX = 65,  // maybe it's just common textures?
  SPRITE = 66,
  DEBUG_DRAW_0 = 67,
  DEBUG_DRAW_1 = 68,
  MAX_BUCKETS = 69
};

enum class BucketCategory {
  TFRAG,
  TIE,
  TEX,
  MERC,
  GENERIC_MERC,
  SPRITE,
  DEBUG_DRAW,
  OTHER,
  MAX_CATEGORIES
};

constexpr const char* BUCKET_CATEGORY_NAMES[(int)BucketCategory::MAX_CATEGORIES] = {
    "tfrag", "tie", "tex", "merc", "mercneric", "sprite", "debug", "other"};