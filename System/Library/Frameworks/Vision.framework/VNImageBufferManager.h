/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@class CIContext, NSHashTable, NSLock;

@interface VNImageBufferManager : NSObject {

	CIContext* mainCIContext;
	id<MTLDevice> mainCIContextMetalDevice;
	CIContext* lowPriorityCIContext;
	id<MTLDevice> lowPriorityCIContextMetalDevice;
	NSHashTable* activeImageBuffers;
	NSLock* bufferTableLock;

}
+(id)manager;
-(void)addImageBuffer:(id)arg1 ;
-(void)removeBuffer:(id)arg1 ;
-(id)sharedCIContextWithOptions:(id)arg1 ;
-(void)purgeAllCaches;
-(id)init;
-(void)dealloc;
@end
