// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FriendBlack.proto

package org.flmelody.wim.message;

public interface FriendBlackOrBuilder extends
    // @@protoc_insertion_point(interface_extends:FriendBlack)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <pre>
   * 请求人
   * </pre>
   *
   * <code>string from = 1;</code>
   * @return The from.
   */
  java.lang.String getFrom();
  /**
   * <pre>
   * 请求人
   * </pre>
   *
   * <code>string from = 1;</code>
   * @return The bytes for from.
   */
  com.google.protobuf.ByteString
      getFromBytes();

  /**
   * <pre>
   * 拉黑目标
   * </pre>
   *
   * <code>string to = 2;</code>
   * @return The to.
   */
  java.lang.String getTo();
  /**
   * <pre>
   * 拉黑目标
   * </pre>
   *
   * <code>string to = 2;</code>
   * @return The bytes for to.
   */
  com.google.protobuf.ByteString
      getToBytes();

  /**
   * <pre>
   * 发包时间
   * </pre>
   *
   * <code>.google.protobuf.Timestamp timestamp = 3;</code>
   * @return Whether the timestamp field is set.
   */
  boolean hasTimestamp();
  /**
   * <pre>
   * 发包时间
   * </pre>
   *
   * <code>.google.protobuf.Timestamp timestamp = 3;</code>
   * @return The timestamp.
   */
  com.google.protobuf.Timestamp getTimestamp();
  /**
   * <pre>
   * 发包时间
   * </pre>
   *
   * <code>.google.protobuf.Timestamp timestamp = 3;</code>
   */
  com.google.protobuf.TimestampOrBuilder getTimestampOrBuilder();
}
