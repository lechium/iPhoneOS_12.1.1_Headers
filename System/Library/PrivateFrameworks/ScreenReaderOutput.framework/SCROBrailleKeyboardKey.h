/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/SCROBrailleKey.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding> {

	unsigned _modifiers;
	unsigned _keyCode;
	unsigned _virtualKeyCode;
	NSString* _keyString;

}

@property (nonatomic,retain) NSString * keyString;                 //@synthesize keyString=_keyString - In the implementation block
@property (assign,nonatomic) unsigned modifiers;                   //@synthesize modifiers=_modifiers - In the implementation block
@property (assign,nonatomic) unsigned keyCode;                     //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) unsigned virtualKeyCode;              //@synthesize virtualKeyCode=_virtualKeyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)keyString;
-(void)setKeyString:(NSString *)arg1 ;
-(unsigned)keyCode;
-(void)setKeyCode:(unsigned)arg1 ;
-(unsigned)modifiers;
-(void)setModifiers:(unsigned)arg1 ;
-(unsigned)virtualKeyCode;
-(void)setVirtualKeyCode:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

