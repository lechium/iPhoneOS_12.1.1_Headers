/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray;

@interface PRLikenessChange : NSObject {

	NSString* _identifier;
	unsigned long long _type;
	NSString* _changedLikenessID;
	NSNumber* _changedLikenessVersion;
	NSArray* _dirtyLikenessProperties;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * changedLikenessID;                   //@synthesize changedLikenessID=_changedLikenessID - In the implementation block
@property (nonatomic,copy) NSNumber * changedLikenessVersion;              //@synthesize changedLikenessVersion=_changedLikenessVersion - In the implementation block
@property (nonatomic,copy) NSArray * dirtyLikenessProperties;              //@synthesize dirtyLikenessProperties=_dirtyLikenessProperties - In the implementation block
+(id)changeForLikeness:(id)arg1 withType:(unsigned long long)arg2 ;
+(unsigned long long)changeTypeFromDescription:(id)arg1 ;
+(id)descriptionForChangeType:(unsigned long long)arg1 ;
-(NSString *)changedLikenessID;
-(void)setChangedLikenessID:(NSString *)arg1 ;
-(NSNumber *)changedLikenessVersion;
-(void)setChangedLikenessVersion:(NSNumber *)arg1 ;
-(NSArray *)dirtyLikenessProperties;
-(void)setDirtyLikenessProperties:(NSArray *)arg1 ;
-(NSString *)identifier;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
@end

