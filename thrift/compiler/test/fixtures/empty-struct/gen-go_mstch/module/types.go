// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
  "fmt"

  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)


// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type Empty struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Empty{}

func NewEmpty() *Empty {
    return (&Empty{})
}
func (x *Empty) String() string {
    return fmt.Sprintf("%+v", x)
}


// Deprecated: Use Empty.Set* methods instead or set the fields directly.
type EmptyBuilder struct {
    obj *Empty
}

func NewEmptyBuilder() *EmptyBuilder {
    return &EmptyBuilder{
        obj: NewEmpty(),
    }
}

func (x *EmptyBuilder) Emit() *Empty {
    var objCopy Empty = *x.obj
    return &objCopy
}

func (x *Empty) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Empty"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Empty) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type Nada struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Nada{}

func NewNada() *Nada {
    return (&Nada{})
}
func (x *Nada) String() string {
    return fmt.Sprintf("%+v", x)
}



func (x *Nada) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Nada"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Nada) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}
