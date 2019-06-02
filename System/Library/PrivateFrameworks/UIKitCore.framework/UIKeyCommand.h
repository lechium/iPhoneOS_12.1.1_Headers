/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSIndexSet, UIEvent, UIResponder, NSString, UIViewController;

@interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding> {

	NSIndexSet* _keyCodes;
	SEL _action;
	SEL _upAction;
	BOOL _repeatable;
	long long _buttonType;
	UIEvent* _triggeringEvent;
	UIResponder* _originatingResponder;
	NSString* _segueIdentifier;
	UIViewController* _controllerForSegue;
	NSString* _input;
	long long _modifierFlags;
	NSString* _discoverabilityTitle;

}

@property (nonatomic,readonly) NSString * input;                         //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) long long modifierFlags;                  //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,copy) NSString * discoverabilityTitle;              //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4 ;
+(id)keyCommandWithCompactInput:(id)arg1 action:(SEL)arg2 upAction:(SEL)arg3 ;
+(id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4 ;
+(id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 ;
+(id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 discoverabilityTitle:(id)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)action;
-(void)_setButtonType:(long long)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)nextResponder;
-(long long)_buttonType;
-(NSString *)input;
-(NSString *)discoverabilityTitle;
-(long long)modifierFlags;
-(id)discoverabilityInput;
-(id)_segueIdentifier;
-(BOOL)triggerSegueIfPossible;
-(BOOL)repeatable;
-(SEL)upAction;
-(id)_keyCodes;
-(void)_setOriginatingResponder:(id)arg1 ;
-(void)_setViewControllerForSegue:(id)arg1 ;
-(id)_controllerForSegue;
-(void)_setTriggeringEvent:(id)arg1 ;
-(id)initWithKeyCommand:(id)arg1 ;
-(id)_initWithInput:(id)arg1 modifierFlags:(long long)arg2 keyCodes:(id)arg3 action:(SEL)arg4 upAction:(SEL)arg5 discoverabilityTitle:(id)arg6 buttonType:(long long)arg7 segueIdentifier:(id)arg8 ;
-(id)_nonRepeatableKeyCommand;
-(id)_triggeringEvent;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
@end

