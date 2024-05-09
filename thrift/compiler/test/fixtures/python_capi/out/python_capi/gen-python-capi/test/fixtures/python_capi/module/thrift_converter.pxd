
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#


cdef extern from "thrift/compiler/test/fixtures/python_capi/gen-cpp2/module_types.h":
    cdef cppclass cMyStruct "::test::fixtures::python_capi::MyStruct":
        cMyStruct()
    cdef cppclass cMyDataItem "::test::fixtures::python_capi::MyDataItem":
        cMyDataItem()
    cdef cppclass cTransitiveDoubler "::test::fixtures::python_capi::TransitiveDoubler":
        cTransitiveDoubler()
    cdef cppclass cDoubledPair "::test::fixtures::python_capi::detail::DoubledPair":
        cDoubledPair()
    cdef cppclass cStringPair "::test::fixtures::python_capi::StringPair":
        cStringPair()
    cdef cppclass cVapidStruct "::test::fixtures::python_capi::VapidStruct":
        cVapidStruct()
    cdef cppclass cPrimitiveStruct "::test::fixtures::python_capi::PrimitiveStruct":
        cPrimitiveStruct()
    cdef cppclass cAdaptedFields "::test::fixtures::python_capi::AdaptedFields":
        cAdaptedFields()
    cdef cppclass cListStruct "::test::fixtures::python_capi::ListStruct":
        cListStruct()
    cdef cppclass cSetStruct "::test::fixtures::python_capi::SetStruct":
        cSetStruct()
    cdef cppclass cMapStruct "::test::fixtures::python_capi::MapStruct":
        cMapStruct()
    cdef cppclass cComposeStruct "::test::fixtures::python_capi::ComposeStruct":
        cComposeStruct()
    cdef cppclass cOnion "::test::fixtures::python_capi::Shallot":
        cOnion()
    cdef cppclass cMyStructPatch "::test::fixtures::python_capi::MyStructPatchStruct":
        cMyStructPatch()
    cdef cppclass cMyStructField4Patch "::test::fixtures::python_capi::MyStructField4PatchStruct":
        cMyStructField4Patch()
    cdef cppclass cMyStructField6Patch "::test::fixtures::python_capi::MyStructField6PatchStruct":
        cMyStructField6Patch()
    cdef cppclass cMyStructField7Patch "::test::fixtures::python_capi::MyStructField7PatchStruct":
        cMyStructField7Patch()
    cdef cppclass cMyStructField8Patch "::test::fixtures::python_capi::MyStructField8PatchStruct":
        cMyStructField8Patch()
    cdef cppclass cMyStructFieldPatch "::test::fixtures::python_capi::MyStructFieldPatchStruct":
        cMyStructFieldPatch()
    cdef cppclass cMyStructEnsureStruct "::test::fixtures::python_capi::MyStructEnsureStruct":
        cMyStructEnsureStruct()
    cdef cppclass cMyStructSafePatch "::test::fixtures::python_capi::MyStructSafePatch":
        cMyStructSafePatch()
    cdef cppclass cMyDataItemPatch "::test::fixtures::python_capi::MyDataItemPatchStruct":
        cMyDataItemPatch()
    cdef cppclass cMyDataItemFieldPatch "::test::fixtures::python_capi::MyDataItemFieldPatchStruct":
        cMyDataItemFieldPatch()
    cdef cppclass cMyDataItemEnsureStruct "::test::fixtures::python_capi::MyDataItemEnsureStruct":
        cMyDataItemEnsureStruct()
    cdef cppclass cMyDataItemSafePatch "::test::fixtures::python_capi::MyDataItemSafePatch":
        cMyDataItemSafePatch()

cdef extern from "thrift/compiler/test/fixtures/python_capi/gen-cpp2/module_types.h":
    cdef cppclass cMyEnum "::test::fixtures::python_capi::MyEnum":
        pass
    cdef cppclass cAnnoyingEnum "::test::fixtures::python_capi::NormalDecentEnum":
        pass
cdef cMyStruct MyStruct_convert_to_cpp(object inst) except*
cdef object MyStruct_from_cpp(const cMyStruct& c_struct)

cdef cMyDataItem MyDataItem_convert_to_cpp(object inst) except*
cdef object MyDataItem_from_cpp(const cMyDataItem& c_struct)

