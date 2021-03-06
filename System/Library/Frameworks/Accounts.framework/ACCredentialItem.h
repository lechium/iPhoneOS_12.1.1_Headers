/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>

@class NSString, NSDate, NSURL, ACAccountStore, NSMutableSet, NSSet;

@interface ACCredentialItem : NSObject <NSSecureCoding, ACProtobufCoding> {

	NSString* _accountIdentifier;
	NSDate* _expirationDate;
	NSString* _serviceName;
	BOOL _persistent;
	NSURL* _objectID;
	ACAccountStore* _accountStore;
	NSMutableSet* _dirtyProperties;

}

@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,getter=isPersistent,nonatomic) BOOL persistent; 
@property (nonatomic,retain) NSURL * objectID; 
@property (assign,nonatomic,__weak) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties;                         //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)clearDirtyProperties;
-(id)_initWithProtobuf:(id)arg1 ;
-(id)_encodeProtobuf;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(id)initWithManagedCredentialItem:(id)arg1 ;
-(id)fullDescription;
-(id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2 ;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(NSSet *)dirtyProperties;
-(BOOL)isDirty;
-(void)setObjectID:(NSURL *)arg1 ;
-(NSURL *)objectID;
-(ACAccountStore *)accountStore;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(BOOL)isExpired;
-(void)setServiceName:(NSString *)arg1 ;
-(void)markAllPropertiesDirty;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serviceName;
-(BOOL)isPersistent;
-(void)setPersistent:(BOOL)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
@end

