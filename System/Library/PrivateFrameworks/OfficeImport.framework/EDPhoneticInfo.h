/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class EDResources, NSString, EDCollection;

@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	unsigned long long mFontIndex;
	NSString* mString;
	int mType;
	int mAlign;
	EDCollection* mRuns;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneticInfoWithResources:(id)arg1 ;
-(void)setAlign:(int)arg1 ;
-(id)runs;
-(int)align;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(unsigned long long)fontIndex;
-(BOOL)isEqualToEDPhoneticInfo:(id)arg1 ;
-(void)prependString:(id)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)string;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)setString:(id)arg1 ;
@end
