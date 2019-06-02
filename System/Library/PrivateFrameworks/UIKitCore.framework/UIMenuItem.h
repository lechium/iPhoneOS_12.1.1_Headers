/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIMenuItem : NSObject {

	BOOL _dontDismiss;
	NSString* _title;
	SEL _action;

}

@property (assign,nonatomic) BOOL dontDismiss;              //@synthesize dontDismiss=_dontDismiss - In the implementation block
@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
+(id)menuItemWithTitle:(id)arg1 action:(SEL)arg2 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(BOOL)dontDismiss;
-(void)setDontDismiss:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 ;
@end

