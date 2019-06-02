/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMManualUpdater : NSObject {

	id _target;
	SEL _action;
	unsigned _needsUpdate : 1;

}

@property (assign,nonatomic) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate; 
-(void)updateIfNeeded;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(void)setNeedsUpdate;
-(BOOL)needsUpdate;
@end