cdef cTransitiveDoubler TransitiveDoubler_convert_to_cpp(object inst) except*
cdef object TransitiveDoubler_from_cpp(const cTransitiveDoubler& c_struct)

cdef cDoubledPair DoubledPair_convert_to_cpp(object inst) except*
cdef object DoubledPair_from_cpp(const cDoubledPair& c_struct)

cdef cStringPair StringPair_convert_to_cpp(object inst) except*
cdef object StringPair_from_cpp(const cStringPair& c_struct)

cdef cVapidStruct VapidStruct_convert_to_cpp(object inst) except*
cdef object VapidStruct_from_cpp(const cVapidStruct& c_struct)

cdef cPrimitiveStruct PrimitiveStruct_convert_to_cpp(object inst) except*
cdef object PrimitiveStruct_from_cpp(const cPrimitiveStruct& c_struct)

cdef cAdaptedFields AdaptedFields_convert_to_cpp(object inst) except*
cdef object AdaptedFields_from_cpp(const cAdaptedFields& c_struct)

cdef cListStruct ListStruct_convert_to_cpp(object inst) except*
cdef object ListStruct_from_cpp(const cListStruct& c_struct)

cdef cSetStruct SetStruct_convert_to_cpp(object inst) except*
cdef object SetStruct_from_cpp(const cSetStruct& c_struct)

cdef cMapStruct MapStruct_convert_to_cpp(object inst) except*
cdef object MapStruct_from_cpp(const cMapStruct& c_struct)

cdef cComposeStruct ComposeStruct_convert_to_cpp(object inst) except*
cdef object ComposeStruct_from_cpp(const cComposeStruct& c_struct)

cdef cOnion Onion_convert_to_cpp(object inst) except*
cdef object Onion_from_cpp(const cOnion& c_struct)

cdef cMyStructPatch MyStructPatch_convert_to_cpp(object inst) except*
cdef object MyStructPatch_from_cpp(const cMyStructPatch& c_struct)

cdef cMyStructField4Patch MyStructField4Patch_convert_to_cpp(object inst) except*
cdef object MyStructField4Patch_from_cpp(const cMyStructField4Patch& c_struct)

cdef cMyStructField6Patch MyStructField6Patch_convert_to_cpp(object inst) except*
cdef object MyStructField6Patch_from_cpp(const cMyStructField6Patch& c_struct)

cdef cMyStructField7Patch MyStructField7Patch_convert_to_cpp(object inst) except*
cdef object MyStructField7Patch_from_cpp(const cMyStructField7Patch& c_struct)

cdef cMyStructField8Patch MyStructField8Patch_convert_to_cpp(object inst) except*
cdef object MyStructField8Patch_from_cpp(const cMyStructField8Patch& c_struct)

cdef cMyStructFieldPatch MyStructFieldPatch_convert_to_cpp(object inst) except*
cdef object MyStructFieldPatch_from_cpp(const cMyStructFieldPatch& c_struct)

cdef cMyStructEnsureStruct MyStructEnsureStruct_convert_to_cpp(object inst) except*
cdef object MyStructEnsureStruct_from_cpp(const cMyStructEnsureStruct& c_struct)

cdef cMyStructSafePatch MyStructSafePatch_convert_to_cpp(object inst) except*
cdef object MyStructSafePatch_from_cpp(const cMyStructSafePatch& c_struct)

cdef cMyDataItemPatch MyDataItemPatch_convert_to_cpp(object inst) except*
cdef object MyDataItemPatch_from_cpp(const cMyDataItemPatch& c_struct)

cdef cMyDataItemFieldPatch MyDataItemFieldPatch_convert_to_cpp(object inst) except*
cdef object MyDataItemFieldPatch_from_cpp(const cMyDataItemFieldPatch& c_struct)

cdef cMyDataItemEnsureStruct MyDataItemEnsureStruct_convert_to_cpp(object inst) except*
cdef object MyDataItemEnsureStruct_from_cpp(const cMyDataItemEnsureStruct& c_struct)

cdef cMyDataItemSafePatch MyDataItemSafePatch_convert_to_cpp(object inst) except*
cdef object MyDataItemSafePatch_from_cpp(const cMyDataItemSafePatch& c_struct)

