/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TSDGLDataArrayBuffer, TSDGLDataBuffer;

@interface TSDGLDataBufferAttribute : NSObject {

	BOOL _isNormalized;
	unsigned _bufferUsage;
	int _dataType;
	int _componentCount;
	int _locationInShader;
	NSString* _name;
	unsigned long long _bufferOffset;
	TSDGLDataArrayBuffer* _dataArrayBuffer;
	TSDGLDataBuffer* _dataBuffer;

}

@property (assign,nonatomic) int locationInShader;                                //@synthesize locationInShader=_locationInShader - In the implementation block
@property (assign,nonatomic) unsigned long long bufferOffset;                     //@synthesize bufferOffset=_bufferOffset - In the implementation block
@property (assign,nonatomic) TSDGLDataArrayBuffer * dataArrayBuffer;              //@synthesize dataArrayBuffer=_dataArrayBuffer - In the implementation block
@property (assign,nonatomic) TSDGLDataBuffer * dataBuffer;                        //@synthesize dataBuffer=_dataBuffer - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned bufferUsage;                              //@synthesize bufferUsage=_bufferUsage - In the implementation block
@property (nonatomic,readonly) int dataType;                                      //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) int componentCount;                                //@synthesize componentCount=_componentCount - In the implementation block
@property (nonatomic,readonly) BOOL isNormalized;                                 //@synthesize isNormalized=_isNormalized - In the implementation block
+(id)attributeWithName:(id)arg1 bufferUsage:(unsigned)arg2 dataType:(int)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5 ;
-(int)dataType;
-(id)initWithName:(id)arg1 bufferUsage:(unsigned)arg2 dataType:(int)arg3 normalized:(BOOL)arg4 componentCount:(unsigned long long)arg5 ;
-(int)componentCount;
-(unsigned)bufferUsage;
-(BOOL)isNormalized;
-(void)setBufferUsage:(unsigned)arg1 ;
-(void)setComponentCount:(int)arg1 ;
-(int)locationInShader;
-(void)setLocationInShader:(int)arg1 ;
-(unsigned long long)bufferOffset;
-(void)setBufferOffset:(unsigned long long)arg1 ;
-(TSDGLDataArrayBuffer *)dataArrayBuffer;
-(void)setDataArrayBuffer:(TSDGLDataArrayBuffer *)arg1 ;
-(TSDGLDataBuffer *)dataBuffer;
-(void)setDataBuffer:(TSDGLDataBuffer *)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
@end

