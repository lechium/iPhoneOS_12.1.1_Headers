/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSTextCheckingKeyEvent : NSObject <NSCopying, NSSecureCoding> {

	long long _layoutType;
	unsigned long long _keyboardType;
	NSString* _identifier;
	NSString* _primaryLanguage;
	unsigned long long _flags;
	double _time;
	NSString* _keys;
	NSString* _ukeys;

}

@property (readonly) long long keyboardLayoutType; 
@property (readonly) unsigned long long keyboardType; 
@property (copy,readonly) NSString * keyboardLayoutIdentifier; 
@property (copy,readonly) NSString * primaryLanguage; 
@property (readonly) unsigned long long flags; 
@property (readonly) double timestamp; 
@property (copy,readonly) NSString * characters; 
@property (copy,readonly) NSString * charactersIgnoringModifiers; 
+(BOOL)supportsSecureCoding;
-(NSString *)characters;
-(NSString *)keyboardLayoutIdentifier;
-(NSString *)charactersIgnoringModifiers;
-(long long)keyboardLayoutType;
-(id)initWithKeyboardLayoutType:(long long)arg1 keyboardType:(unsigned long long)arg2 identifier:(id)arg3 primaryLanguage:(id)arg4 flags:(unsigned long long)arg5 timestamp:(double)arg6 characters:(id)arg7 charactersIgnoringModifiers:(id)arg8 ;
-(unsigned long long)flags;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(unsigned long long)keyboardType;
-(NSString *)primaryLanguage;
@end

