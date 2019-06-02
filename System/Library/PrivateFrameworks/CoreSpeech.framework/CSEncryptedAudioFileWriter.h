/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSAudioFileWriter.h>

@class NSURL, NSMutableData, NSString;

@interface CSEncryptedAudioFileWriter : NSObject <CSAudioFileWriter> {

	NSURL* _fileUrl;
	NSMutableData* _writeBuffer;
	unsigned long long _sampleByteDepth;

}

@property (nonatomic,retain) NSURL * fileUrl;                                 //@synthesize fileUrl=_fileUrl - In the implementation block
@property (nonatomic,retain) NSMutableData * writeBuffer;                     //@synthesize writeBuffer=_writeBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long sampleByteDepth;              //@synthesize sampleByteDepth=_sampleByteDepth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)fileUrl;
-(void)setFileUrl:(NSURL *)arg1 ;
-(BOOL)endAudio;
-(BOOL)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 ;
-(unsigned long long)sampleByteDepth;
-(void)setSampleByteDepth:(unsigned long long)arg1 ;
-(id)initWithFileUrl:(id)arg1 sampleByteDepth:(unsigned long long)arg2 ;
-(NSMutableData *)writeBuffer;
-(void)setWriteBuffer:(NSMutableData *)arg1 ;
@end

