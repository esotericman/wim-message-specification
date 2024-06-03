//
//  Generated code. Do not modify.
//  source: ChatType.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:core' as $core;

import 'package:protobuf/protobuf.dart' as $pb;

/// 聊天类型
class ChatType extends $pb.ProtobufEnum {
  static const ChatType SINGLE = ChatType._(0, _omitEnumNames ? '' : 'SINGLE');
  static const ChatType GROUP = ChatType._(1, _omitEnumNames ? '' : 'GROUP');

  static const $core.List<ChatType> values = <ChatType> [
    SINGLE,
    GROUP,
  ];

  static final $core.Map<$core.int, ChatType> _byValue = $pb.ProtobufEnum.initByValue(values);
  static ChatType? valueOf($core.int value) => _byValue[value];

  const ChatType._($core.int v, $core.String n) : super(v, n);
}


const _omitEnumNames = $core.bool.fromEnvironment('protobuf.omit_enum_names');
