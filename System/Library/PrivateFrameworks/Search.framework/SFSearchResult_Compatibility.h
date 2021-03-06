/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <Search/SFSearchResult_SpotlightExtras.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras <NSCopying>

@property (nonatomic,retain) NSString * resultIdentifier; 
@property (nonatomic,retain) NSString * externalIdentifier; 
@property (nonatomic,retain) NSString * compatibilityTitle; 
-(Class)classForKeyedArchiver;
-(void)writeTo:(id)arg1 ;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(BOOL)isQuickGlance;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(NSString *)resultIdentifier;
-(void)setCompatibilityTitle:(NSString *)arg1 ;
-(NSString *)compatibilityTitle;
-(void)setSimpleTitle:(id)arg1 ;
-(id)simpleTitle;
-(id)section_header;
-(NSString *)externalIdentifier;
-(id)debugDescription;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)uniqueIdentifier;
-(void)setUniqueIdentifier:(id)arg1 ;
-(Class)classForCoder;
@end

