//
//  Generated code. Do not modify.
//  source: ChatAck.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:core' as $core;

import 'package:fixnum/fixnum.dart' as $fixnum;
import 'package:protobuf/protobuf.dart' as $pb;

import 'ChatClient.pbenum.dart' as $1;

/// 客户端收到消息后回复确认包
class ChatAck extends $pb.GeneratedMessage {
  factory ChatAck({
    $core.String? conversation,
    $core.String? from,
    $fixnum.Int64? seq,
    $1.ChatClient? client,
  }) {
    final $result = create();
    if (conversation != null) {
      $result.conversation = conversation;
    }
    if (from != null) {
      $result.from = from;
    }
    if (seq != null) {
      $result.seq = seq;
    }
    if (client != null) {
      $result.client = client;
    }
    return $result;
  }
  ChatAck._() : super();
  factory ChatAck.fromBuffer($core.List<$core.int> i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromBuffer(i, r);
  factory ChatAck.fromJson($core.String i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromJson(i, r);

  static final $pb.BuilderInfo _i = $pb.BuilderInfo(_omitMessageNames ? '' : 'ChatAck', createEmptyInstance: create)
    ..aOS(1, _omitFieldNames ? '' : 'conversation')
    ..aOS(2, _omitFieldNames ? '' : 'from')
    ..a<$fixnum.Int64>(3, _omitFieldNames ? '' : 'seq', $pb.PbFieldType.OU6, defaultOrMaker: $fixnum.Int64.ZERO)
    ..e<$1.ChatClient>(4, _omitFieldNames ? '' : 'client', $pb.PbFieldType.OE, defaultOrMaker: $1.ChatClient.UNKNOWN, valueOf: $1.ChatClient.valueOf, enumValues: $1.ChatClient.values)
    ..hasRequiredFields = false
  ;

  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.deepCopy] instead. '
  'Will be removed in next major version')
  ChatAck clone() => ChatAck()..mergeFromMessage(this);
  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.rebuild] instead. '
  'Will be removed in next major version')
  ChatAck copyWith(void Function(ChatAck) updates) => super.copyWith((message) => updates(message as ChatAck)) as ChatAck;

  $pb.BuilderInfo get info_ => _i;

  @$core.pragma('dart2js:noInline')
  static ChatAck create() => ChatAck._();
  ChatAck createEmptyInstance() => create();
  static $pb.PbList<ChatAck> createRepeated() => $pb.PbList<ChatAck>();
  @$core.pragma('dart2js:noInline')
  static ChatAck getDefault() => _defaultInstance ??= $pb.GeneratedMessage.$_defaultFor<ChatAck>(create);
  static ChatAck? _defaultInstance;

  @$pb.TagNumber(1)
  $core.String get conversation => $_getSZ(0);
  @$pb.TagNumber(1)
  set conversation($core.String v) { $_setString(0, v); }
  @$pb.TagNumber(1)
  $core.bool hasConversation() => $_has(0);
  @$pb.TagNumber(1)
  void clearConversation() => clearField(1);

  @$pb.TagNumber(2)
  $core.String get from => $_getSZ(1);
  @$pb.TagNumber(2)
  set from($core.String v) { $_setString(1, v); }
  @$pb.TagNumber(2)
  $core.bool hasFrom() => $_has(1);
  @$pb.TagNumber(2)
  void clearFrom() => clearField(2);

  @$pb.TagNumber(3)
  $fixnum.Int64 get seq => $_getI64(2);
  @$pb.TagNumber(3)
  set seq($fixnum.Int64 v) { $_setInt64(2, v); }
  @$pb.TagNumber(3)
  $core.bool hasSeq() => $_has(2);
  @$pb.TagNumber(3)
  void clearSeq() => clearField(3);

  @$pb.TagNumber(4)
  $1.ChatClient get client => $_getN(3);
  @$pb.TagNumber(4)
  set client($1.ChatClient v) { setField(4, v); }
  @$pb.TagNumber(4)
  $core.bool hasClient() => $_has(3);
  @$pb.TagNumber(4)
  void clearClient() => clearField(4);
}


const _omitFieldNames = $core.bool.fromEnvironment('protobuf.omit_field_names');
const _omitMessageNames = $core.bool.fromEnvironment('protobuf.omit_message_names');
