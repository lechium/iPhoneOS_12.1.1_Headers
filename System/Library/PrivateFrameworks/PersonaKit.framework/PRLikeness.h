/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonaKit/PersonaKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSMutableSet, NSDate, NSString, NSSet;

@interface PRLikeness : NSObject <NSSecureCoding> {

	CGImageRef _staticRepresentation;
	NSData* _staticRepresentationData;
	NSMutableSet* _dirtyProperties;
	BOOL _isCurrent;
	unsigned long long _type;
	unsigned long long _scope;
	NSData* _recipe;
	NSDate* _creationDate;
	NSString* _uniqueIdentifier;
	NSString* _externalIdentifier;
	unsigned long long _version;
	NSDate* _expirationDate;
	NSDate* _softExpirationDate;
	NSString* _ownerID;
	long long _source;
	NSDate* _insertionDate;
	CGRect _cropRectForTopLeftOrigin;

}

@property (assign,setter=setCurrent:,nonatomic) BOOL isCurrent;                 //@synthesize isCurrent=_isCurrent - In the implementation block
@property (assign,nonatomic) unsigned long long version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * softExpirationDate;                       //@synthesize softExpirationDate=_softExpirationDate - In the implementation block
@property (nonatomic,retain) NSData * staticRepresentationData; 
@property (nonatomic,retain) NSString * ownerID;                                //@synthesize ownerID=_ownerID - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long scope;                          //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) long long source;                                  //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * typeDescription; 
@property (nonatomic,readonly) NSString * scopeDescription; 
@property (nonatomic,retain) NSDate * insertionDate;                            //@synthesize insertionDate=_insertionDate - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                             //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSSet * dirtyProperties;                           //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,readonly) BOOL isDirty; 
@property (nonatomic,copy) NSData * recipe;                                     //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) CGRect cropRectForTopLeftOrigin;                   //@synthesize cropRectForTopLeftOrigin=_cropRectForTopLeftOrigin - In the implementation block
@property (nonatomic,readonly) CGRect cropRectForBottomLeftOrigin; 
@property (nonatomic,readonly) NSString * uniqueIdentifier;                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * externalIdentifier;                       //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
+(id)monogramWithScope:(unsigned long long)arg1 recipe:(id)arg2 staticRepresentation:(CGImageRef)arg3 ;
+(id)_photoWithScope:(unsigned long long)arg1 image:(CGImageRef)arg2 cropRectForTopLeftOrigin:(CGRect)arg3 ;
+(CGRect)_flippedRectForRect:(CGRect)arg1 relativeToImage:(CGImageRef)arg2 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRectForTopLeftOrigin:(CGRect)arg2 ;
+(id)descriptionForScope:(unsigned long long)arg1 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRectForBottomLeftOrigin:(CGRect)arg2 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRect:(CGRect)arg2 ;
+(id)diddlySquatLikeness;
+(id)likenessWithPropagatedData:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfCropRectForTopLeftOrigin;
+(unsigned long long)scopeFromDescription:(id)arg1 ;
+(id)monogramWithRecipe:(id)arg1 staticRepresentation:(CGImageRef)arg2 ;
+(id)photoWithScope:(unsigned long long)arg1 image:(CGImageRef)arg2 ;
+(id)photoWithImage:(CGImageRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_dateFormatter;
-(void)clearDirtyProperties;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setCurrent:(BOOL)arg1 ;
-(void)setStaticRepresentation:(CGImageRef)arg1 ;
-(void)setCropRectForTopLeftOrigin:(CGRect)arg1 ;
-(CGRect)cropRectForTopLeftOrigin;
-(BOOL)isDiddlySquat;
-(id)dataForPropagation;
-(CGRect)cropRectForBottomLeftOrigin;
-(void)setStaticRepresentationData:(NSData *)arg1 ;
-(NSString *)scopeDescription;
-(NSDate *)softExpirationDate;
-(void)setSoftExpirationDate:(NSDate *)arg1 ;
-(NSDate *)insertionDate;
-(void)setInsertionDate:(NSDate *)arg1 ;
-(NSSet *)dirtyProperties;
-(BOOL)isDirty;
-(void)setOwnerID:(NSString *)arg1 ;
-(NSData *)recipe;
-(BOOL)isCurrent;
-(void)setCropRect:(CGRect)arg1 ;
-(CGRect)cropRect;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setRecipe:(NSData *)arg1 ;
-(void)setDirtyProperties:(NSSet *)arg1 ;
-(NSString *)ownerID;
-(NSString *)externalIdentifier;
-(CGImageRef)staticRepresentation;
-(NSData *)staticRepresentationData;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(void)setScope:(unsigned long long)arg1 ;
-(unsigned long long)scope;
-(NSString *)uniqueIdentifier;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)typeDescription;
-(id)_initWithIdentifier:(id)arg1 ;
@end

