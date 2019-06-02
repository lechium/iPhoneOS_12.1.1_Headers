/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSCharacterSet;

@interface NSScanner : NSObject <NSCopying>

@property (copy,readonly) NSString * string; 
@property (assign) unsigned long long scanLocation; 
@property (copy) NSCharacterSet * charactersToBeSkipped; 
@property (assign) BOOL caseSensitive; 
@property (retain) id locale; 
+(id)localizedScannerWithString:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)scannerWithString:(id)arg1 ;
-(id)_remainingString;
-(BOOL)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2 ;
-(NSCharacterSet *)charactersToBeSkipped;
-(BOOL)caseSensitive;
-(id)_invertedSkipSet;
-(BOOL)scanHexDouble:(double*)arg1 ;
-(BOOL)scanHexFloat:(float*)arg1 ;
-(BOOL)scanUnsignedInteger:(unsigned long long*)arg1 ;
-(BOOL)scanDecimal:(SCD_Struct_NS46*)arg1 ;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
-(BOOL)scanUnsignedLongLong:(unsigned long long*)arg1 ;
-(BOOL)scanHexInt:(unsigned*)arg1 ;
-(BOOL)scanLongLong:(long long*)arg1 ;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(unsigned long long)scanLocation;
-(BOOL)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)isAtEnd;
-(BOOL)scanInteger:(long long*)arg1 ;
-(BOOL)scanDouble:(double*)arg1 ;
-(BOOL)scanFloat:(float*)arg1 ;
-(BOOL)scanInt:(int*)arg1 ;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)scanHexLongLong:(unsigned long long*)arg1 ;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(id)arg1 ;
-(BOOL)scanUpToString:(id)arg1 intoString:(id*)arg2 ;
-(BOOL)scanString:(id)arg1 intoString:(id*)arg2 ;
-(id)locale;
@end

