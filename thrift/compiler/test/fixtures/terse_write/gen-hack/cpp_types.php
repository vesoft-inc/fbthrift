<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace thrift\annotation\cpp;

/**
 * Original thrift enum:-
 * RefType
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/cpp/RefType'))>>
enum RefType: int {
  Unique = 0;
  Shared = 1;
  SharedMutable = 2;
}

class RefType_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "cpp.RefType",
        "elements" => dict[
          0 => "Unique",
          1 => "Shared",
          2 => "SharedMutable",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * Ref
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/cpp/Ref'))>>
class Ref implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'type',
      'type' => \TType::I32,
      'enum' => \thrift\annotation\cpp\RefType::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'type' => 1,
  ];

  const type TConstructorShape = shape(
    ?'type' => ?\thrift\annotation\cpp\RefType,
  );

  const type TShape = shape(
    ?'type' => ?\thrift\annotation\cpp\RefType,
    ...
  );
  const int STRUCTURAL_ID = 8496209332976516665;
  /**
   * Original thrift field:-
   * 1: enum cpp.RefType type
   */
  public ?\thrift\annotation\cpp\RefType $type;

  public function __construct(?\thrift\annotation\cpp\RefType $type = null)[] {
    $this->type = $type;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'type'),
    );
  }

  public function getName()[]: string {
    return 'Ref';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "cpp.Ref",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "cpp.RefType",
                    )
                  ),
                )
              ),
              "name" => "type",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Field' => \thrift\annotation\Field::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'type'),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'type' => $this->type,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'type') !== null) {
      $this->type = \thrift\annotation\cpp\RefType::coerce(HH\FIXME\UNSAFE_CAST<mixed, \thrift\annotation\cpp\RefType>($parsed['type']));
    }
  }

}

/**
 * Original thrift struct:-
 * Lazy
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/cpp/Lazy'))>>
class Lazy implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'ref',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'ref' => 1,
  ];

  const type TConstructorShape = shape(
    ?'ref' => ?bool,
  );

  const type TShape = shape(
    'ref' => bool,
    ...
  );
  const int STRUCTURAL_ID = 2641839514020242314;
  /**
   * Original thrift field:-
   * 1: bool ref
   */
  public bool $ref;

  public function __construct(?bool $ref = null)[] {
    $this->ref = $ref ?? false;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'ref'),
    );
  }

  public function getName()[]: string {
    return 'Lazy';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "cpp.Lazy",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "ref",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Field' => \thrift\annotation\Field::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['ref'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'ref' => $this->ref,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'ref') !== null) {
      $this->ref = HH\FIXME\UNSAFE_CAST<mixed, bool>($parsed['ref']);
    }
  }

}

