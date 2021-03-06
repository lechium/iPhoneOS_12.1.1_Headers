/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentContextMutating.h>

@class AFExperimentContext, NSDictionary, NSString;

@interface _AFExperimentContextMutation : NSObject <AFExperimentContextMutating> {

	AFExperimentContext* _baseModel;
	NSDictionary* _experimentsByConfigurationIdentifier;
	struct {
		unsigned isDirty : 1;
		unsigned hasExperimentsByConfigurationIdentifier : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBaseModel:(id)arg1 ;
-(void)setExperimentsByConfigurationIdentifier:(id)arg1 ;
-(id)generate;
-(id)init;
@end

