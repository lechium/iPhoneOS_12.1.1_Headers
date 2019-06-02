/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoardUI/BaseBoardUI-Structs.h>
@class BSAtomicSignal, NSThread, UIImage;

@interface BSUIMappedImageCacheFuture : NSObject {

	os_unfair_lock_s _lock;
	BSAtomicSignal* _submitted;
	NSThread* _submissionThread;
	/*^block*/id _lock_workBlock;
	BOOL _lock_workCompletionWasCalled;
	UIImage* _postlock_cachedImage;

}
-(id)cacheImage;
-(void)submitWorkBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

