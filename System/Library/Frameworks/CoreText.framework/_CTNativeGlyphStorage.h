/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreText/_CTGlyphStorage.h>

@interface _CTNativeGlyphStorage : _CTGlyphStorage {

	const long long* _attachCounts;
	const CGPoint* _origins;
	unsigned long long _retainCount;
	GlyphStack* _stack;
	long long _capacity;
	void* _preallocatedStorage;

}
+(id)newWithCount:(long long)arg1 ;
-(CGPoint)originAtIndex:(long long)arg1 ;
-(void)setProps:(unsigned)arg1 atIndex:(long long)arg2 ;
-(void)initGlyphStackWithCapacity:(long long)arg1 ;
-(void)pushGlyphAtIndex:(long long)arg1 ;
-(void)popGlyphAtIndex:(long long)arg1 ;
-(long long)attachmentCountAtIndex:(long long)arg1 ;
-(void)setStringIndex:(long long)arg1 atIndex:(long long)arg2 ;
-(void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2 ;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long long)arg2 ;
-(BOOL)implementsOrigins;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void)setOrigin:(CGPoint)arg1 atIndex:(long long)arg2 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long long)arg2 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long long)arg2 ;
-(id)prepareWithCapacity:(long long)arg1 preallocated:(BOOL)arg2 ;
-(const CGPoint*)origins;
-(id)initWithCount:(long long)arg1 ;
-(void)dealloc;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)setCapacity:(long long)arg1 ;
@end

