/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NFAppletCollection;
@class NSString, NSArray, NSObject, NSData;

@interface NFApplet : NSObject <NSSecureCoding> {

	NSString* _groupHeadID;
	NSArray* _groupMemberIDs;
	NSArray* _referencedAppIDs;
	BOOL _isContainer;
	BOOL _isProxy;
	NSString* _packageIdentifier;
	NSString* _moduleIdentifier;
	NSArray* _multiSEApplicationGroupMemberIDs;
	unsigned char _appletGPState;
	unsigned char _groupActivationStyle;
	NSObject*<NFAppletCollection> _appletCollection;
	unsigned char _family;
	unsigned char _activationState;
	BOOL _authTransientSupport;
	BOOL _authTransientConfigurable;
	NSString* _identifier;
	NSString* _seIdentifier;
	NSData* _identifierAsData;
	NSData* _discretionaryData;

}

@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * seIdentifier;                     //@synthesize seIdentifier=_seIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * identifierAsData;                   //@synthesize identifierAsData=_identifierAsData - In the implementation block
@property (nonatomic,readonly) NSData * discretionaryData;                  //@synthesize discretionaryData=_discretionaryData - In the implementation block
@property (nonatomic,readonly) unsigned char family;                        //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) unsigned char lifecycleState; 
@property (nonatomic,readonly) unsigned char activationState;               //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,readonly) BOOL authTransientSupport;                   //@synthesize authTransientSupport=_authTransientSupport - In the implementation block
@property (nonatomic,readonly) NFApplet * groupHead; 
@property (nonatomic,readonly) NSArray * groupMembers; 
@property (nonatomic,readonly) NSArray * referencedApps; 
@property (nonatomic,readonly) BOOL authTransientConfigurable;              //@synthesize authTransientConfigurable=_authTransientConfigurable - In the implementation block
@property (nonatomic,readonly) BOOL isTypeF; 
@property (nonatomic,readonly) BOOL isGPLocked; 
+(BOOL)supportsSecureCoding;
-(NSArray *)groupMembers;
-(id)moduleIdentifier;
-(BOOL)isContainer;
-(BOOL)authTransientSupport;
-(id)groupMemberIDs;
-(id)multiSEGroupMemberIDs;
-(id)groupHeadID;
-(unsigned char)lifecycleState;
-(BOOL)isGPLocked;
-(id)asDictionary;
-(unsigned char)family;
-(NSData *)discretionaryData;
-(id)packageIdentifier;
-(unsigned char)activationState;
-(BOOL)isTypeF;
-(void)setAppletCollection:(id)arg1 ;
-(BOOL)isEqualToApplet:(id)arg1 ;
-(NSData *)identifierAsData;
-(NSString *)seIdentifier;
-(unsigned char)groupActivationStyle;
-(id)appletCollection;
-(NFApplet *)groupHead;
-(NSArray *)referencedApps;
-(id)multiSSDMembers;
-(BOOL)isPPSEControllable;
-(unsigned long long)rawGPState;
-(BOOL)authTransientConfigurable;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isProxy;
-(id)description;
-(void)_setIsActive:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

