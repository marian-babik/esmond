/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#include "essnmp_types.h"

namespace ESSNMP { 

uint32_t Var::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) { 
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->type_id);
          this->__isset.type_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->device_id);
          this->__isset.device_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();
  return xfer;
}

uint32_t Var::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Var");
  xfer += oprot->writeFieldBegin("name", facebook::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("type_id", facebook::thrift::protocol::T_BYTE, 2);
  xfer += oprot->writeByte(this->type_id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("device_id", facebook::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->device_id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t Device::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) { 
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->begin_time);
          this->__isset.begin_time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->end_time);
          this->__isset.end_time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == facebook::thrift::protocol::T_LIST) {
          {
            this->vars.clear();
uint32_t _size0;
            facebook::thrift::protocol::TType _etype3;
            iprot->readListBegin(_etype3, _size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              Var _elem5;
              xfer += _elem5.read(iprot);
              this->vars.push_back(_elem5);
            }
            iprot->readListEnd();
          }
          this->__isset.vars = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();
  return xfer;
}

uint32_t Device::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Device");
  xfer += oprot->writeFieldBegin("id", facebook::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("name", facebook::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("begin_time", facebook::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->begin_time);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("end_time", facebook::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->end_time);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("vars", facebook::thrift::protocol::T_LIST, 5);
  {
    xfer += oprot->writeListBegin(facebook::thrift::protocol::T_STRUCT, this->vars.size());
    std::vector<Var> ::const_iterator _iter6;
    for (_iter6 = this->vars.begin(); _iter6 != this->vars.end(); ++_iter6)
    {
      xfer += (*_iter6).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t OID::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) { 
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->storage);
          this->__isset.storage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->oidtype);
          this->__isset.oidtype = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->oidtype_id);
          this->__isset.oidtype_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();
  return xfer;
}

uint32_t OID::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("OID");
  xfer += oprot->writeFieldBegin("id", facebook::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("name", facebook::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("storage", facebook::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->storage);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("oidtype", facebook::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->oidtype);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("oidtype_id", facebook::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->oidtype_id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t OIDSet::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) { 
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->polling_frequency);
          this->__isset.polling_frequency = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == facebook::thrift::protocol::T_LIST) {
          {
            this->oids.clear();
uint32_t _size7;
            facebook::thrift::protocol::TType _etype10;
            iprot->readListBegin(_etype10, _size7);
            uint32_t _i11;
            for (_i11 = 0; _i11 < _size7; ++_i11)
            {
              OID _elem12;
              xfer += _elem12.read(iprot);
              this->oids.push_back(_elem12);
            }
            iprot->readListEnd();
          }
          this->__isset.oids = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();
  return xfer;
}

uint32_t OIDSet::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("OIDSet");
  xfer += oprot->writeFieldBegin("id", facebook::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("name", facebook::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("polling_frequency", facebook::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->polling_frequency);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("oids", facebook::thrift::protocol::T_LIST, 4);
  {
    xfer += oprot->writeListBegin(facebook::thrift::protocol::T_STRUCT, this->oids.size());
    std::vector<OID> ::const_iterator _iter13;
    for (_iter13 = this->oids.begin(); _iter13 != this->oids.end(); ++_iter13)
    {
      xfer += (*_iter13).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t Counter32::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) { 
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->flags);
          this->__isset.flags = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->timestamp);
          this->__isset.timestamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == facebook::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->version);
          this->__isset.version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == facebook::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->type_id);
          this->__isset.type_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();
  return xfer;
}

uint32_t Counter32::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Counter32");
  xfer += oprot->writeFieldBegin("flags", facebook::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->flags);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("timestamp", facebook::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->timestamp);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("value", facebook::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->value);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("version", facebook::thrift::protocol::T_BYTE, 4);
  xfer += oprot->writeByte(this->version);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("type_id", facebook::thrift::protocol::T_BYTE, 5);
  xfer += oprot->writeByte(this->type_id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t Counter64::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) { 
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->flags);
          this->__isset.flags = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->timestamp);
          this->__isset.timestamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == facebook::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->version);
          this->__isset.version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == facebook::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->type_id);
          this->__isset.type_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();
  return xfer;
}

