#ifndef GUARD_CONSTANTS_ITEMS_H
#define GUARD_CONSTANTS_ITEMS_H

enum {

    ITEM_NONE               = 0x00,

    // Swords
    ITEM_SWORD_BASIC        = 0x01,
    ITEM_SWORD_IRON         = 0x02,
    ITEM_SWORD_STEEL        = 0x03,
    ITEM_SWORD_SILVER       = 0x04,
    ITEM_SWORD_BRAVE        = 0x05,
    ITEM_SWORD_DEVIL        = 0x06,
    ITEM_BLADE_THUNDER      = 0x07,
    ITEM_SWORD_VENIN        = 0x08,
    ITEM_SWORD_RAPIER       = 0x09,
    ITEM_SWORD_RUBY         = 0x0A,
    ITEM_SWORD_BLESSED      = 0x0B,
    ITEM_SWORD_ROYAL        = 0x0C,
    ITEM_SWORD_ASTRA        = 0x0D,
    ITEM_SWORD_ARMORSLAYER  = 0x0E,
    ITEM_SWORD_ZWEIHANDER   = 0x0F,
    ITEM_SWORD_LADYBLADE    = 0x10,
    ITEM_SWORD_ILWOON       = 0x11,
    ITEM_SWORD_LANCEREAVER  = 0x12,
    ITEM_SWORD_ZANBATO      = 0x13,

    // Lances
    ITEM_LANCE_BASIC        = 0x14,
    ITEM_LANCE_IRON         = 0x15,
    ITEM_LANCE_STEEL        = 0x16,
    ITEM_LANCE_SILVER       = 0x17,
    ITEM_LANCE_VENIN        = 0x18,
    ITEM_LANCE_KILLER       = 0x19,
    ITEM_LANCE_BLESSED      = 0x1A,
    ITEM_LANCE_RIDERSBANE   = 0x1B,
    ITEM_LANCE_JAVELIN      = 0x1C,
    ITEM_LANCE_KRIEMHILD    = 0x1D,
    ITEM_LANCE_AXEREAVER    = 0x1E,

    // Axes
    ITEM_AXE_BASIC           = 0x1F,
    ITEM_AXE_IRON            = 0x20,
    ITEM_AXE_STEEL           = 0x21,
    ITEM_AXE_SILVER          = 0x22,
    ITEM_AXE_VENIN           = 0x23,
    ITEM_AXE_KILLER          = 0x24,
    ITEM_AXE_HALBERD         = 0x25,
    ITEM_AXE_HAMMER          = 0x26,
    ITEM_AXE_DEVIL           = 0x27,
    ITEM_AXE_HANDAXE         = 0x28,
    ITEM_AXE_TOMAHAWK        = 0x29,
    ITEM_AXE_SWORDREAVER     = 0x2A,
    ITEM_LANCE_FORSCYTHE     = 0x2B,
    ITEM_AXE_HATCHET         = 0x2C,

    // Bows
    ITEM_BOW_BASIC           = 0x2D,
    ITEM_BOW_IRON            = 0x2E,
    ITEM_BOW_STEEL           = 0x2F,
    ITEM_BOW_SILVER          = 0x30,
    ITEM_BOW_KILLER          = 0x31,
    ITEM_BOW_VENIN           = 0x32,
    ITEM_BOW_BLESSED         = 0x33,
    ITEM_BOW_LONGBOW         = 0x34,
    ITEM_BALLISTA_REGULAR    = 0x35,
    ITEM_BOW_RADIANT         = 0x36,
    ITEM_BOW_MILASBOW        = 0x37,

    // Anima tomes
    ITEM_ANIMA_FIRE          = 0x38,
    ITEM_ANIMA_THUNDER       = 0x39,
    ITEM_ANIMA_SAGITTAE      = 0x3A,
    ITEM_ANIMA_BOLTING       = 0x3B,
    ITEM_ANIMA_RAGNAROK      = 0x3C,
    ITEM_ANIMA_EXCALIBUR     = 0x3E,

