/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKMetalResource.h>

@protocol MTLBuffer;
@class NSString;

@interface PKMetalBuffer : NSObject <PKMetalResource> {

	unsigned long long _lockCount;
	Ai _isPurged;
	id<MTLBuffer> _metalBuffer;

}

@property (nonatomic,readonly) id<MTLBuffer> metalBuffer;              //@synthesize metalBuffer=_metalBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLBuffer>)metalBuffer;
-(BOOL)isPurged;
-(id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
-(BOOL)lock;
-(void)unlock;
@end

