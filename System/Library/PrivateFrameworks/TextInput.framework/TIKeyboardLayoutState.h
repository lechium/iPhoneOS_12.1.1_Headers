/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasCandidateKey;
	BOOL _hasAccentKey;
	BOOL _canMultitap;
	BOOL _isAlphabeticPlane;
	BOOL _diacriticForwardCompose;
	BOOL _interfaceIdiomIsPad;
	NSString* _inputMode;
	NSString* _layoutTag;
	long long _userInterfaceIdiom;

}

@property (nonatomic,copy) NSString * inputMode;                        //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic) BOOL hasCandidateKey;                      //@synthesize hasCandidateKey=_hasCandidateKey - In the implementation block
@property (assign,nonatomic) BOOL hasAccentKey;                         //@synthesize hasAccentKey=_hasAccentKey - In the implementation block
@property (assign,nonatomic) BOOL canMultitap;                          //@synthesize canMultitap=_canMultitap - In the implementation block
@property (assign,nonatomic) BOOL isAlphabeticPlane;                    //@synthesize isAlphabeticPlane=_isAlphabeticPlane - In the implementation block
@property (assign,nonatomic) BOOL diacriticForwardCompose;              //@synthesize diacriticForwardCompose=_diacriticForwardCompose - In the implementation block
@property (nonatomic,copy) NSString * layoutTag;                        //@synthesize layoutTag=_layoutTag - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;              //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) BOOL interfaceIdiomIsPad;                  //@synthesize interfaceIdiomIsPad=_interfaceIdiomIsPad - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInterfaceIdiomIsPad;
-(void)setInterfaceIdiomIsPad:(BOOL)arg1 ;
-(BOOL)interfaceIdiomIsPad;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)userInterfaceIdiom;
-(void)setInputMode:(NSString *)arg1 ;
-(void)setLayoutTag:(NSString *)arg1 ;
-(NSString *)layoutTag;
-(BOOL)isAlphabeticPlane;
-(BOOL)diacriticForwardCompose;
-(BOOL)canMultitap;
-(BOOL)hasAccentKey;
-(void)setHasCandidateKey:(BOOL)arg1 ;
-(void)setHasAccentKey:(BOOL)arg1 ;
-(void)setCanMultitap:(BOOL)arg1 ;
-(void)setIsAlphabeticPlane:(BOOL)arg1 ;
-(void)setDiacriticForwardCompose:(BOOL)arg1 ;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(NSString *)inputMode;
-(BOOL)hasCandidateKey;
@end

