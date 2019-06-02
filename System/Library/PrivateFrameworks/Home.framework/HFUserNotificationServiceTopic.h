/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFIconDescriptor;
@class NSSet, NSString;

@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable> {

	NSSet* _serviceTypes;
	NSSet* _accessoryCategoryTypes;
	NSString* _topicName;
	id<HFIconDescriptor> _iconDescriptor;

}

@property (nonatomic,copy,readonly) NSSet * serviceTypes;                        //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * accessoryCategoryTypes;              //@synthesize accessoryCategoryTypes=_accessoryCategoryTypes - In the implementation block
@property (nonatomic,copy,readonly) NSString * topicName;                        //@synthesize topicName=_topicName - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(NSSet *)serviceTypes;
-(id)initWithServiceTypes:(id)arg1 accessoryCategoryTypes:(id)arg2 topicName:(id)arg3 iconDescriptor:(id)arg4 ;
-(id)initWithServiceType:(id)arg1 topicName:(id)arg2 ;
-(NSString *)topicName;
-(id<HFIconDescriptor>)iconDescriptor;
-(NSSet *)accessoryCategoryTypes;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

