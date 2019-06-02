/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXDisplayLinkManagerTargetAction : NSObject {

	id _target;
	SEL _actionSelector;
	unsigned long long _displayDidRefreshCount;

}

@property (nonatomic,retain) id target;                                              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL actionSelector;                                     //@synthesize actionSelector=_actionSelector - In the implementation block
@property (assign,nonatomic) unsigned long long displayDidRefreshCount;              //@synthesize displayDidRefreshCount=_displayDidRefreshCount - In the implementation block
-(void)setActionSelector:(SEL)arg1 ;
-(SEL)actionSelector;
-(unsigned long long)displayDidRefreshCount;
-(void)setDisplayDidRefreshCount:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 ;
-(void)displayDidRefresh:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTarget:(id)arg1 ;
-(id)target;
@end

