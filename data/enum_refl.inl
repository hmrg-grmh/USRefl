// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Color>
    : Ubpa::USRefl::TypeInfoBase<Color>
{
    static constexpr AttrList attrs = {
        Attr{"enum_attr", "enum_attr_value"},
    };

    static constexpr FieldList fields = {
        Field{"RED", Color::RED,
            AttrList{
                Attr{"enumerator_attr", "enumerator_attr_value"},
                Attr{"func", &Func<1>},
            }
        },
        Field{"GREEN", Color::GREEN,
            AttrList{
                Attr{"func", &Func<2>},
            }
        },
        Field{"BLUE", Color::BLUE,
            AttrList{
                Attr{"func", &Func<3>},
            }
        },
    };
};
