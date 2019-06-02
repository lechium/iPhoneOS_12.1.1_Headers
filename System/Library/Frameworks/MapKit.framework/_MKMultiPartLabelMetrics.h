/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSArray, NSMutableAttributedString;

@interface _MKMultiPartLabelMetrics : NSObject {

	NSAttributedString* _originalAttributedString;
	NSArray* _separators;
	NSArray* _components;
	NSMutableAttributedString* _attributedString;
	unsigned long long _currentSeparatorIndex;

}

@property (nonatomic,copy,readonly) NSAttributedString * originalAttributedString;              //@synthesize originalAttributedString=_originalAttributedString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * separators;                                       //@synthesize separators=_separators - In the implementation block
@property (nonatomic,copy,readonly) NSArray * components;                                       //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSMutableAttributedString * attributedString;                    //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) unsigned long long currentSeparatorIndex;                          //@synthesize currentSeparatorIndex=_currentSeparatorIndex - In the implementation block
-(NSArray *)separators;
-(id)initWithMultiPartString:(id)arg1 ;
-(BOOL)replaceSeparatorAtIndex:(unsigned long long)arg1 withString:(id)arg2 ;
-(BOOL)_shiftLocationOfStrings:(id)arg1 startingAtIndex:(unsigned long long)arg2 shiftValue:(long long)arg3 ;
-(NSAttributedString *)originalAttributedString;
-(unsigned long long)currentSeparatorIndex;
-(void)setCurrentSeparatorIndex:(unsigned long long)arg1 ;
-(void)reset;
-(NSMutableAttributedString *)attributedString;
-(NSArray *)components;
@end