    // Light tomes
    ITEM_LIGHT_NOSFERATU     = 0x3F,
    ITEM_LIGHT_SERAPHIM      = 0x41,
    ITEM_LIGHT_PURGE         = 0x42,
    ITEM_LIGHT_AURA          = 0x43,

    // Dark tomes
    ITEM_DARK_MIASMA         = 0x45,
    ITEM_DARK_SELENE         = 0x46,
    ITEM_DARK_SISYPHUS       = 0x47,
    ITEM_DARK_MIRE           = 0x48,
    ITEM_DARK_MEDUSA         = 0x49,
    ITEM_DARK_THANATOS       = 0x4A,

    // Staves
    ITEM_STAFF_HEAL          = 0x4B,
    ITEM_STAFF_EXPEL         = 0x4C,
    ITEM_STAFF_RECOVER       = 0x4D,
    ITEM_STAFF_PHYSIC        = 0x4E,
    ITEM_STAFF_FORTIFY       = 0x4F,
    ITEM_STAFF_RESTORE       = 0x50,
    ITEM_STAFF_SILENCE       = 0x51,
    ITEM_STAFF_FREEZE        = 0x52,
    ITEM_STAFF_ENTRAP        = 0x53,
    ITEM_STAFF_WARP          = 0x54,
    ITEM_STAFF_RESCUE        = 0x55,
    ITEM_STAFF_TORCH         = 0x56,
    ITEM_STAFF_INVOKE        = 0x57,
    ITEM_STAFF_UNLOCK        = 0x58,
    ITEM_STAFF_REWARP        = 0x59,
    ITEM_STAFF_ANEW          = 0x5A,

    // Stat boosters
    ITEM_BOOSTER_HP          = 0x5B,
    ITEM_BOOSTER_POW         = 0x5C,
    ITEM_BOOSTER_SKL         = 0x5D,
    ITEM_BOOSTER_SPD         = 0x5E,
    ITEM_BOOSTER_LCK         = 0x5F,
    ITEM_BOOSTER_DEF         = 0x60,
    ITEM_BOOSTER_RES         = 0x61,
    ITEM_BOOSTER_MOV         = 0x62,
    
    // Other items
    ITEM_RING_BLESSED        = 0x63,
    ITEM_SHIELD_LEATHER      = 0x64,
    ITEM_SHIELD_IRON         = 0x65,
    ITEM_SHIELD_STEEL        = 0x66,
    ITEM_SHIELD_SILVER       = 0x67,
    ITEM_RING_MAGE           = 0x68,
    ITEM_CHESTKEY            = 0x69,
    ITEM_DOORKEY             = 0x6A,
    ITEM_LOCKPICK            = 0x6B,
    ITEM_VULNERARY           = 0x6C,
    ITEM_ELIXIR              = 0x6D,
    ITEM_PUREWATER           = 0x6E,
    ITEM_ANTITOXIN           = 0x6F,
    ITEM_TORCH               = 0x70,
    ITEM_SHIELD_IOTE         = 0x71,
    ITEM_MEMBERCARD          = 0x72,
    ITEM_SILVERCARD          = 0x73,
    ITEM_RING_GRIMOIRE       = 0x74,
    ITEM_RING_ANIMUS         = 0x75,
    ITEM_RING_CORAL          = 0x76,

