/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings, NSString;

@interface FBSSceneParameters : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSDescriptionProviding> {

	FBSSceneSpecification* _specification;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;

}

@property (nonatomic,copy) FBSSceneSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * clientSettings;                     //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parametersForSpecification:(id)arg1 ;
-(void)_configureCopy:(id)arg1 ;
-(void)setClientSettings:(FBSSceneClientSettings *)arg1 ;
-(FBSSceneSpecification *)specification;
-(id)initWithSpecification:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(FBSSceneSettings *)settings;
-(FBSSceneClientSettings *)clientSettings;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
@end

