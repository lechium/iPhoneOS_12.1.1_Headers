/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCOperationCanceling.h>

@protocol OS_dispatch_group;
@class NSObject, NSError, FCForYouCatchUpCondition, NSString;

@interface FCForYouCatchUpConditionWaiter : NSObject <FCOperationCanceling> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_group> _group;
	BOOL _finished;
	NSError* _error;
	FCForYouCatchUpCondition* _condition;

}

@property (nonatomic,retain) FCForYouCatchUpCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)signalWithError:(id)arg1 ;
-(void)_possiblyFinishWithError:(id)arg1 ;
-(id)_waitWithTimeoutTime:(unsigned long long)arg1 ;
-(id)waitWithTimeoutInterval:(double)arg1 ;
-(id)wait;
-(id)init;
-(void)cancel;
-(FCForYouCatchUpCondition *)condition;
-(void)setCondition:(FCForYouCatchUpCondition *)arg1 ;
@end

