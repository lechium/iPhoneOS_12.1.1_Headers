/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/ASDRingBuffer.h>
@class ASDStreamFormat;


@protocol ASDRingBuffer <NSObject>
@property (assign,nonatomic) long long frameCapacity; 
@property (nonatomic,retain) ASDStreamFormat * writeFormat; 
@property (nonatomic,retain) ASDStreamFormat * readFormat; 
@property (nonatomic,readonly) id writeBlock; 
@property (nonatomic,readonly) id readBlock; 
@property (nonatomic,readonly) id readWithZerosBlock; 
@property (getter=isAllocated,nonatomic,readonly) BOOL allocated; 
@required
-(id)writeBlock;
-(ASDStreamFormat *)readFormat;
-(ASDStreamFormat *)writeFormat;
-(BOOL)isAllocated;
-(void)allocate;
-(void)deallocate;
-(void)setFrameCapacity:(long long)arg1;
-(void)setWriteFormat:(id)arg1;
-(void)setReadFormat:(id)arg1;
-(id)readBlock;
-(id)readWithZerosBlock;
-(long long)frameCapacity;
-(void)clear;

@end


@class ASDStreamFormat, NSString;

@interface ASDRingBuffer : NSObject <ASDRingBuffer> {

	unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer> >* _ringBuffer;
	BOOL _allocated;
	long long _frameCapacity;
	ASDStreamFormat* _writeFormat;
	ASDStreamFormat* _readFormat;

}

@property (assign,getter=isAllocated,nonatomic) BOOL allocated;              //@synthesize allocated=_allocated - In the implementation block
@property (assign,nonatomic) long long frameCapacity;                        //@synthesize frameCapacity=_frameCapacity - In the implementation block
@property (nonatomic,retain) ASDStreamFormat * writeFormat;                  //@synthesize writeFormat=_writeFormat - In the implementation block
@property (nonatomic,retain) ASDStreamFormat * readFormat;                   //@synthesize readFormat=_readFormat - In the implementation block
@property (nonatomic,readonly) id writeBlock; 
@property (nonatomic,readonly) id readBlock; 
@property (nonatomic,readonly) id readWithZerosBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)writeBlock;
-(id)initWithFrameCapacity:(long long)arg1 writeFormat:(id)arg2 readFormat:(id)arg3 ;
-(ASDStreamFormat *)readFormat;
-(ASDStreamFormat *)writeFormat;
-(void)setAllocated:(BOOL)arg1 ;
-(BOOL)isAllocated;
-(void)allocate;
-(void)deallocate;
-(void)setFrameCapacity:(long long)arg1 ;
-(void)setWriteFormat:(ASDStreamFormat *)arg1 ;
-(void)setReadFormat:(ASDStreamFormat *)arg1 ;
-(id)readBlock;
-(id)readWithZerosBlock;
-(id)initWithFrameCapacity:(long long)arg1 ;
-(long long)frameCapacity;
-(void)clear;
@end

