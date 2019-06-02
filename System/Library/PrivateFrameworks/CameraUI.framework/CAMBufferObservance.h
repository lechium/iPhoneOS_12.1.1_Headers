/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMBufferObservance : NSObject {

	BOOL _removedOnceEnabled;
	BOOL _fulfilled;
	BOOL _enabled;
	/*^block*/id _predicate;

}

@property (assign,getter=isFulfilled,nonatomic) BOOL fulfilled;                                  //@synthesize fulfilled=_fulfilled - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (getter=isRemovedOnceEnabled,nonatomic,readonly) BOOL removedOnceEnabled;              //@synthesize removedOnceEnabled=_removedOnceEnabled - In the implementation block
@property (nonatomic,copy,readonly) id predicate;                                                //@synthesize predicate=_predicate - In the implementation block
-(BOOL)shouldBeFulfilledByChange:(id)arg1 ;
-(void)setFulfilled:(BOOL)arg1 ;
-(id)initWithPredicate:(/*^block*/id)arg1 removedOnceEnabled:(BOOL)arg2 ;
-(void)setupObservanceForBuffer:(id)arg1 ;
-(void)teardownObservanceForBuffer:(id)arg1 ;
-(void)fulfillWithChange:(id)arg1 ;
-(BOOL)isRemovedOnceEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)predicate;
-(BOOL)isFulfilled;
@end

