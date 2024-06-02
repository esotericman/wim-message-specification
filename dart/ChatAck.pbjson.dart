//
//  Generated code. Do not modify.
//  source: ChatAck.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:convert' as $convert;
import 'dart:core' as $core;
import 'dart:typed_data' as $typed_data;

@$core.Deprecated('Use chatAckDescriptor instead')
const ChatAck$json = {
  '1': 'ChatAck',
  '2': [
    {'1': 'conversation', '3': 1, '4': 1, '5': 9, '10': 'conversation'},
    {'1': 'from', '3': 2, '4': 1, '5': 9, '10': 'from'},
    {'1': 'seq', '3': 3, '4': 1, '5': 4, '10': 'seq'},
    {'1': 'client', '3': 4, '4': 1, '5': 14, '6': '.ChatClient', '10': 'client'},
  ],
};

/// Descriptor for `ChatAck`. Decode as a `google.protobuf.DescriptorProto`.
final $typed_data.Uint8List chatAckDescriptor = $convert.base64Decode(
    'CgdDaGF0QWNrEiIKDGNvbnZlcnNhdGlvbhgBIAEoCVIMY29udmVyc2F0aW9uEhIKBGZyb20YAi'
    'ABKAlSBGZyb20SEAoDc2VxGAMgASgEUgNzZXESIwoGY2xpZW50GAQgASgOMgsuQ2hhdENsaWVu'
    'dFIGY2xpZW50');

