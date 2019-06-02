/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class NSString, NSArray;

@interface HMDAccessorySettingGroupMetadata : HMFObject <HMFObject> {

	NSString* _name;
	NSArray* _groups;
	NSArray* _settings;

}

@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * groups;                                       //@synthesize groups=_groups - In the implementation block
@property (copy,readonly) NSArray * settings;                                     //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)groupsWithArrayRepresenation:(id)arg1 ;
+(id)groupWithDictonaryRepresentation:(id)arg1 ;
-(NSString *)propertyDescription;
-(id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3 ;
-(id)modelsWithParentIdentifier:(id)arg1 ;
-(NSString *)name;
-(NSArray *)settings;
-(NSArray *)groups;
@end

