//
//  Generated code. Do not modify.
//  source: ChatClient.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:core' as $core;

import 'package:protobuf/protobuf.dart' as $pb;

/// 客户端类型
class ChatClient extends $pb.ProtobufEnum {
  static const ChatClient UNKNOWN = ChatClient._(0, _omitEnumNames ? '' : 'UNKNOWN');
  static const ChatClient MOBILE = ChatClient._(1, _omitEnumNames ? '' : 'MOBILE');
  static const ChatClient DESKTOP = ChatClient._(2, _omitEnumNames ? '' : 'DESKTOP');
  static const ChatClient IPAD = ChatClient._(3, _omitEnumNames ? '' : 'IPAD');

  static const $core.List<ChatClient> values = <ChatClient> [
    UNKNOWN,
    MOBILE,
    DESKTOP,
    IPAD,
  ];

  static final $core.Map<$core.int, ChatClient> _byValue = $pb.ProtobufEnum.initByValue(values);
  static ChatClient? valueOf($core.int value) => _byValue[value];

  const ChatClient._($core.int v, $core.String n) : super(v, n);
}


const _omitEnumNames = $core.bool.fromEnvironment('protobuf.omit_enum_names');
