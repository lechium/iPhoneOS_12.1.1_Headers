/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPressesEvent.h>

@class NSString;

@interface UIPhysicalKeyboardEvent : UIPressesEvent {

	BOOL __externalEvent;
	int _inputFlags;
	NSString* _modifiedInput;
	NSString* _unmodifiedInput;
	NSString* _shiftModifiedInput;
	NSString* _commandModifiedInput;
	NSString* _markedInput;
	long long _modifierFlags;
	NSString* _privateInput;
	NSString* _hint;

}

@property (nonatomic,retain) NSString * _modifiedInput;                                //@synthesize modifiedInput=_modifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _unmodifiedInput;                              //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _shiftModifiedInput;                           //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _commandModifiedInput;                         //@synthesize commandModifiedInput=_commandModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * _markedInput;                                  //@synthesize markedInput=_markedInput - In the implementation block
@property (nonatomic,retain) NSString * _privateInput;                                 //@synthesize privateInput=_privateInput - In the implementation block
@property (nonatomic,retain) NSString * _hint;                                         //@synthesize hint=_hint - In the implementation block
@property (assign,nonatomic) long long _modifierFlags;                                 //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) long long _gsModifierFlags; 
@property (nonatomic,readonly) BOOL _isKeyDown; 
@property (nonatomic,readonly) BOOL _isGlobeKey; 
@property (nonatomic,readonly) long long _keyCode; 
@property (assign,nonatomic) int _inputFlags;                                          //@synthesize inputFlags=_inputFlags - In the implementation block
@property (assign,getter=_isExternalEvent,nonatomic) BOOL _externalEvent;              //@synthesize _externalEvent=__externalEvent - In the implementation block
+(id)_eventWithInput:(id)arg1 inputFlags:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(id)_cloneEvent;
-(BOOL)_isGlobeKey;
-(BOOL)_isKeyDown;
-(long long)_modifierFlags;
-(NSString *)_unmodifiedInput;
-(long long)_gsModifierFlags;
-(int)_inputFlags;
-(long long)_keyCode;
-(void)set_inputFlags:(int)arg1 ;
-(NSString *)_modifiedInput;
-(void)set_modifiedInput:(NSString *)arg1 ;
-(void)set_hint:(NSString *)arg1 ;
-(void)set_markedInput:(NSString *)arg1 ;
-(void)set_modifierFlags:(long long)arg1 ;
-(NSString *)_hint;
-(void)_privatizeInput;
-(NSString *)_markedInput;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(BOOL)_matchesKeyCommand:(id)arg1 ;
-(void)set_commandModifiedInput:(NSString *)arg1 ;
-(void)set_unmodifiedInput:(NSString *)arg1 ;
-(void)set_shiftModifiedInput:(NSString *)arg1 ;
-(void)set_privateInput:(NSString *)arg1 ;
-(NSString *)_commandModifiedInput;
-(NSString *)_shiftModifiedInput;
-(NSString *)_privateInput;
-(BOOL)_isExternalEvent;
-(void)set_externalEvent:(BOOL)arg1 ;
@end

