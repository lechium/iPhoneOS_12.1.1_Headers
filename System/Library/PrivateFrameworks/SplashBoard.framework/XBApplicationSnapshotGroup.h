/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, XBSnapshotContainerIdentity, NSMutableSet, NSSet;

@interface XBApplicationSnapshotGroup : NSObject <NSSecureCoding, BSDescriptionProviding> {

	NSString* _identifier;
	XBSnapshotContainerIdentity* _containerIdentity;
	NSMutableSet* _snapshots;

}

@property (copy) XBSnapshotContainerIdentity * containerIdentity;              //@synthesize containerIdentity=_containerIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerPath; 
@property (nonatomic,copy,readonly) NSSet * snapshots;                         //@synthesize snapshots=_snapshots - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)containerPath;
-(XBSnapshotContainerIdentity *)containerIdentity;
-(void)_manifestQueueDecode_setStore:(id)arg1 ;
-(void)setContainerIdentity:(XBSnapshotContainerIdentity *)arg1 ;
-(BOOL)_validateWithContainerIdentity:(id)arg1 ;
-(BOOL)removeSnapshot:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 containerIdentity:(id)arg2 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)_commonInit;
-(void)_invalidate;
-(void)addSnapshot:(id)arg1 ;
-(NSSet *)snapshots;
@end

