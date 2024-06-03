## Instruction

This project is a bunch of message specification of [Wim](https://github.com/esotericman/wim)

## Generate java code

```shell
protoc --proto_path=./protobuf --java_out=./java Heartbeat.proto ChatMessage.proto ChatAck.proto ChatClient.proto ChatResponse.proto ChatStatus.proto FriendAdd.proto FriendBlack.proto ChatType.proto
```

## Generate js code

```shell
protoc --proto_path=./protobuf --js_out=import_style=commonjs,binary:./js Heartbeat.proto ChatMessage.proto ChatAck.proto ChatClient.proto ChatResponse.proto ChatStatus.proto FriendAdd.proto FriendBlack.proto ChatType.proto
```

## Generate dart code

```shell
protoc --proto_path=./protobuf --dart_out=./dart Heartbeat.proto ChatMessage.proto ChatAck.proto ChatClient.proto ChatResponse.proto ChatStatus.proto FriendAdd.proto FriendBlack.proto ChatType.proto
```

## Generate c++ code

```shell
protoc --proto_path=./protobuf --cpp_out=./cpp Heartbeat.proto ChatMessage.proto ChatAck.proto ChatClient.proto ChatResponse.proto ChatStatus.proto FriendAdd.proto FriendBlack.proto ChatType.proto
```