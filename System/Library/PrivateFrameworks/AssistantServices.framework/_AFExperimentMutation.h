/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentMutating.h>

@class AFExperiment, NSString, NSDictionary;

@interface _AFExperimentMutation : NSObject <AFExperimentMutating> {

	AFExperiment* _baseModel;
	NSString* _configurationIdentifier;
	NSString* _configurationVersion;
	NSString* _deploymentGroupIdentifier;
	NSDictionary* _deploymentGroupProperties;
	long long _deploymentReason;
	struct {
		unsigned isDirty : 1;
		unsigned hasConfigurationIdentifier : 1;
		unsigned hasConfigurationVersion : 1;
		unsigned hasDeploymentGroupIdentifier : 1;
		unsigned hasDeploymentGroupProperties : 1;
		unsigned hasDeploymentReason : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBaseModel:(id)arg1 ;
-(void)setConfigurationIdentifier:(id)arg1 ;
-(void)setDeploymentGroupIdentifier:(id)arg1 ;
-(void)setDeploymentGroupProperties:(id)arg1 ;
-(void)setDeploymentReason:(long long)arg1 ;
-(id)generate;
-(void)setConfigurationVersion:(id)arg1 ;
-(id)init;
@end

