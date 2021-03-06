/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@interface PAStackshotFrameIterator : NSObject {

	const void* curFrame;
	const void* topFrame;
	thread_snapshot* snap;
	unsigned curIndex;
	BOOL currentFrameIsKernel;

}
-(const void*)firstValidUserFrame;
-(BOOL)is64bit;
-(id)initWithThreadSnapshot:(thread_snapshot*)arg1 frameStart:(const void*)arg2 ;
-(void)getCurrentFrame:(pa_stack_frame*)arg1 ;
-(BOOL)moveToNextFrame;
@end

