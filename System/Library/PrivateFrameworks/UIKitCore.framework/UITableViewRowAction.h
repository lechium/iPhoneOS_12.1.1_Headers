/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, _UITableViewCellActionButton, UIVisualEffect;

@interface UITableViewRowAction : NSObject <NSCopying> {

	long long _style;
	NSString* _title;
	UIColor* _backgroundColor;
	/*^block*/id _handler;
	_UITableViewCellActionButton* _button;
	UIVisualEffect* _backgroundEffect;

}

@property (getter=_handler,nonatomic,readonly) id handler;                 //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
+(id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(long long)style;
-(/*^block*/id)_handler;
-(UIColor *)backgroundColor;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(id)_button;
-(id)_initWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_setButton:(id)arg1 ;
@end

