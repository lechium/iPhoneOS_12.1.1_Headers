/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNotificationCenter, NSOperationQueue, NSString;

@interface __NSObserver : NSObject {

	NSNotificationCenter* nc;
	NSOperationQueue* queue;
	NSString* name;
	id object;
	/*^block*/id block;

}
+(id)observerWithCenter:(id)arg1 queue:(id)arg2 name:(id)arg3 object:(id)arg4 block:(/*^block*/id)arg5 ;
+(BOOL)isAnObserver:(id)arg1 ;
+(void)forgetObserver:(id)arg1 ;
-(void)_doit:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)object;
@end
