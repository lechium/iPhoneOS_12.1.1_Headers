/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol REDonatedActionIdentifierProviding;
@class NSDate, REIdentifier, NSArray, NSString, NSDictionary;

@interface REDonatedAction : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isIntentBacked;
	BOOL _localDonation;
	unsigned long long _type;
	NSDate* _creationDate;
	NSDate* _localSaveDate;
	REIdentifier* _donationIdentifier;
	id<REDonatedActionIdentifierProviding> _actionTypeIdentifier;
	id<REDonatedActionIdentifierProviding> _simplifiedActionTypeIdentifier;
	unsigned long long _relevanceProvidersHash;
	NSArray* _relevanceProviders;
	NSString* _intentTypeName;
	NSString* _activityType;
	NSDictionary* _metrics;

}

@property (nonatomic,readonly) unsigned long long type;                                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSDate * creationDate;                                                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * localSaveDate;                                                             //@synthesize localSaveDate=_localSaveDate - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) REIdentifier * donationIdentifier;                                                  //@synthesize donationIdentifier=_donationIdentifier - In the implementation block
@property (nonatomic,readonly) id<REDonatedActionIdentifierProviding> actionTypeIdentifier;                        //@synthesize actionTypeIdentifier=_actionTypeIdentifier - In the implementation block
@property (nonatomic,readonly) id<REDonatedActionIdentifierProviding> simplifiedActionTypeIdentifier;              //@synthesize simplifiedActionTypeIdentifier=_simplifiedActionTypeIdentifier - In the implementation block
@property (getter=isLocalDonation,nonatomic,readonly) BOOL localDonation;                                          //@synthesize localDonation=_localDonation - In the implementation block
@property (nonatomic,readonly) unsigned long long relevanceProvidersHash;                                          //@synthesize relevanceProvidersHash=_relevanceProvidersHash - In the implementation block
@property (nonatomic,readonly) NSArray * relevanceProviders;                                                       //@synthesize relevanceProviders=_relevanceProviders - In the implementation block
@property (nonatomic,readonly) NSString * intentTypeName;                                                          //@synthesize intentTypeName=_intentTypeName - In the implementation block
@property (nonatomic,readonly) NSString * activityType;                                                            //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * remoteBundleIdentifier; 
@property (nonatomic,readonly) NSString * localBundleIdentifier; 
@property (nonatomic,readonly) unsigned long long trainingActionIdentifier; 
@property (nonatomic,retain) NSDictionary * metrics;                                                               //@synthesize metrics=_metrics - In the implementation block
+(id)bundleIdForExtensionId:(id)arg1 ;
+(BOOL)supportedActivityType:(id)arg1 forBundleID:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSArray *)relevanceProviders;
-(NSString *)intentTypeName;
-(REIdentifier *)donationIdentifier;
-(NSDate *)creationDate;
-(id)initWithEvent:(id)arg1 filtered:(BOOL)arg2 ;
-(NSDate *)localSaveDate;
-(id<REDonatedActionIdentifierProviding>)simplifiedActionTypeIdentifier;
-(id<REDonatedActionIdentifierProviding>)actionTypeIdentifier;
-(unsigned long long)relevanceProvidersHash;
-(unsigned long long)trainingActionIdentifier;
-(unsigned long long)_hashRelevanceProviders:(id)arg1 ;
-(id)_initInteractionWithEvent:(id)arg1 filtered:(BOOL)arg2 ;
-(id)_initUserActivityWithEvent:(id)arg1 filtered:(BOOL)arg2 ;
-(id)_initRelevantShortcutWithEvent:(id)arg1 filtered:(BOOL)arg2 ;
-(BOOL)isLocalDonation;
-(void)_loadDuetEvent:(/*^block*/id)arg1 ;
-(NSString *)remoteBundleIdentifier;
-(NSString *)localBundleIdentifier;
-(void)loadUserActivity:(/*^block*/id)arg1 ;
-(void)loadIntent:(/*^block*/id)arg1 ;
-(void)loadRelevantShortcut:(/*^block*/id)arg1 ;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(NSDictionary *)metrics;
-(NSString *)activityType;
@end

