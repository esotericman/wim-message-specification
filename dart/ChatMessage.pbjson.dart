//
//  Generated code. Do not modify.
//  source: ChatMessage.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:convert' as $convert;
import 'dart:core' as $core;
import 'dart:typed_data' as $typed_data;

@$core.Deprecated('Use chatMessageDescriptor instead')
const ChatMessage$json = {
  '1': 'ChatMessage',
  '2': [
    {'1': 'conversation', '3': 1, '4': 1, '5': 9, '10': 'conversation'},
    {'1': 'random', '3': 2, '4': 1, '5': 9, '10': 'random'},
    {'1': 'seq', '3': 3, '4': 1, '5': 4, '10': 'seq'},
    {'1': 'from', '3': 4, '4': 1, '5': 9, '10': 'from'},
    {'1': 'to', '3': 5, '4': 1, '5': 9, '10': 'to'},
    {'1': 'content', '3': 6, '4': 1, '5': 9, '10': 'content'},
    {'1': 'withdraw', '3': 7, '4': 1, '5': 8, '10': 'withdraw'},
    {'1': 'timestamp', '3': 8, '4': 1, '5': 11, '6': '.google.protobuf.Timestamp', '10': 'timestamp'},
    {'1': 'client', '3': 9, '4': 1, '5': 14, '6': '.ChatClient', '10': 'client'},
    {'1': 'type', '3': 10, '4': 1, '5': 14, '6': '.ChatType', '10': 'type'},
  ],
};

/// Descriptor for `ChatMessage`. Decode as a `google.protobuf.DescriptorProto`.
final $typed_data.Uint8List chatMessageDescriptor = $convert.base64Decode(
    'CgtDaGF0TWVzc2FnZRIiCgxjb252ZXJzYXRpb24YASABKAlSDGNvbnZlcnNhdGlvbhIWCgZyYW'
    '5kb20YAiABKAlSBnJhbmRvbRIQCgNzZXEYAyABKARSA3NlcRISCgRmcm9tGAQgASgJUgRmcm9t'
    'Eg4KAnRvGAUgASgJUgJ0bxIYCgdjb250ZW50GAYgASgJUgdjb250ZW50EhoKCHdpdGhkcmF3GA'
    'cgASgIUgh3aXRoZHJhdxI4Cgl0aW1lc3RhbXAYCCABKAsyGi5nb29nbGUucHJvdG9idWYuVGlt'
    'ZXN0YW1wUgl0aW1lc3RhbXASIwoGY2xpZW50GAkgASgOMgsuQ2hhdENsaWVudFIGY2xpZW50Eh'
    '0KBHR5cGUYCiABKA4yCS5DaGF0VHlwZVIEdHlwZQ==');

