//
//  Generated code. Do not modify.
//  source: ChatStatus.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:core' as $core;

import 'package:protobuf/protobuf.dart' as $pb;

/// 聊天消息响应状态
class ChatStatus extends $pb.ProtobufEnum {
  static const ChatStatus OK = ChatStatus._(0, _omitEnumNames ? '' : 'OK');
  static const ChatStatus QUIET = ChatStatus._(1, _omitEnumNames ? '' : 'QUIET');
  static const ChatStatus BLACK = ChatStatus._(2, _omitEnumNames ? '' : 'BLACK');

  static const $core.List<ChatStatus> values = <ChatStatus> [
    OK,
    QUIET,
    BLACK,
  ];

  static final $core.Map<$core.int, ChatStatus> _byValue = $pb.ProtobufEnum.initByValue(values);
  static ChatStatus? valueOf($core.int value) => _byValue[value];

  const ChatStatus._($core.int v, $core.String n) : super(v, n);
}


const _omitEnumNames = $core.bool.fromEnvironment('protobuf.omit_enum_names');
