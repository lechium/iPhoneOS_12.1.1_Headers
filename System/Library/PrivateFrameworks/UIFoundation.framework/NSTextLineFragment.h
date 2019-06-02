/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class UIFont, NSAttributedString;

@interface NSTextLineFragment : NSObject {

	CTLineRef _lineRef;
	unsigned short* _glyphs;
	CGSize* _advances;
	UIFont* _font;
	NSAttributedString* _attributedString;
	NSRange _characterRange;
	CGPoint glyphOrigin;
	CGRect typographicBounds;

}

@property (assign) CGRect typographicBounds; 
@property (assign) CGPoint glyphOrigin; 
@property (copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (readonly) long long numberOfGlyphs; 
@property (readonly) NSRange characterRange;                                  //@synthesize characterRange=_characterRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGPoint)glyphOrigin;
-(void)setLineRef:(CTLineRef)arg1 ;
-(void)setGlyphs:(const unsigned short*)arg1 advances:(const CGSize*)arg2 font:(id)arg3 ;
-(CGRect)typographicUsedBounds;
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2 ;
-(CGPoint)locationForCharacterAtIndex:(long long)arg1 ;
-(long long)characterIndexForPoint:(CGPoint)arg1 fractionOfDistanceThroughGlyph:(double*)arg2 ;
-(void)setTypographicBounds:(CGRect)arg1 ;
-(void)setGlyphOrigin:(CGPoint)arg1 ;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(CGRect)typographicBounds;
-(NSRange)characterRange;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(long long)numberOfGlyphs;
@end

