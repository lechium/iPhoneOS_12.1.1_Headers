/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNCanceller : NSObject {

	/*^block*/id _signallingBlock;
	os_unfair_lock_s _lock;
	BOOL _signalled;

}
-(BOOL)tryToPerformBlock:(/*^block*/id)arg1 usingSignallingBlock:(/*^block*/id)arg2 ;
-(void)resetWithSignallingBlock:(/*^block*/id)arg1 ;
-(void)releaseSignallingBlock;
-(void)resetAndPerformBlock:(/*^block*/id)arg1 usingSignallingBlock:(/*^block*/id)arg2 ;
-(void)signalCancellation;
-(BOOL)wasSignalled;
-(id)init;
@end