    // From here onwards organization is a myth
    ITEM_GOLD                = 0x77,
    ITEM_SWORD_GOLD_DAGGER   = 0x78,
    ITEM_CHESTKEY_BUNDLE     = 0x79,
    ITEM_MINE                = 0x7A,
    ITEM_LIGHTRUNE           = 0x7B,
    ITEM_SHIELD_MAGIC        = 0x7C,
    ITEM_DUMA_ICON           = 0x7D,
    ITEM_RING_SPEED          = 0x7E,
    ITEM_RING_PRAYER         = 0x7F,
    ITEM_RING_BERKUT         = 0x80,
    ITEM_LANCE_HEAVYSPEAR    = 0x82,
    ITEM_AXE_BLESSED         = 0x83,
    ITEM_BOW_LUNA            = 0x84,
    ITEM_SWORD_FALCHION      = 0x85,
    ITEM_SWORD_BELOVEDZOFIA  = 0x86,
    ITEM_AXE_AETHER          = 0x87,
    ITEM_SHIELD_ROYAL        = 0x88,
    ITEM_METISSTOME          = 0x89,
    ITEM_SHIELD_EMPEROR      = 0x8A,
    ITEM_STAFF_MOGALL        = 0x8C,
    ITEM_LANCE_RHOMPHAIA     = 0x8D,
    ITEM_LANCE_EMPEROR       = 0x8E,
    ITEM_LANCE_DUMASLANCE    = 0x8F,
    ITEM_MONSTER_WRETCHAIR   = 0x90,
    ITEM_SWORD_MERCURIUS     = 0x91,
    ITEM_LANCE_GRADIVUS      = 0x92,
    ITEM_AXE_HAUTECLERE      = 0x93,
    ITEM_BOW_PARTHIA         = 0x94,
    ITEM_LANCE_SOL           = 0x95,
    ITEM_LANCE_SAUNION       = 0x96,
    ITEM_RING_ANGEL          = 0x97,
    ITEM_HEROSPROOF          = 0x98,
    ITEM_ZOFIACROWN          = 0x99,
    ITEM_1G                  = 0x9A,
    ITEM_5G                  = 0x9B,
    ITEM_10G                 = 0x9C,
    ITEM_50G                 = 0x9D,
    ITEM_100G                = 0x9E,
    ITEM_3000G               = 0x9F,
    ITEM_5000G               = 0xA0,
    ITEM_SWORD_WINDSWORD     = 0xA1,
    ITEM_MONSTER_TACKLE      = 0xA2,
    ITEM_UNK_GREENNOTE       = 0xA3, // ^
    ITEM_UNK_REDNOTE         = 0xA4, // ^
    ITEM_DANCE               = 0xA5,
    ITEM_NIGHTMARE           = 0xA6,
    ITEM_DEMONSTONE          = 0xA7,
    ITEM_DUMA_OCULARBEAM     = 0xA8,
    ITEM_DUMA_OCULUS         = 0xA9,
    ITEM_DIVINESTONE         = 0xAA,
    ITEM_MONSTER_TENTACLE    = 0xAB,
    ITEM_MONSTER_SHADOWSHT   = 0xAC,
    ITEM_MONSTER_ROTTENCLW   = 0xAD,
    ITEM_MONSTER_FETIDCLW    = 0xAE,
    ITEM_MONSTER_VENINCLW    = 0xAF,
    ITEM_MONSTER_LTHLTALON   = 0xB0,
    ITEM_MONSTER_FIREFANG    = 0xB1,
    ITEM_MONSTER_HELLFANG    = 0xB2,
    ITEM_MONSTER_EVILEYE     = 0xB3,
    ITEM_MONSTER_CRIMSNEYE   = 0xB4,
    ITEM_MONSTER_STONE       = 0xB5,
    ITEM_MONSTER_SHARPCLAW   = 0xB6,
    ITEM_JUNAFRUIT           = 0xB7,
    ITEM_150G                = 0xB8,
    ITEM_200G                = 0xB9,
    ITEM_SHIELD_DRAGON       = 0xBA,
    ITEM_SHIELD_BLESSED      = 0xBB,

    ITEM_UNK_BC            = 0xBC,
    ITEM_UNK_BD            = 0xBD,
    ITEM_UNK_BE            = 0xBE,
    ITEM_UNK_BF            = 0xBF,
    ITEM_UNK_C0            = 0xC0,
    ITEM_UNK_C1            = 0xC1,

    // ...

    ITEM_UNK_CC            = 0xCC,
};

#endif // GUARD_CONSTANTS_ITEMS_H
