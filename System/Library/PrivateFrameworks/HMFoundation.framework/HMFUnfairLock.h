/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLocking.h>

@interface HMFUnfairLock : HMFObject <HMFLocking> {

	unsigned long long _options;

}

@property (readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(id)lockWithOptions:(unsigned long long)arg1 ;
+(id)lock;
-(void)assertOwner;
-(void)assertNotOwner;
-(id)init;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)lock;
-(void)unlock;
@end

