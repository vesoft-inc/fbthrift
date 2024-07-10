<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace facebook\thrift\annotation;

/**
 * Original thrift enum:-
 * RpcPriority
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/RpcPriority'))>>
enum RpcPriority: int {
  HIGH_IMPORTANT = 0;
  HIGH = 1;
  IMPORTANT = 2;
  NORMAL = 3;
  BEST_EFFORT = 4;
}

class RpcPriority_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "thrift.RpcPriority",
        "elements" => dict[
          0 => "HIGH_IMPORTANT",
          1 => "HIGH",
          2 => "IMPORTANT",
          3 => "NORMAL",
          4 => "BEST_EFFORT",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Indicates a definition/feature should only be used with permission, may
 * only work in specific contexts, and may change in incompatible ways without
 * notice. Note that this is primarily intended to annotate features by the Thrift Team
 * and isn't recommended for general use.
 *
 * Original thrift struct:-
 * Experimental
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Experimental'))>>
class Experimental implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'Experimental';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Experimental",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Program' => \facebook\thrift\annotation\Program::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Definition' => \facebook\thrift\annotation\Definition::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Annotate a thrift structured or enum to indicate if ids or values should not
 * be used.
 * 
 * For example, you may want to mark ids as deprecated, or these ids
 * might be reserved for other use cases or annotations.
 * 
 * The resolved set of disallowed ids is the union of the values in `ids` and
 * the range of values represented in `id_ranges`. Example:
 * 
 *  // These ids are not allowed: 3, 8, half-open ranges [10, 15), [20, 30)
 *  @thrift.ReserveIds{ids = [3, 8], id_ranges = {10: 15, 20: 30}}
 *  struct Foo {
 *    ...
 *    3: i64 f; // Build failure: 3 cannot be used
 *  }
 *
 * Original thrift struct:-
 * ReserveIds
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/ReserveIds'))>>
class ReserveIds implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'ids',
      'type' => \TType::LST,
      'etype' => \TType::I32,
      'elem' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'collection',
    ),
    2 => shape(
      'var' => 'id_ranges',
      'type' => \TType::MAP,
      'ktype' => \TType::I32,
      'vtype' => \TType::I32,
      'key' => shape(
        'type' => \TType::I32,
      ),
      'val' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'ids' => 1,
    'id_ranges' => 2,
  ];

  const type TConstructorShape = shape(
    ?'ids' => ?Vector<int>,
    ?'id_ranges' => ?Map<int, int>,
  );

  const int STRUCTURAL_ID = 4105998268635615653;
  /**
   * Individual ids that cannot be used.
   * 
   * Original thrift field:-
   * 1: list<i32> ids
   */
  public Vector<int> $ids;
  /**
   * Represents ranges of ids that cannot be used.
   * 
   * Each (key: value) pair represents the half-open range `[key, value)`,
   * where `key` is included and `value` is not. For example, the map
   * `{10: 15, 20: 30}` represents the union of id/value ranges `[10, 15)` and
   * `[20, 30)`.
   * 
   * Original thrift field:-
   * 2: map<i32, i32> id_ranges
   */
  public Map<int, int> $id_ranges;

  public function __construct(?Vector<int> $ids = null, ?Map<int, int> $id_ranges = null)[] {
    $this->ids = $ids ?? Vector {};
    $this->id_ranges = $id_ranges ?? Map {};
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'ids'),
      Shapes::idx($shape, 'id_ranges'),
    );
  }

  public function getName()[]: string {
    return 'ReserveIds';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.ReserveIds",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_list" => \tmeta_ThriftListType::fromShape(
                    shape(
                      "valueType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "ids",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_map" => \tmeta_ThriftMapType::fromShape(
                    shape(
                      "keyType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                        )
                      ),
                      "valueType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "id_ranges",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Structured' => \facebook\thrift\annotation\Structured::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Enum' => \facebook\thrift\annotation\Enum::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates additional backward compatibility restrictions, beyond the
 * standard Thrift required 'wire' compatibility.
 *
 * Original thrift struct:-
 * RequiresBackwardCompatibility
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/RequiresBackwardCompatibility'))>>
class RequiresBackwardCompatibility implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'field_name',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'field_name' => 1,
  ];

  const type TConstructorShape = shape(
    ?'field_name' => ?bool,
  );

  const int STRUCTURAL_ID = 4755373036761315562;
  /**
   * Original thrift field:-
   * 1: bool field_name
   */
  public bool $field_name;

  public function __construct(?bool $field_name = null)[] {
    $this->field_name = $field_name ?? false;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'field_name'),
    );
  }

  public function getName()[]: string {
    return 'RequiresBackwardCompatibility';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.RequiresBackwardCompatibility",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "field_name",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Structured' => \facebook\thrift\annotation\Structured::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Experimental' => \facebook\thrift\annotation\Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * An annotation that changes the field qualifier from 'none' to 'terse'.
 * A terse field is eligible to skip serialization, when it equals to the
 * intrinsic default value. It also clears to the intrinsic default value
 * before deserialization to distinguish between if a terse field was skipped
 * or missing during serialization. This is different from an unqualified
 * field, as an unqualified field is always serialized regardless of its value,
 * and it is not cleared before deserialization.
 * 
 * The annotation can be only used to annotate an unqualified field, and when
 * it is annotating a struct or exception, it changes all unqualified fields to
 * terse fields. Note, the annotation can not be used for union.
 *
 * Original thrift struct:-
 * TerseWrite
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/TerseWrite'))>>
class TerseWrite implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'TerseWrite';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.TerseWrite",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Program' => \facebook\thrift\annotation\Program::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Struct' => \facebook\thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Exception' => \facebook\thrift\annotation\Exception::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Field' => \facebook\thrift\annotation\Field::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Experimental' => \facebook\thrift\annotation\Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates that an optional field's value should never be stored on the stack,
 * i.e. the subobject should be allocated separately (e.g. because it is large and infrequently set).
 * 
 * NOTE: The APIs and initialization behavior are same as normal field, but different from `@cpp.Ref`. e.g.
 * 
 * ```
 * struct Foo {
 *   1: optional i32 normal;
 *   @thrift.Box
 *   2: optional i32 boxed;
 *   @cpp.Ref
 *   3: optional i32 referred;
 * }
 * ```
 * in C++
 * 
 * ```
 * Foo foo;
 * EXPECT_FALSE(foo.normal().has_value()); // okay
 * EXPECT_FALSE(foo.boxed().has_value()); // okay
 * EXPECT_FALSE(foo.referred().has_value()); // build failure: std::unique_ptr doesn't have has_value method
 * 
 * EXPECT_EQ(*foo.normal(), 0); // throw bad_field_access exception
 * EXPECT_EQ(*foo.boxed(), 0); // throw bad_field_access exception
 * EXPECT_EQ(*foo.referred(), 0); // okay, field has value by default
 * ```
 * 
 * Affects C++ and Rust.
 * TODO: replace with @cpp.Box + @rust.Box
 *
 * Original thrift struct:-
 * Box
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Box'))>>
class Box implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'Box';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Box",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Field' => \facebook\thrift\annotation\Field::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates whether the nested fields are accessible directly.
 * https://github.com/facebook/fbthrift/blob/v2023.11.20.00/thrift/doc/idl/mixins.md
 *
 * Original thrift struct:-
 * Mixin
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Mixin'))>>
class Mixin implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'Mixin';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Mixin",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Field' => \facebook\thrift\annotation\Field::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Option to serialize thrift struct in ascending field id order instead of field declaration order.
 * 
 * This can potentially make serialized data size smaller in compact protocol,
 * since compact protocol can write deltas between subsequent field ids instead of full ids.
 * 
 * NOTE: This annotation won't reduce payload size for other protocols.
 *
 * Original thrift struct:-
 * SerializeInFieldIdOrder
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/SerializeInFieldIdOrder'))>>
class SerializeInFieldIdOrder implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'SerializeInFieldIdOrder';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.SerializeInFieldIdOrder",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Struct' => \facebook\thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Experimental' => \facebook\thrift\annotation\Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates an enum is a bitmask and should support bit-wise operators.
 * Currently generates additional code in C++ and Hack.
 *
 * Original thrift struct:-
 * BitmaskEnum
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/BitmaskEnum'))>>
class BitmaskEnum implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'BitmaskEnum';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.BitmaskEnum",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Enum' => \facebook\thrift\annotation\Enum::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Specifies the field where the exception message is stored.
 * 
 * The "exception message" is typically a human-readable description of the
 * exception. It is made available to the exception-handling code via standard,
 * language-dependent APIs of the generated code, such as:
 *   - [`std::exception::what()`](https://en.cppreference.com/w/cpp/error/exception/what)
 *      in C++.
 *   - [`Throwable.getMessage()`](https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html#getMessage--)
 *     in Java.
 *   - etc.
 * 
 * This annotation can be specified on at most one field of an
 * [exception definition](https://github.com/facebook/fbthrift/blob/main/thrift/doc/idl/index.md#exceptions),
 * whose type must be `string`. The thrift compiler will generate an error
 * if this annotation is specified on a field in any other structured definition,
 * like a [struct definition](https://github.com/facebook/fbthrift/blob/main/thrift/doc/idl/index.md#structs)
 * or an [union definition](https://github.com/facebook/fbthrift/blob/main/thrift/doc/idl/index.md#unions)
 * 
 * If an exception definition does not specify this annotation for any field, the
 * exception message returned by the aforementioned APIs is unspecified.
 *
 * Original thrift struct:-
 * ExceptionMessage
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/ExceptionMessage'))>>
class ExceptionMessage implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'ExceptionMessage';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.ExceptionMessage",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Field' => \facebook\thrift\annotation\Field::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Generates a const of type schema. Struct containing the schema of the
 * annotated type. Optionally specify name to override default
 * schema<structName>.
 *
 * Original thrift struct:-
 * GenerateRuntimeSchema
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/GenerateRuntimeSchema'))>>
class GenerateRuntimeSchema implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
  );

  const int STRUCTURAL_ID = 2593878277785201336;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;

  public function __construct(?string $name = null)[] {
    $this->name = $name ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'name'),
    );
  }

  public function getName()[]: string {
    return 'GenerateRuntimeSchema';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.GenerateRuntimeSchema",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "name",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Structured' => \facebook\thrift\annotation\Structured::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Service' => \facebook\thrift\annotation\Service::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\TConst' => \facebook\thrift\annotation\TConst::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Enum' => \facebook\thrift\annotation\Enum::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Typedef' => \facebook\thrift\annotation\Typedef::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Experimental' => \facebook\thrift\annotation\Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates that a field's value should never be stored on the stack, and that
 * identical values can be shared in immutable contexts.
 *
 * Original thrift struct:-
 * InternBox
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/InternBox'))>>
class InternBox implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'InternBox';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.InternBox",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Field' => \facebook\thrift\annotation\Field::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Experimental' => \facebook\thrift\annotation\Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates that an interaction's methods should be processed sequentially.
 *
 * Original thrift struct:-
 * Serial
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Serial'))>>
class Serial implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'Serial';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Serial",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Interaction' => \facebook\thrift\annotation\Interaction::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Changes the URI of this definition away from the default-generated one.
 *
 * Original thrift struct:-
 * Uri
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Uri'))>>
class Uri implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'value',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'value' => 1,
  ];

  const type TConstructorShape = shape(
    ?'value' => ?string,
  );

  const int STRUCTURAL_ID = 4244314491070478042;
  /**
   * Original thrift field:-
   * 1: string value
   */
  public string $value;

  public function __construct(?string $value = null)[] {
    $this->value = $value ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'value'),
    );
  }

  public function getName()[]: string {
    return 'Uri';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Uri",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "value",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Definition' => \facebook\thrift\annotation\Definition::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Changes the priority of this function (default NORMAL).
 *
 * Original thrift struct:-
 * Priority
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Priority'))>>
class Priority implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'level',
      'type' => \TType::I32,
      'enum' => \facebook\thrift\annotation\RpcPriority::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'level' => 1,
  ];

  const type TConstructorShape = shape(
    ?'level' => ?\facebook\thrift\annotation\RpcPriority,
  );

  const int STRUCTURAL_ID = 3544896248719410700;
  /**
   * Original thrift field:-
   * 1: thrift.RpcPriority level
   */
  public ?\facebook\thrift\annotation\RpcPriority $level;

  public function __construct(?\facebook\thrift\annotation\RpcPriority $level = null)[] {
    $this->level = $level;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'level'),
    );
  }

  public function getName()[]: string {
    return 'Priority';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Priority",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "thrift.RpcPriority",
                    )
                  ),
                )
              ),
              "name" => "level",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\TFunction' => \facebook\thrift\annotation\TFunction::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Applies unstructured annotations to a definition.
 *
 * Original thrift struct:-
 * DeprecatedUnvalidatedAnnotations
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/DeprecatedUnvalidatedAnnotations'))>>
class DeprecatedUnvalidatedAnnotations implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'items',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'items' => 1,
  ];

  const type TConstructorShape = shape(
    ?'items' => ?Map<string, string>,
  );

  const int STRUCTURAL_ID = 9153190129039526940;
  /**
   * Original thrift field:-
   * 1: map<string, string> items
   */
  public Map<string, string> $items;

  public function __construct(?Map<string, string> $items = null)[] {
    $this->items = $items ?? Map {};
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'items'),
    );
  }

  public function getName()[]: string {
    return 'DeprecatedUnvalidatedAnnotations';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.DeprecatedUnvalidatedAnnotations",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_map" => \tmeta_ThriftMapType::fromShape(
                    shape(
                      "keyType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                      "valueType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "items",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Definition' => \facebook\thrift\annotation\Definition::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * In addition to reserved words, Thrift reserves all identifiers
 * that contain the case-insensitive substring fbthrift.
 * The use of such identifiers requires users to explicitly annotate
 * the usage with `@thrift.AllowReservedIdentifierName`,
 * and may result in undefined behavior.
 *
 * Original thrift struct:-
 * AllowReservedIdentifierName
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/AllowReservedIdentifierName'))>>
class AllowReservedIdentifierName implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'AllowReservedIdentifierName';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.AllowReservedIdentifierName",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Program' => \facebook\thrift\annotation\Program::fromShape(
          shape(
          )
        ),
        '\facebook\thrift\annotation\Definition' => \facebook\thrift\annotation\Definition::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

