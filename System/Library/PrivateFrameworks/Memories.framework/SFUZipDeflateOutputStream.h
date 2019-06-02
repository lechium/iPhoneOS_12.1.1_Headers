/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/SFUOutputStream.h>

@protocol SFUOutputStream;
@class NSString;

@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mOutputStream;
	z_stream_s* mDeflateStream;
	char* mOutBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canSeek;
-(id)inputStream;
-(id)closeLocalStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(id)initWithOutputStream:(id)arg1 ;
-(BOOL)canCreateInputStream;
-(void)dealloc;
-(long long)offset;
-(void)close;
@end

