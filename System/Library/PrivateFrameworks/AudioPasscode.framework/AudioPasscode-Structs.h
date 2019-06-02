/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AUAudioUnitBus, AVAudioPCMBuffer;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct _NSZone* NSZoneRef;

typedef struct _compressed_pair<RealtimeMessenger *, std::__1::default_delete<RealtimeMessenger> > {
	RealtimeMessenger __value_;
} compressed_pair<RealtimeMessenger *, std::__1::default_delete<RealtimeMessenger> >;

typedef struct unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger> > {
	compressed_pair<RealtimeMessenger *, std::__1::default_delete<RealtimeMessenger> > __ptr_;
} unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger> >;

typedef struct _compressed_pair<APCDecoderBase *, std::__1::default_delete<APCDecoderBase> > {
	APCDecoderBase __value_;
} compressed_pair<APCDecoderBase *, std::__1::default_delete<APCDecoderBase> >;

typedef struct unique_ptr<APCDecoderBase, std::__1::default_delete<APCDecoderBase> > {
	compressed_pair<APCDecoderBase *, std::__1::default_delete<APCDecoderBase> > __ptr_;
} unique_ptr<APCDecoderBase, std::__1::default_delete<APCDecoderBase> >;

typedef struct BufferedInputBus {
	AUAudioUnitBus* bus;
	unsigned maxFrames;
	AVAudioPCMBuffer* pcmBuffer;
	AudioBufferList originalAudioBufferList;
	AudioBufferList mutableAudioBufferList;
} BufferedInputBus;

typedef struct _compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > {
	char* __value_;
} compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char> > {
	char* __begin_;
	char* __end_;
	compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > __end_cap_;
} vector<unsigned char, std::__1::allocator<unsigned char> >;

typedef struct _compressed_pair<DecodedDataMessage *, std::__1::allocator<DecodedDataMessage> > {
	DecodedDataMessage __value_;
} compressed_pair<DecodedDataMessage *, std::__1::allocator<DecodedDataMessage> >;

typedef struct vector<DecodedDataMessage, std::__1::allocator<DecodedDataMessage> > {
	DecodedDataMessage __begin_;
	DecodedDataMessage __end_;
	compressed_pair<DecodedDataMessage *, std::__1::allocator<DecodedDataMessage> > __end_cap_;
} vector<DecodedDataMessage, std::__1::allocator<DecodedDataMessage> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, apc::Any>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, apc::Any>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, apc::Any>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, apc::Any> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, apc::Any>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, apc::Any>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, apc::Any> > >;

typedef struct map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > > {
	tree<std::__1::__value_type<unsigned int, apc::Any>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, apc::Any> > > __tree_;
} map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > >;

typedef struct _compressed_pair<AudioCapturerIfc *, std::__1::default_delete<AudioCapturerIfc> > {
	AudioCapturerIfc __value_;
} compressed_pair<AudioCapturerIfc *, std::__1::default_delete<AudioCapturerIfc> >;

typedef struct unique_ptr<AudioCapturerIfc, std::__1::default_delete<AudioCapturerIfc> > {
	compressed_pair<AudioCapturerIfc *, std::__1::default_delete<AudioCapturerIfc> > __ptr_;
} unique_ptr<AudioCapturerIfc, std::__1::default_delete<AudioCapturerIfc> >;

typedef struct _compressed_pair<APCEncoderBase *, std::__1::default_delete<APCEncoderBase> > {
	APCEncoderBase __value_;
} compressed_pair<APCEncoderBase *, std::__1::default_delete<APCEncoderBase> >;

typedef struct unique_ptr<APCEncoderBase, std::__1::default_delete<APCEncoderBase> > {
	compressed_pair<APCEncoderBase *, std::__1::default_delete<APCEncoderBase> > __ptr_;
} unique_ptr<APCEncoderBase, std::__1::default_delete<APCEncoderBase> >;

typedef struct _compressed_pair<EOFReachedMessage *, std::__1::default_delete<EOFReachedMessage> > {
	EOFReachedMessage __value_;
} compressed_pair<EOFReachedMessage *, std::__1::default_delete<EOFReachedMessage> >;

typedef struct unique_ptr<EOFReachedMessage, std::__1::default_delete<EOFReachedMessage> > {
	compressed_pair<EOFReachedMessage *, std::__1::default_delete<EOFReachedMessage> > __ptr_;
} unique_ptr<EOFReachedMessage, std::__1::default_delete<EOFReachedMessage> >;

typedef struct CAExtAudioFile {
	/*function pointer*/void* _vptr$CAExtAudioFile;
	OpaqueExtAudioFile mExtAudioFile;
} CAExtAudioFile;

typedef struct _compressed_pair<CABufferList *, std::__1::default_delete<CABufferList> > {
	CABufferList __value_;
} compressed_pair<CABufferList *, std::__1::default_delete<CABufferList> >;

typedef struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList> > {
	compressed_pair<CABufferList *, std::__1::default_delete<CABufferList> > __ptr_;
} unique_ptr<CABufferList, std::__1::default_delete<CABufferList> >;

