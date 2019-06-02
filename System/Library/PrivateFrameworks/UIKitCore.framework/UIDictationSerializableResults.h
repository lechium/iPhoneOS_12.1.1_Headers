/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSIndexPath;

@interface UIDictationSerializableResults : NSObject <NSSecureCoding, NSCopying> {

	BOOL _fromKeyboard;
	BOOL _useServerCapitalization;
	BOOL _addTrailingSpace;
	BOOL _allowsAlternatives;
	NSArray* _phrases;
	const CFStringRef _transform;
	NSIndexPath* _indexPathOfInterpretations;

}

@property (nonatomic,copy) NSArray * phrases;                                       //@synthesize phrases=_phrases - In the implementation block
@property (assign,nonatomic) BOOL fromKeyboard;                                     //@synthesize fromKeyboard=_fromKeyboard - In the implementation block
@property (assign,nonatomic) const CFStringRef transform;                           //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) BOOL useServerCapitalization;                          //@synthesize useServerCapitalization=_useServerCapitalization - In the implementation block
@property (assign,nonatomic) BOOL addTrailingSpace;                                 //@synthesize addTrailingSpace=_addTrailingSpace - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathOfInterpretations;              //@synthesize indexPathOfInterpretations=_indexPathOfInterpretations - In the implementation block
@property (nonatomic,readonly) BOOL allowsAlternatives;                             //@synthesize allowsAlternatives=_allowsAlternatives - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTransform:(const CFStringRef)arg1 ;
-(id)text;
-(const CFStringRef)transform;
-(BOOL)fromKeyboard;
-(id)initWithPhrases:(id)arg1 ;
-(id)textArray;
-(id)initWithArrayOfArrayOfStrings:(id)arg1 ;
-(id)bestText;
-(void)setFromKeyboard:(BOOL)arg1 ;
-(void)setUseServerCapitalization:(BOOL)arg1 ;
-(id)bestResults;
-(id)dictationPhraseArray;
-(NSArray *)phrases;
-(void)setAddTrailingSpace:(BOOL)arg1 ;
-(NSIndexPath *)indexPathOfInterpretations;
-(void)setIndexPathOfInterpretations:(NSIndexPath *)arg1 ;
-(void)setPhrases:(NSArray *)arg1 ;
-(id)bestTextArray;
-(BOOL)allowsAlternatives;
-(id)singleLineResult;
-(BOOL)useServerCapitalization;
-(BOOL)addTrailingSpace;
@end