uint32_t Counter64::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Counter64");
  xfer += oprot->writeFieldBegin("flags", facebook::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->flags);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("timestamp", facebook::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->timestamp);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("value", facebook::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->value);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("version", facebook::thrift::protocol::T_BYTE, 4);
  xfer += oprot->writeByte(this->version);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("type_id", facebook::thrift::protocol::T_BYTE, 5);
  xfer += oprot->writeByte(this->type_id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t Gauge32::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) { 
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->flags);
          this->__isset.flags = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->timestamp);
          this->__isset.timestamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == facebook::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->version);
          this->__isset.version = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == facebook::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->type_id);
          this->__isset.type_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();
  return xfer;
}

uint32_t Gauge32::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Gauge32");
  xfer += oprot->writeFieldBegin("flags", facebook::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->flags);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("timestamp", facebook::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->timestamp);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("value", facebook::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->value);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("version", facebook::thrift::protocol::T_BYTE, 4);
  xfer += oprot->writeByte(this->version);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("type_id", facebook::thrift::protocol::T_BYTE, 5);
  xfer += oprot->writeByte(this->type_id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t VarList::read(facebook::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  facebook::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == facebook::thrift::protocol::T_STOP) { 
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == facebook::thrift::protocol::T_LIST) {
          {
            this->counter32.clear();
uint32_t _size14;
            facebook::thrift::protocol::TType _etype17;
            iprot->readListBegin(_etype17, _size14);
            uint32_t _i18;
            for (_i18 = 0; _i18 < _size14; ++_i18)
            {
              Counter32 _elem19;
              xfer += _elem19.read(iprot);
              this->counter32.push_back(_elem19);
            }
            iprot->readListEnd();
          }
          this->__isset.counter32 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == facebook::thrift::protocol::T_LIST) {
          {
            this->counter64.clear();
uint32_t _size20;
            facebook::thrift::protocol::TType _etype23;
            iprot->readListBegin(_etype23, _size20);
            uint32_t _i24;
            for (_i24 = 0; _i24 < _size20; ++_i24)
            {
              Counter64 _elem25;
              xfer += _elem25.read(iprot);
              this->counter64.push_back(_elem25);
            }
            iprot->readListEnd();
          }
          this->__isset.counter64 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == facebook::thrift::protocol::T_LIST) {
          {
            this->gauge32.clear();
uint32_t _size26;
            facebook::thrift::protocol::TType _etype29;
            iprot->readListBegin(_etype29, _size26);
            uint32_t _i30;
            for (_i30 = 0; _i30 < _size26; ++_i30)
            {
              Gauge32 _elem31;
              xfer += _elem31.read(iprot);
              this->gauge32.push_back(_elem31);
            }
            iprot->readListEnd();
          }
          this->__isset.gauge32 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();
  return xfer;
}

uint32_t VarList::write(facebook::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("VarList");
  xfer += oprot->writeFieldBegin("counter32", facebook::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(facebook::thrift::protocol::T_STRUCT, this->counter32.size());
    std::vector<Counter32> ::const_iterator _iter32;
    for (_iter32 = this->counter32.begin(); _iter32 != this->counter32.end(); ++_iter32)
    {
      xfer += (*_iter32).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("counter64", facebook::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(facebook::thrift::protocol::T_STRUCT, this->counter64.size());
    std::vector<Counter64> ::const_iterator _iter33;
    for (_iter33 = this->counter64.begin(); _iter33 != this->counter64.end(); ++_iter33)
    {
      xfer += (*_iter33).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("gauge32", facebook::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(facebook::thrift::protocol::T_STRUCT, this->gauge32.size());
    std::vector<Gauge32> ::const_iterator _iter34;
    for (_iter34 = this->gauge32.begin(); _iter34 != this->gauge32.end(); ++_iter34)
    {
      xfer += (*_iter34).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

} // namespace