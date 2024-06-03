//
//  Generated code. Do not modify.
//  source: ChatResponse.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:core' as $core;

import 'package:fixnum/fixnum.dart' as $fixnum;
import 'package:protobuf/protobuf.dart' as $pb;

import 'ChatStatus.pbenum.dart' as $3;
import 'google/protobuf/timestamp.pb.dart' as $0;

/// 聊天响应
class ChatResponse extends $pb.GeneratedMessage {
  factory ChatResponse({
    $core.String? conversation,
    $core.String? random,
    $fixnum.Int64? seq,
    $0.Timestamp? timestamp,
    $3.ChatStatus? chatStatus,
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
    if (timestamp != null) {
      $result.timestamp = timestamp;
    }
    if (chatStatus != null) {
      $result.chatStatus = chatStatus;
    }
    return $result;
  }
  ChatResponse._() : super();
  factory ChatResponse.fromBuffer($core.List<$core.int> i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromBuffer(i, r);
  factory ChatResponse.fromJson($core.String i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromJson(i, r);

  static final $pb.BuilderInfo _i = $pb.BuilderInfo(_omitMessageNames ? '' : 'ChatResponse', createEmptyInstance: create)
    ..aOS(1, _omitFieldNames ? '' : 'conversation')
    ..aOS(2, _omitFieldNames ? '' : 'random')
    ..a<$fixnum.Int64>(3, _omitFieldNames ? '' : 'seq', $pb.PbFieldType.OU6, defaultOrMaker: $fixnum.Int64.ZERO)
    ..aOM<$0.Timestamp>(4, _omitFieldNames ? '' : 'timestamp', subBuilder: $0.Timestamp.create)
    ..e<$3.ChatStatus>(5, _omitFieldNames ? '' : 'chatStatus', $pb.PbFieldType.OE, protoName: 'chatStatus', defaultOrMaker: $3.ChatStatus.OK, valueOf: $3.ChatStatus.valueOf, enumValues: $3.ChatStatus.values)
    ..hasRequiredFields = false
  ;

  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.deepCopy] instead. '
  'Will be removed in next major version')
  ChatResponse clone() => ChatResponse()..mergeFromMessage(this);
  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.rebuild] instead. '
  'Will be removed in next major version')
  ChatResponse copyWith(void Function(ChatResponse) updates) => super.copyWith((message) => updates(message as ChatResponse)) as ChatResponse;

  $pb.BuilderInfo get info_ => _i;

  @$core.pragma('dart2js:noInline')
  static ChatResponse create() => ChatResponse._();
  ChatResponse createEmptyInstance() => create();
  static $pb.PbList<ChatResponse> createRepeated() => $pb.PbList<ChatResponse>();
  @$core.pragma('dart2js:noInline')
  static ChatResponse getDefault() => _defaultInstance ??= $pb.GeneratedMessage.$_defaultFor<ChatResponse>(create);
  static ChatResponse? _defaultInstance;

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
  $0.Timestamp get timestamp => $_getN(3);
  @$pb.TagNumber(4)
  set timestamp($0.Timestamp v) { setField(4, v); }
  @$pb.TagNumber(4)
  $core.bool hasTimestamp() => $_has(3);
  @$pb.TagNumber(4)
  void clearTimestamp() => clearField(4);
  @$pb.TagNumber(4)
  $0.Timestamp ensureTimestamp() => $_ensure(3);

  @$pb.TagNumber(5)
  $3.ChatStatus get chatStatus => $_getN(4);
  @$pb.TagNumber(5)
  set chatStatus($3.ChatStatus v) { setField(5, v); }
  @$pb.TagNumber(5)
  $core.bool hasChatStatus() => $_has(4);
  @$pb.TagNumber(5)
  void clearChatStatus() => clearField(5);
}


const _omitFieldNames = $core.bool.fromEnvironment('protobuf.omit_field_names');
const _omitMessageNames = $core.bool.fromEnvironment('protobuf.omit_message_names');