/**
 * Original thrift struct:-
 * DisableLazyChecksum
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/cpp/DisableLazyChecksum'))>>
class DisableLazyChecksum implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
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
    return 'DisableLazyChecksum';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "cpp.DisableLazyChecksum",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Struct' => \thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

/**
 * An annotation that applies a C++ adapter to typedef, field, or struct.
 * 
 * For example:
 * 
 *   @cpp.Adapter{name = "IdAdapter"}
 *   typedef i64 MyI64;
 * 
 * Here the type `MyI64` has the C++ adapter `IdAdapter`.
 * 
 *   struct User {
 *     @cpp.Adapter{name = "IdAdapter"}
 *     1: i64 id;
 *   }
 * 
 * Here the field `id` has the C++ adapter `IdAdapter`.
 *
 * Original thrift struct:-
 * Adapter
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/cpp/Adapter'))>>
class Adapter implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'adaptedType',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'underlyingName',
      'type' => \TType::STRING,
    ),
    4 => shape(
      'var' => 'extraNamespace',
      'type' => \TType::STRING,
    ),
    5 => shape(
      'var' => 'moveOnly',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
    'adaptedType' => 2,
    'underlyingName' => 3,
    'extraNamespace' => 4,
    'moveOnly' => 5,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
    ?'adaptedType' => ?string,
    ?'underlyingName' => ?string,
    ?'extraNamespace' => ?string,
    ?'moveOnly' => ?bool,
  );

  const type TShape = shape(
    'name' => string,
    'adaptedType' => string,
    'underlyingName' => string,
    'extraNamespace' => string,
    'moveOnly' => bool,
    ...
  );
  const int STRUCTURAL_ID = 8180344078447403329;
  /**
   * The name of a C++ adapter type used to convert between Thrift and native
   * C++ representation.
   * 
   * The adapter can be either a Type or Field adapter, providing either of the following APIs:
   * 
   *     struct ThriftTypeAdapter {
   *       static AdaptedType fromThrift(ThriftType thrift);
   *       static {const ThriftType& | ThriftType} toThrift(const AdaptedType& native);
   *     };
   * 
   *     struct ThriftFieldAdapter {
   *       // Context is an instantiation of apache::thrift::FieldContext
   *       template <class Context>
   *       static void construct(AdaptedType& field, Context ctx);
   * 
   *       template <class Context>
   *       static AdaptedType fromThriftField(ThriftType value, Context ctx);
   * 
   *       template <class Context>
   *       static {const ThriftType& | ThriftType} toThrift(const AdaptedType& adapted, Context ctx);
   *     };
   * 
   * Original thrift field:-
   * 1: string name
   */
  public string $name;
  /**
   * It is sometimes necessary to specify AdaptedType here (in case the codegen would
   * have a circular depdenceny, which will cause the C++ build to fail).
   * 
   * Original thrift field:-
   * 2: string adaptedType
   */
  public string $adaptedType;
  /**
   * When applied directly to a type (as opposed to on a typedef) the IDL name of the
   * type will refer to the adapted type in C++ and the underlying thrift struct will be
   * generated in a nested namespace and/or with a different name. By default the struct
   * will be generated in a nested 'detail' namespace with the same name,
   * but both of these can be changed by setting these fields.
   * Empty string disables the nested namespace and uses the IDL name for the struct.
   * 
   * Original thrift field:-
   * 3: string underlyingName
   */
  public string $underlyingName;
  /**
   * Original thrift field:-
   * 4: string extraNamespace
   */
  public string $extraNamespace;
  /**
   * Must set to true when adapted type is not copyable.
   * 
   * Original thrift field:-
   * 5: bool moveOnly
   */
  public bool $moveOnly;

  public function __construct(?string $name = null, ?string $adaptedType = null, ?string $underlyingName = null, ?string $extraNamespace = null, ?bool $moveOnly = null)[] {
    $this->name = $name ?? '';
    $this->adaptedType = $adaptedType ?? '';
    $this->underlyingName = $underlyingName ?? '';
    $this->extraNamespace = $extraNamespace ?? "detail";
    $this->moveOnly = $moveOnly ?? false;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'name'),
      Shapes::idx($shape, 'adaptedType'),
      Shapes::idx($shape, 'underlyingName'),
      Shapes::idx($shape, 'extraNamespace'),
      Shapes::idx($shape, 'moveOnly'),
    );
  }

  public function getName()[]: string {
    return 'Adapter';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "cpp.Adapter",
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
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "adaptedType",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "underlyingName",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "extraNamespace",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 5,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "moveOnly",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Field' => \thrift\annotation\Field::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Typedef' => \thrift\annotation\Typedef::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Structured' => \thrift\annotation\Structured::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\TConst' => \thrift\annotation\TConst::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['name'],
      $shape['adaptedType'],
      $shape['underlyingName'],
      $shape['extraNamespace'],
      $shape['moveOnly'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'name' => $this->name,
      'adaptedType' => $this->adaptedType,
      'underlyingName' => $this->underlyingName,
      'extraNamespace' => $this->extraNamespace,
      'moveOnly' => $this->moveOnly,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'name') !== null) {
      $this->name = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['name']);
    }
    if (idx($parsed, 'adaptedType') !== null) {
      $this->adaptedType = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['adaptedType']);
    }
    if (idx($parsed, 'underlyingName') !== null) {
      $this->underlyingName = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['underlyingName']);
    }
    if (idx($parsed, 'extraNamespace') !== null) {
      $this->extraNamespace = HH\FIXME\UNSAFE_CAST<mixed, string>($parsed['extraNamespace']);
    }
    if (idx($parsed, 'moveOnly') !== null) {
      $this->moveOnly = HH\FIXME\UNSAFE_CAST<mixed, bool>($parsed['moveOnly']);
    }
  }

}

/**
 * Original thrift struct:-
 * PackIsset
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/cpp/PackIsset'))>>
class PackIsset implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'atomic',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'atomic' => 1,
  ];

  const type TConstructorShape = shape(
    ?'atomic' => ?bool,
  );

  const type TShape = shape(
    'atomic' => bool,
    ...
  );
  const int STRUCTURAL_ID = 1587553453134051231;
  /**
   * Original thrift field:-
   * 1: bool atomic
   */
  public bool $atomic;

  public function __construct(?bool $atomic = null)[] {
    $this->atomic = $atomic ?? true;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'atomic'),
    );
  }

  public function getName()[]: string {
    return 'PackIsset';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "cpp.PackIsset",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "atomic",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Struct' => \thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['atomic'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'atomic' => $this->atomic,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'atomic') !== null) {
      $this->atomic = HH\FIXME\UNSAFE_CAST<mixed, bool>($parsed['atomic']);
    }
  }

}

/**
 * Original thrift struct:-
 * MinimizePadding
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/cpp/MinimizePadding'))>>
class MinimizePadding implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
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
    return 'MinimizePadding';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "cpp.MinimizePadding",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Struct' => \thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

/**
 * Original thrift struct:-
 * TriviallyRelocatable
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/cpp/TriviallyRelocatable'))>>
class TriviallyRelocatable implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
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
    return 'TriviallyRelocatable';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "cpp.TriviallyRelocatable",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Struct' => \thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

/**
 * Original thrift struct:-
 * ScopedEnumAsUnionType
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/cpp/ScopedEnumAsUnionType'))>>
class ScopedEnumAsUnionType implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
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
    return 'ScopedEnumAsUnionType';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "cpp.ScopedEnumAsUnionType",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Union' => \thrift\annotation\Union::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

