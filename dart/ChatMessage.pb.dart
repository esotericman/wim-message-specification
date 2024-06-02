//
//  Generated code. Do not modify.
//  source: ChatMessage.proto
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
import 'google/protobuf/timestamp.pb.dart' as $0;

/// 聊天消息
class ChatMessage extends $pb.GeneratedMessage {
  factory ChatMessage({
    $core.String? conversation,
    $core.String? random,
    $fixnum.Int64? seq,
    $core.String? from,
    $core.String? to,
    $core.String? content,
    $core.bool? withdraw,
    $0.Timestamp? timestamp,
    $1.ChatClient? client,
  }) {
    final $result = create();
    if (conversation != null) {
      $result.conversation = conversation;
    }
    if (random != null) {
      $result.random = random;
    }
    if (seq != null) {
      $result.seq = seq;
    }
    if (from != null) {
      $result.from = from;
    }
    if (to != null) {
      $result.to = to;
    }
    if (content != null) {
      $result.content = content;
    }
    if (withdraw != null) {
      $result.withdraw = withdraw;
    }
    if (timestamp != null) {
      $result.timestamp = timestamp;
    }
    if (client != null) {
      $result.client = client;
    }
    return $result;
  }
  ChatMessage._() : super();
  factory ChatMessage.fromBuffer($core.List<$core.int> i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromBuffer(i, r);
  factory ChatMessage.fromJson($core.String i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromJson(i, r);

  static final $pb.BuilderInfo _i = $pb.BuilderInfo(_omitMessageNames ? '' : 'ChatMessage', createEmptyInstance: create)
    ..aOS(1, _omitFieldNames ? '' : 'conversation')
    ..aOS(2, _omitFieldNames ? '' : 'random')
    ..a<$fixnum.Int64>(3, _omitFieldNames ? '' : 'seq', $pb.PbFieldType.OU6, defaultOrMaker: $fixnum.Int64.ZERO)
    ..aOS(4, _omitFieldNames ? '' : 'from')
    ..aOS(5, _omitFieldNames ? '' : 'to')
    ..aOS(6, _omitFieldNames ? '' : 'content')
    ..aOB(7, _omitFieldNames ? '' : 'withdraw')
    ..aOM<$0.Timestamp>(8, _omitFieldNames ? '' : 'timestamp', subBuilder: $0.Timestamp.create)
    ..e<$1.ChatClient>(9, _omitFieldNames ? '' : 'client', $pb.PbFieldType.OE, defaultOrMaker: $1.ChatClient.UNKNOWN, valueOf: $1.ChatClient.valueOf, enumValues: $1.ChatClient.values)
    ..hasRequiredFields = false
  ;

  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.deepCopy] instead. '
  'Will be removed in next major version')
  ChatMessage clone() => ChatMessage()..mergeFromMessage(this);
  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.rebuild] instead. '
  'Will be removed in next major version')
  ChatMessage copyWith(void Function(ChatMessage) updates) => super.copyWith((message) => updates(message as ChatMessage)) as ChatMessage;

  $pb.BuilderInfo get info_ => _i;

  @$core.pragma('dart2js:noInline')
  static ChatMessage create() => ChatMessage._();
  ChatMessage createEmptyInstance() => create();
  static $pb.PbList<ChatMessage> createRepeated() => $pb.PbList<ChatMessage>();
  @$core.pragma('dart2js:noInline')
  static ChatMessage getDefault() => _defaultInstance ??= $pb.GeneratedMessage.$_defaultFor<ChatMessage>(create);
  static ChatMessage? _defaultInstance;

  @$pb.TagNumber(1)
  $core.String get conversation => $_getSZ(0);
  @$pb.TagNumber(1)
  set conversation($core.String v) { $_setString(0, v); }
  @$pb.TagNumber(1)
  $core.bool hasConversation() => $_has(0);
  @$pb.TagNumber(1)
  void clearConversation() => clearField(1);

  @$pb.TagNumber(2)
  $core.String get random => $_getSZ(1);
  @$pb.TagNumber(2)
  set random($core.String v) { $_setString(1, v); }
  @$pb.TagNumber(2)
  $core.bool hasRandom() => $_has(1);
  @$pb.TagNumber(2)
  void clearRandom() => clearField(2);

  @$pb.TagNumber(3)
  $fixnum.Int64 get seq => $_getI64(2);
  @$pb.TagNumber(3)
  set seq($fixnum.Int64 v) { $_setInt64(2, v); }
  @$pb.TagNumber(3)
  $core.bool hasSeq() => $_has(2);
  @$pb.TagNumber(3)
  void clearSeq() => clearField(3);

  @$pb.TagNumber(4)
  $core.String get from => $_getSZ(3);
  @$pb.TagNumber(4)
  set from($core.String v) { $_setString(3, v); }
  @$pb.TagNumber(4)
  $core.bool hasFrom() => $_has(3);
  @$pb.TagNumber(4)
  void clearFrom() => clearField(4);

  @$pb.TagNumber(5)
  $core.String get to => $_getSZ(4);
  @$pb.TagNumber(5)
  set to($core.String v) { $_setString(4, v); }
  @$pb.TagNumber(5)
  $core.bool hasTo() => $_has(4);
  @$pb.TagNumber(5)
  void clearTo() => clearField(5);

  @$pb.TagNumber(6)
  $core.String get content => $_getSZ(5);
  @$pb.TagNumber(6)
  set content($core.String v) { $_setString(5, v); }
  @$pb.TagNumber(6)
  $core.bool hasContent() => $_has(5);
  @$pb.TagNumber(6)
  void clearContent() => clearField(6);

  @$pb.TagNumber(7)
  $core.bool get withdraw => $_getBF(6);
  @$pb.TagNumber(7)
  set withdraw($core.bool v) { $_setBool(6, v); }
  @$pb.TagNumber(7)
  $core.bool hasWithdraw() => $_has(6);
  @$pb.TagNumber(7)
  void clearWithdraw() => clearField(7);

  @$pb.TagNumber(8)
  $0.Timestamp get timestamp => $_getN(7);
  @$pb.TagNumber(8)
  set timestamp($0.Timestamp v) { setField(8, v); }
  @$pb.TagNumber(8)
  $core.bool hasTimestamp() => $_has(7);
  @$pb.TagNumber(8)
  void clearTimestamp() => clearField(8);
  @$pb.TagNumber(8)
  $0.Timestamp ensureTimestamp() => $_ensure(7);

  @$pb.TagNumber(9)
  $1.ChatClient get client => $_getN(8);
  @$pb.TagNumber(9)
  set client($1.ChatClient v) { setField(9, v); }
  @$pb.TagNumber(9)
  $core.bool hasClient() => $_has(8);
  @$pb.TagNumber(9)
  void clearClient() => clearField(9);
}


const _omitFieldNames = $core.bool.fromEnvironment('protobuf.omit_field_names');
const _omitMessageNames = $core.bool.fromEnvironment('protobuf.omit_message_names');
